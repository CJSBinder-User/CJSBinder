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
void MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS* ptr = new MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_M_L_N_R_A_S_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS* ptr = static_cast<MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsString()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    String::Utf8Value v8str0(isolate, args[0]);
    string carg0(*v8str0);
    if (!args[1]->IsString()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    String::Utf8Value v8str1(isolate, args[1]);
    string carg1(*v8str1);
    string cres = ptr->M_L_N_R_A_S_f_gold(carg0,carg1);
    Local<String> jsres = String::NewFromUtf8(isolate, cres.c_str()).ToLocalChecked();
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
        Local<FunctionTemplate> MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_ctor_tpl = FunctionTemplate::New(isolate, MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_constructor);
        MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_ctor_tpl->PrototypeTemplate()->Set(isolate, "M_L_N_R_A_S_f_gold", FunctionTemplate::New(isolate, MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_M_L_N_R_A_S_f_gold_glue));
        Local<Function> MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_func = MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS").ToLocalChecked(), MULTIPLY_LARGE_NUMBERS_REPRESENTED_AS_STRINGS_func).ToChecked();
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
