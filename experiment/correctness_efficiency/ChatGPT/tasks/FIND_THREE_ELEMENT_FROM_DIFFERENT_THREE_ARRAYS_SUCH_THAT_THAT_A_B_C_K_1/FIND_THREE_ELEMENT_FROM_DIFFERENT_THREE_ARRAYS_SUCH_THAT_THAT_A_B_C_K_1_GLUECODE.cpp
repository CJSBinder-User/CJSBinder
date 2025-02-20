#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include "include/libplatform/libplatform.h"
#include "include/v8.h"
#include "CQuesHeader.h"
using namespace v8;


// V8 related functions for handling JavaScript

void Print(const FunctionCallbackInfo<Value>& args){
   v8::Isolate* isolate = args.GetIsolate();
   v8::String::Utf8Value str(isolate, args[0]);
   std::string cppStr(*str);
   std::cout << cppStr << std::endl;
}

//
//[code snippet 1]
void FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1_constructor(const v8::FunctionCallbackInfo<v8::Value>& args) {
    FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1* obj = new FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1();
    args.This()->SetInternalField(0, v8::External::New(args.GetIsolate(), obj));
}


//
//[code snippet 2]
void FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1_F_T_E_F_D_T_A_S_T_T_A_B_C_K_1_f_gold(const v8::FunctionCallbackInfo<v8::Value>& args) {
    if (args.Length() < 6 || !args[0]->IsArray() || !args[1]->IsArray() || !args[2]->IsArray() ||
        !args[3]->IsInt32() || !args[4]->IsInt32() || !args[5]->IsInt32()) {
        args.GetReturnValue().Set(v8::Undefined(args.GetIsolate()));
        return;
    }
    
    FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1* obj = 
        static_cast<FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1*>(v8::External::Cast(*args.This()->GetInternalField(0))->Value());
    
    // Retrieve the arrays
    v8::Local<v8::Array> arr1 = v8::Local<v8::Array>::Cast(args[0]);
    v8::Local<v8::Array> arr2 = v8::Local<v8::Array>::Cast(args[1]);
    v8::Local<v8::Array> arr3 = v8::Local<v8::Array>::Cast(args[2]);
    
    int n1 = args[3]->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    int n2 = args[4]->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    int n3 = args[5]->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);

    // Prepare the C++ arrays and fill them with values from the JavaScript arrays
    int* a1 = new int[n1];
    for (int i = 0; i < n1; ++i) {
        a1[i] = arr1->Get(i)->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    }

    int* a2 = new int[n2];
    for (int i = 0; i < n2; ++i) {
        a2[i] = arr2->Get(i)->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    }

    int* a3 = new int[n3];
    for (int i = 0; i < n3; ++i) {
        a3[i] = arr3->Get(i)->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    }

    // Call the method
    bool result = obj->F_T_E_F_D_T_A_S_T_T_A_B_C_K_1_f_gold(a1, a2, a3, n1, n2, n3, 0); // Assuming the last parameter for now is 0

    // Clean up
    delete[] a1;
    delete[] a2;
    delete[] a3;

    args.GetReturnValue().Set(v8::Boolean::New(args.GetIsolate(), result));
}


// Set up the V8 environment and expose the class
void Initialize(v8::Isolate* isolate, v8::Local<v8::Context>& context) {
    v8::HandleScope handle_scope(isolate);

    //
//[code snippet 3]
//assumed that 'isolate' and 'context' has been initialized
    v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(isolate, FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1_constructor);
    tpl->InstanceTemplate()->SetInternalFieldCount(1);
    tpl->SetClassName(v8::String::NewFromUtf8(isolate, "FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1").ToLocalChecked());
    
    v8::Local<v8::FunctionTemplate> method_tpl = v8::FunctionTemplate::New(isolate, FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1_F_T_E_F_D_T_A_S_T_T_A_B_C_K_1_f_gold);
    tpl->PrototypeTemplate()->Set(isolate, "F_T_E_F_D_T_A_S_T_T_A_B_C_K_1_f_gold", method_tpl);
    
    v8::Local<v8::Function> constructor = tpl->GetFunction(context).ToLocalChecked();
    context->Global()->Set(context, v8::String::NewFromUtf8(isolate, "FIND_THREE_ELEMENT_FROM_DIFFERENT_THREE_ARRAYS_SUCH_THAT_THAT_A_B_C_K_1").ToLocalChecked(), constructor);


v8::Local<v8::Function> pf = FunctionTemplate::New(isolate, Print)->GetFunction(context).ToLocalChecked();
context->Global()->Set(context, v8::String::NewFromUtf8(isolate, "print").ToLocalChecked(), pf);


}

// Main function to execute JavaScript
void RunEngine(v8::Isolate* isolate, const std::string& js_code) {
    // Create a new scope for V8 objects
    v8::HandleScope handle_scope(isolate);

    // Create a new context
    v8::Local<v8::Context> context = v8::Context::New(isolate);

    // Enter the context
    v8::Context::Scope context_scope(context);

    // Initialize the JavaScript environment (bind your C++ class to JavaScript)
    Initialize(isolate, context);

    // Compile the JavaScript code
    v8::Local<v8::String> source = v8::String::NewFromUtf8(isolate, js_code.c_str()).ToLocalChecked();
    v8::Local<v8::Script> script = v8::Script::Compile(context, source).ToLocalChecked();

    // Run the script
    script->Run(context);
}
int main(int argc, char* argv[]) {
    // Initialize V8 platform and isolate
    V8::InitializeICUDefaultLocation(".");
    V8::InitializeExternalStartupData(".");
    std::unique_ptr<Platform> platform = platform::NewDefaultPlatform();
    V8::InitializePlatform(platform.get());
    V8::Initialize();
    Isolate::CreateParams create_params;
    create_params.array_buffer_allocator = ArrayBuffer::Allocator::NewDefaultAllocator();
    Isolate* isolate = Isolate::New(create_params);

    // Ensure there's a valid file passed for JavaScript execution
    if (argc < 2) {
        std::cerr << "Please specify a JavaScript file to run!" << std::endl;
        return 1;
    }

    // Read the JavaScript file into a string
    std::ifstream js_file(argv[1]);
    std::string js_code((std::istreambuf_iterator<char>(js_file)), std::istreambuf_iterator<char>());

    // Run the engine (execute JavaScript code)
    RunEngine(isolate, js_code);

    // Clean up V8
    isolate->Dispose();
    v8::V8::Dispose();
    v8::V8::ShutdownPlatform();
    //delete platform;

    return 0;
}
