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
void DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT_constructor(const v8::FunctionCallbackInfo<v8::Value>& args) {
    DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT* obj = new DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT();
    args.This()->SetInternalField(0, v8::External::New(args.GetIsolate(), obj));
}


//
//[code snippet 2]
void DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT_D_R_G_B_S_D_1_N_f_gold(const v8::FunctionCallbackInfo<v8::Value>& args) {
    if (args.Length() < 1 || !args[0]->IsString()) {
        args.GetReturnValue().Set(v8::Undefined(args.GetIsolate()));
        return;
    }
    
    v8::String::Utf8Value str(args.GetIsolate(), args[0]);
    std::string bin(*str); // Convert V8 string to std::string

    DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT* obj = 
        static_cast<DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT*>(v8::External::Cast(*args.This()->GetInternalField(0))->Value());

    bool result = obj->D_R_G_B_S_D_1_N_f_gold(bin);
    args.GetReturnValue().Set(v8::Boolean::New(args.GetIsolate(), result));
}


// Set up the V8 environment and expose the class
void Initialize(v8::Isolate* isolate, v8::Local<v8::Context>& context) {
    v8::HandleScope handle_scope(isolate);

    //
//[code snippet 3]
// assumed that 'isolate' and 'context' have been initialized
    v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(isolate, DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT_constructor);
    tpl->InstanceTemplate()->SetInternalFieldCount(1);
    tpl->SetClassName(v8::String::NewFromUtf8(isolate, "DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT").ToLocalChecked());

    v8::Local<v8::FunctionTemplate> method_tpl = v8::FunctionTemplate::New(isolate, DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT_D_R_G_B_S_D_1_N_f_gold);
    tpl->PrototypeTemplate()->Set(isolate, "D_R_G_B_S_D_1_N_f_gold", method_tpl);

    v8::Local<v8::Function> constructor = tpl->GetFunction(context).ToLocalChecked();
    context->Global()->Set(context, v8::String::NewFromUtf8(isolate, "DECIMAL_REPRESENTATION_GIVEN_BINARY_STRING_DIVISIBLE_10_NOT").ToLocalChecked(), constructor);


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
