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
void QUICK_WAY_CHECK_CHARACTERS_STRING_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    QUICK_WAY_CHECK_CHARACTERS_STRING* ptr = new QUICK_WAY_CHECK_CHARACTERS_STRING();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void QUICK_WAY_CHECK_CHARACTERS_STRING_Q_W_C_C_S_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    QUICK_WAY_CHECK_CHARACTERS_STRING* ptr = static_cast<QUICK_WAY_CHECK_CHARACTERS_STRING*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsString()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    String::Utf8Value v8str0(isolate, args[0]);
    string carg0(*v8str0);
    bool cres = ptr->Q_W_C_C_S_f_gold(carg0);
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
        Local<FunctionTemplate> QUICK_WAY_CHECK_CHARACTERS_STRING_ctor_tpl = FunctionTemplate::New(isolate, QUICK_WAY_CHECK_CHARACTERS_STRING_constructor);
        QUICK_WAY_CHECK_CHARACTERS_STRING_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "QUICK_WAY_CHECK_CHARACTERS_STRING").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = QUICK_WAY_CHECK_CHARACTERS_STRING_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        QUICK_WAY_CHECK_CHARACTERS_STRING_ctor_tpl->PrototypeTemplate()->Set(isolate, "Q_W_C_C_S_f_gold", FunctionTemplate::New(isolate, QUICK_WAY_CHECK_CHARACTERS_STRING_Q_W_C_C_S_f_gold_glue));
        Local<Function> QUICK_WAY_CHECK_CHARACTERS_STRING_func = QUICK_WAY_CHECK_CHARACTERS_STRING_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "QUICK_WAY_CHECK_CHARACTERS_STRING").ToLocalChecked(), QUICK_WAY_CHECK_CHARACTERS_STRING_func).ToChecked();
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
