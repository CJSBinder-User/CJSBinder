# Configuration File

**CJSBinder** generates glue code mainly depends on the configuration file. Users can use template code in the configuration file to customize their own glue code. Template code is similar to normal C++ code but can use special tokens to extend expression ability.

An [example](example/) of configuration file is given. It uses V8 raw API to wrap and register C++ function and class. It gives converting approaches between frequently-used C++ types (including std::string and std::vector\<int\>) and JavaScript untyped values. It also shows the initialization of V8 engine. You can use:

---
    python3 generator.py -P example/example_config.json -H example/example_header.h -o example/gluecode.cpp

    g++ -std=c++11 -I ../v8/ -I ../v8/include -I example/ -o example/JSENGINE example/gluecode.cpp ../v8/libv8.a -lpthread

    ./example/JSENGINE example/example_javascript.js
---
to run the example. We will further explain the generation process with this example in the following.

---

## **Framework**

As the example shows, a configuration file is comprised of 4 main sections:

* "VariableName": Stores mappings from abstract variables to identifier names (Definition 4.7 in the paper).
* "Api": Stores type-related APIs (Definition 4.11).
* "Routine" : Stores routines (Definition 4.13).
* "Pattern" : Code patterns for all abstract procedures.

Roughly, template code in the "Pattern" will be **synthesized** to a complete glue code. Then special tokens in the template code will be **translated** according to "VariableName", "Api", "Routine" and the input C header file. We also **extend** our tool to adapt to some cases in real glue code.

---

### **Synthesis**

Template code will be synthesized as follows.

**1.** Wrapping code:
* FUNCPROXY: Create wrapper functions for all normal C functions.
    + funcsignature: Wrapper function signature.
    + context: Initialize JS environment.
    + js2c: Convert **every** JS arguments.
    + calling: Call the wrapped function.
    + c2js: Convert the return value of C function to a JavaScript value and then return it.
* CLASSPROXY-CONSTRUCTOR: Create wrapper functions for all constructors of C classes.
    + funcsignature: Wrapper function signature.
    + context: Initialize JS environment.
    + js2c: Convert **every** JS arguments.
    + calling: Create a C object.
    + content: Store the C object into the JavaScript receiver.
* CLASSPROXY-CLASSFUNCPROXY: Create wrapper functions for all public methods of C classes.
    + funcsignature: Wrapper function signature.
    + context: Initialize JS environment and load the C object.
    + js2c: Convert **every** JS arguments.
    + calling: Call the wrapped method.
    + c2js: Convert the return value of C function to a JavaScript value and then return it.

You can leave **js2c** and **c2js** in **CLASSPROXY** blank but only implement them in **FUNCPROXY** to indicate that those in **CLASSPROXY** have the same converting approaches with **FUNCPROXY**.


**2.** Registering code:
* GLOBALENV: Initialize global environment.
* GLUECONTEXTINIT: Initialize context for glue code.
* FUNCGLUE: Create registering code for **every** normal C functions.
* CLASSGLUE: Create registering code for **every** C classes.
    + begin: Creates a template of JavaScript class.
    + funcglue: Register **every** methods in the JavaScript class.
    + end: Register the JavaScript class into the JavaScript environment. 
* GLUECONTEXTEND: Exit the context safely.

---

### **Translation**

**1.** Abstract variable('%). If section **VariableName** gives mappings like:

---
    dictionary:{
        "isoname":"isolate"
    }
---

Then,

---
    Isolate* '%isoname = Isolate::New(create_params);               
    Isolate::Scope isolate_scope('%isoname);
---

will be translated into

---
    Isolate* isolate = Isolate::New(create_params);               
    Isolate::Scope isolate_scope(isolate);
---

Isolate is used everywhere in V8 APIs. You can change all identifier names of Isolate only by simply change the mapping in the dictionary of **VariableName**.

**2.** Intermediate variable('&). It avoids duplication of identifier name. It is mainly used in procedures used multiple times in the same namespace, e.g., template code in **FUNCGLUE** is applied to register every C function. If it needs to wrap two C functions, then the template code:

---
    patname:FUNCGLUE,
    pattern:[
        Local<String> '&key = ... //Create a JS string to name the JS wrapper function
        Local<Function> '&func = ... //Create a JS function
        Set('&key,'&func)//Register JS function '&func with name '&key
    ]
---

will be translated to

---
    Local<String> key0 = ...
    Local<Function> func0 = ...
    Set(key0,func0)//Register func0 with name key0
    Local<String> key1 = ...
    Local<Function> func1 = ...
    Set(key1,func1)//Register func1 with name key1
    /*Avoid duplication*/
---

**3.** Context variable('$). It carries information from the C header file. For example, If it has two C functions named **func1** and **func2** respectively to wrap and register, and the registering template code is:

---
    patname:FUNCGLUE,
    pattern:[
        Local<String> '&key = String::NewFromUtf8('%isoname, "'$cfuncname"); 
        //Create a JS string to name the JS wrapper function by original function name
    ]
---

When generating code for registering, **FUNCGLUE** will be applied in every function, and **'$cfuncname** is translated according to the current wrapped function, just like:

---
    Local<String> key0 = String::NewFromUtf8(isolate, func1);
    ...
    Local<String> key1 = String::NewFromUtf8(isolate, func2);
    ...
---



Existing context variable contains:
* cclassname: name of C class.
* cfuncname: name of C function or method.
* cargindex: index of the C argument.
* cargtype: type of the C argument.
* crestype: type of the return value.



**4.** Type-related API('*). It's easy to understand with an example. If a function with two arguments of type **int** and **double**, and a type-related API is defined as:

---
    name:Js2CValueConvert,
    argument:['#jsvalue,'#cvalue,'#type],
    element:[
        {
            "type":"int",
            "pattern":[
                "'#type '#cvalue = '#jsvalue.As<Int32>()->Value();"
            ]
        },
        {
            "type":"double",
            "pattern":[
                "'#type '#cvalue = '#jsvalue.As<Number>()->Value();"
            ]
        },
    ]
---

and the abstract procedure **js2c** is:

---
    patname:FUNCPROXY,
    "pattern":{
        "js2c":[
            '*Js2CValueConvert'(jsarg['$cargindex],'&carg,'$cargtype')
            //'*apiname'(parameter1,parameter2...')
            //jsarg: the parameter list passed from JavaScript, jsarg[0] means the first parameter of JavaScript values.
        ]
    }
---

Then, when generating wrapping code, **js2c** will be applied in converting every argument, i.e., it will be firstly translated to

---
    '*Js2CValueConvert'(jsarg[0],carg0,int') 
    '*Js2CValueConvert'(jsarg[1],carg1,double')
---

Then it will be translated to

---
    int carg = jsarg[0].As<Int32>()->Value();
    double carg = jsarg[1].As<Number>()->Value();
---

according to the given type **int** and **double**, which is just the required glue code.

**5.** Routine('*). Routine makes it convenient for the programmer to define some frequently-used code snippets. For example, an untyped JavaScript value is commonly type-checked before converting to a C value, and the programmer can define a routine to combine checking and converting. The definition and usage of this routine is pre-defined in the existing [example](example/) to which you can refer.

---

### **Extension**

**1.** Special types. We always assume that every C parameter is converted by the input JavaScript value, but sometimes C parameter is initialized locally in C. One can remark these special types in **js2cspecialtype** of **FUNCPROXY** or **CLASSPROXY**. An [example](../experiment/usefulness/cjsbinder/configuration/node.js/ChannelWrap.json) from experiments just show the case. 

**2.** Proxy pattern. Sometimes the wrapped class is a proxy, and the functionality is implemented in another class. To cover this case, a field **proxy** is given in the **calling** of **CLASSPROXY** to profile how to access the implementation object from the wrapped object. An [example](../experiment/usefulness/cjsbinder/configuration/node.js/DeserializerContext.json) from experiments just show the case. 
