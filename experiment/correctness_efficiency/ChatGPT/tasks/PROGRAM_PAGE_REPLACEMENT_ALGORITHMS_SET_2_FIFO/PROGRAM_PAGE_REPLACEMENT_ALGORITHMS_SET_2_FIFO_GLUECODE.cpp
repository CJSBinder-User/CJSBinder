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
void PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO_constructor(const v8::FunctionCallbackInfo<v8::Value>& args) {
    PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO* obj = new PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO();
    args.This()->SetInternalField(0, v8::External::New(args.GetIsolate(), obj));
}


//
//[code snippet 2]
void PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO_P_P_R_A_S_2_F_f_gold(const v8::FunctionCallbackInfo<v8::Value>& args) {
    if (args.Length() < 1 || !args[0]->IsArray() || args.Length() < 3 || !args[1]->IsInt32() || !args[2]->IsInt32()) {
        args.GetReturnValue().Set(v8::Undefined(args.GetIsolate()));
        return;
    }

    // Assuming args[0] is an array of integers
    v8::Local<v8::Array> jsArray = v8::Local<v8::Array>::Cast(args[0]);
    int n = args[1]->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    int capacity = args[2]->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    
    int* pages = new int[n]; // dynamic allocation for pages array
    for (int i = 0; i < n; i++) {
        v8::Local<v8::Value> value = jsArray->Get(args.GetIsolate()->GetCurrentContext(), i).ToLocalChecked();
        pages[i] = value->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0);
    }

    PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO* obj = static_cast<PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO*>(v8::External::Cast(*args.This()->GetInternalField(0))->Value());
    int result = obj->P_P_R_A_S_2_F_f_gold(pages, n, capacity);
    delete[] pages; // cleanup the dynamically allocated memory
    args.GetReturnValue().Set(v8::Integer::New(args.GetIsolate(), result));
}


// Set up the V8 environment and expose the class
void Initialize(v8::Isolate* isolate, v8::Local<v8::Context>& context) {
    v8::HandleScope handle_scope(isolate);

    //
//[code snippet 3]
//assumed that 'isolate' and 'context' has been initialized
    v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(isolate, PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO_constructor);
    tpl->InstanceTemplate()->SetInternalFieldCount(1);
    tpl->SetClassName(v8::String::NewFromUtf8(isolate, "PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO").ToLocalChecked());
    
    v8::Local<v8::FunctionTemplate> method_tpl = v8::FunctionTemplate::New(isolate, PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO_P_P_R_A_S_2_F_f_gold);
    tpl->PrototypeTemplate()->Set(isolate, "P_P_R_A_S_2_F_f_gold", method_tpl);
    
    v8::Local<v8::Function> constructor = tpl->GetFunction(context).ToLocalChecked();
    context->Global()->Set(context, v8::String::NewFromUtf8(isolate, "PROGRAM_PAGE_REPLACEMENT_ALGORITHMS_SET_2_FIFO").ToLocalChecked(), constructor);


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
