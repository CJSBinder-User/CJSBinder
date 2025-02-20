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
void SCHEDULE_JOBS_SERVER_GETS_EQUAL_LOAD_constructor(const v8::FunctionCallbackInfo<v8::Value>& args) {
    SCHEDULE_JOBS_SERVER_GETS_EQUAL_LOAD* obj = new SCHEDULE_JOBS_SERVER_GETS_EQUAL_LOAD();
    args.This()->SetInternalField(0, v8::External::New(args.GetIsolate(), obj));
}


//
//[code snippet 2]
void S_J_S_G_E_L_f_gold(const v8::FunctionCallbackInfo<v8::Value>& args) {
    if (args.Length() < 3 || !args[0]->IsArray() || !args[1]->IsArray() || !args[2]->IsInt32()) {
        args.GetReturnValue().Set(v8::Undefined(args.GetIsolate()));
        return;
    }

    // Retrieve the C++ object
    SCHEDULE_JOBS_SERVER_GETS_EQUAL_LOAD* obj = static_cast<SCHEDULE_JOBS_SERVER_GETS_EQUAL_LOAD*>(v8::External::Cast(*args.This()->GetInternalField(0))->Value());
    
    // Extract the input parameters
    v8::Local<v8::Array> arrA = v8::Local<v8::Array>::Cast(args[0]);
    v8::Local<v8::Array> arrB = v8::Local<v8::Array>::Cast(args[1]);
    int n = args[2]->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);

    // Convert V8 arrays to C++ arrays
    int* a = new int[n];
    int* b = new int[n];
    for (int i = 0; i < n; ++i) {
        a[i] = arrA->Get(args.GetIsolate()->GetCurrentContext(), i).ToLocalChecked()->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
        b[i] = arrB->Get(args.GetIsolate()->GetCurrentContext(), i).ToLocalChecked()->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    }

    // Call the C++ method
    int result = obj->S_J_S_G_E_L_f_gold(a, b, n);
    
    // Cleanup
    delete[] a;
    delete[] b;

    // Return the result
    args.GetReturnValue().Set(v8::Integer::New(args.GetIsolate(), result));
}


// Set up the V8 environment and expose the class
void Initialize(v8::Isolate* isolate, v8::Local<v8::Context>& context) {
    v8::HandleScope handle_scope(isolate);

    //
//[code snippet 3]
//assumed that 'isolate' and 'context' has been initialized
    v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(isolate, SCHEDULE_JOBS_SERVER_GETS_EQUAL_LOAD_constructor);
    tpl->InstanceTemplate()->SetInternalFieldCount(1);
    tpl->SetClassName(v8::String::NewFromUtf8(isolate, "SCHEDULE_JOBS_SERVER_GETS_EQUAL_LOAD").ToLocalChecked());
    
    v8::Local<v8::FunctionTemplate> method_tpl = v8::FunctionTemplate::New(isolate, S_J_S_G_E_L_f_gold);
    tpl->PrototypeTemplate()->Set(isolate, "S_J_S_G_E_L_f_gold", method_tpl);

    v8::Local<v8::Function> constructor = tpl->GetFunction(context).ToLocalChecked();
    context->Global()->Set(context, v8::String::NewFromUtf8(isolate, "SCHEDULE_JOBS_SERVER_GETS_EQUAL_LOAD").ToLocalChecked(), constructor);


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
