#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <fstream>
#include "include/libplatform/libplatform.h"
#include "include/v8.h"
#include "CQuesHeader.h"
using namespace v8;
void Print(const FunctionCallbackInfo<Value>& args){
   v8::Isolate* isolate = args.GetIsolate();
   v8::String::Utf8Value str(isolate, args[0]);
   std::string cppStr(*str);
   std::cout << cppStr << std::endl;
}
std::string getCode(const char* filename){
std::ifstream read;
   read.open(filename,std::ios::in);
   std::string tmp;
   std::string code = "";
   while(getline(read,tmp)){
   code = code + tmp;}
   return code;
}
void CHECK_INTEGER_OVERFLOW_MULTIPLICATION_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    CHECK_INTEGER_OVERFLOW_MULTIPLICATION* ptr = new CHECK_INTEGER_OVERFLOW_MULTIPLICATION();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void CHECK_INTEGER_OVERFLOW_MULTIPLICATION_C_I_O_M_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    CHECK_INTEGER_OVERFLOW_MULTIPLICATION* ptr = static_cast<CHECK_INTEGER_OVERFLOW_MULTIPLICATION*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsNumber()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    long long carg0 = args[0].As<Number>()->Value();
    if (!args[1]->IsNumber()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    long long carg1 = args[1].As<Number>()->Value();
    bool cres = ptr->C_I_O_M_f_gold(carg0,carg1);
    Local<Boolean> jsres = Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
int main(int argc, char* argv[])
{
    V8::InitializeICUDefaultLocation(".");
    V8::InitializeExternalStartupData(".");
    std::unique_ptr<Platform> platform = platform::NewDefaultPlatform();
    V8::InitializePlatform(platform.get());
    V8::Initialize();
    Isolate::CreateParams create_params;
    create_params.array_buffer_allocator = ArrayBuffer::Allocator::NewDefaultAllocator();
    Isolate* isolate = Isolate::New(create_params);
    {
        //register code snippet
        Isolate::Scope isolate_scope(isolate);
        HandleScope handle_scope(isolate);
        Local<Context> context = Context::New(isolate, NULL);
        Context::Scope context_scope(context);
        Local<Object> globalobj = context->Global();
        globalobj->Set(context, String::NewFromUtf8(isolate, "print").ToLocalChecked(), Function::New(context, Print).ToLocalChecked()).ToChecked();
        Local<FunctionTemplate> CHECK_INTEGER_OVERFLOW_MULTIPLICATION_ctor_tpl = FunctionTemplate::New(isolate, CHECK_INTEGER_OVERFLOW_MULTIPLICATION_constructor);
        CHECK_INTEGER_OVERFLOW_MULTIPLICATION_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "CHECK_INTEGER_OVERFLOW_MULTIPLICATION").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = CHECK_INTEGER_OVERFLOW_MULTIPLICATION_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        CHECK_INTEGER_OVERFLOW_MULTIPLICATION_ctor_tpl->PrototypeTemplate()->Set(isolate, "C_I_O_M_f_gold", FunctionTemplate::New(isolate, CHECK_INTEGER_OVERFLOW_MULTIPLICATION_C_I_O_M_f_gold_glue));
        Local<Function> CHECK_INTEGER_OVERFLOW_MULTIPLICATION_func = CHECK_INTEGER_OVERFLOW_MULTIPLICATION_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "CHECK_INTEGER_OVERFLOW_MULTIPLICATION").ToLocalChecked(), CHECK_INTEGER_OVERFLOW_MULTIPLICATION_func).ToChecked();
        std::string code = getCode(argv[1]);
        Local<String> source = String::NewFromUtf8(isolate, code.c_str(),NewStringType::kNormal).ToLocalChecked();
        Local<Script> script = Script::Compile(context, source).ToLocalChecked();
        Local<Value> result = script->Run(context).ToLocalChecked();
    }
    isolate->Dispose();
    V8::Dispose();
    V8::ShutdownPlatform();
    delete create_params.array_buffer_allocator;
}
