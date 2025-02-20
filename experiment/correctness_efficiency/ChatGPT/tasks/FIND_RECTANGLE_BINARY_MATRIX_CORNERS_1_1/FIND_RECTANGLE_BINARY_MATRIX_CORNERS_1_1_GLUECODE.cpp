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
void FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1_constructor(const v8::FunctionCallbackInfo<v8::Value>& args) {
    FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1* obj = new FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1();
    args.This()->SetInternalField(0, v8::External::New(args.GetIsolate(), obj));
}


//
//[code snippet 2]
void FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1_F_R_B_M_C_1_1_f_gold(const v8::FunctionCallbackInfo<v8::Value>& args) {
    if (args.Length() < 1 || !args[0]->IsObject()) {
        args.GetReturnValue().Set(v8::Undefined(args.GetIsolate()));
        return;
    }
    
    v8::Local<v8::Object> matrixObject = args[0]->ToObject(args.GetIsolate()->GetCurrentContext()).ToLocalChecked();
    std::vector<std::vector<int>> matrix;

    // Assuming the matrix is passed as a 2D array, we will convert it to std::vector<std::vector<int>>
    // NOTE: This section requires the matrix to be in the form of a valid JavaScript array.
    v8::Local<v8::Array> rows = v8::Local<v8::Array>::Cast(matrixObject);
    for (unsigned int i = 0; i < rows->Length(); i++) {
        v8::Local<v8::Array> row = v8::Local<v8::Array>::Cast(rows->Get(args.GetIsolate()->GetCurrentContext(), i).ToLocalChecked());
        std::vector<int> rowVector;
        for (unsigned int j = 0; j < row->Length(); j++) {
            rowVector.push_back(row->Get(args.GetIsolate()->GetCurrentContext(), j).ToLocalChecked()->Int32Value(args.GetIsolate()->GetCurrentContext()).FromMaybe(0));
        }
        matrix.push_back(rowVector);
    }

    FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1* obj = 
        static_cast<FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1*>(v8::External::Cast(*args.This()->GetInternalField(0))->Value());
    
    bool result = obj->F_R_B_M_C_1_1_f_gold(matrix);
    args.GetReturnValue().Set(v8::Boolean::New(args.GetIsolate(), result));
}


// Set up the V8 environment and expose the class
void Initialize(v8::Isolate* isolate, v8::Local<v8::Context>& context) {
    v8::HandleScope handle_scope(isolate);

    //
//[code snippet 3]
// Assumed that 'isolate' and 'context' have been initialized
    v8::Local<v8::FunctionTemplate> tpl = v8::FunctionTemplate::New(isolate, FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1_constructor);
    tpl->InstanceTemplate()->SetInternalFieldCount(1);
    tpl->SetClassName(v8::String::NewFromUtf8(isolate, "FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1").ToLocalChecked());
    
    // Set the method in the prototype
    tpl->PrototypeTemplate()->Set(isolate, "F_R_B_M_C_1_1_f_gold", v8::FunctionTemplate::New(isolate, FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1_F_R_B_M_C_1_1_f_gold));
    
    v8::Local<v8::Function> constructor = tpl->GetFunction(context).ToLocalChecked();
    context->Global()->Set(context, v8::String::NewFromUtf8(isolate, "FIND_RECTANGLE_BINARY_MATRIX_CORNERS_1_1").ToLocalChecked(), constructor);


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
