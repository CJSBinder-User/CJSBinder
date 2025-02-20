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
void FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2_constructor(const v8::FunctionCallbackInfo<v8::Value>& args) {
    FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2* obj = new FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2();
    args.This()->SetInternalField(0, v8::External::New(args.GetIsolate(), obj));
}


//
//[code snippet 2]
void FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2_f_A_T_T_S_T_A_G_V_2_f_gold(const v8::FunctionCallbackInfo<v8::Value>& args) {
    if (args.Length() < 3 || !args[0]->IsArray() || !args[1]->IsInt32() || !args[2]->IsInt32()) {
        args.GetReturnValue().Set(v8::Undefined(args.GetIsolate()));
        return;
    }
    
    // Getting the array from JavaScript
    v8::Local<v8::Array> jsArray = v8::Local<v8::Array>::Cast(args[0]);
    int arr_size = args[1]->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    int sum = args[2]->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    
    // Converting JS array to C++ array
    int* A = new int[arr_size];
    for (int i = 0; i < arr_size; ++i) {
        v8::Local<v8::Value> elem = jsArray->Get(args.GetIsolate()->GetCurrentContext(), i).ToLocalChecked();
        A[i] = elem->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    }
    
    FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2* obj = static_cast<FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2*>(v8::External::Cast(*args.This()->GetInternalField(0))->Value());
    bool result = obj->F_A_T_T_S_T_A_G_V_2_f_gold(A, arr_size, sum);
    
    // Clean up
    delete[] A;

    args.GetReturnValue().Set(v8::Boolean::New(args.GetIsolate(), result));
}


// Set up the V8 environment and expose the class
void Initialize(v8::Isolate* isolate, v8::Local<v8::Context>& context) {
    v8::HandleScope handle_scope(isolate);

    //
//[code snippet 3]
//assumed that 'isolate' and 'context' has been initialized
    v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(isolate, FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2_constructor);
    tpl->InstanceTemplate()->SetInternalFieldCount(1);
    tpl->SetClassName(v8::String::NewFromUtf8(isolate, "FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2").ToLocalChecked());
    
    // Registering the method
    tpl->PrototypeTemplate()->Set(isolate, "F_A_T_T_S_T_A_G_V_2_f_gold", v8::FunctionTemplate::New(isolate, FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2_f_A_T_T_S_T_A_G_V_2_f_gold));
    
    v8::Local<v8::Function> constructor = tpl->GetFunction(context).ToLocalChecked();
    context->Global()->Set(context, v8::String::NewFromUtf8(isolate, "FIND_A_TRIPLET_THAT_SUM_TO_A_GIVEN_VALUE_2").ToLocalChecked(), constructor);


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
