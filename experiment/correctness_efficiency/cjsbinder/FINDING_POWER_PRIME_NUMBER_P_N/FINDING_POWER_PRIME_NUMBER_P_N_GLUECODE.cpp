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
void FINDING_POWER_PRIME_NUMBER_P_N_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    FINDING_POWER_PRIME_NUMBER_P_N* ptr = new FINDING_POWER_PRIME_NUMBER_P_N();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void FINDING_POWER_PRIME_NUMBER_P_N_F_P_P_N_P_N_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    FINDING_POWER_PRIME_NUMBER_P_N* ptr = static_cast<FINDING_POWER_PRIME_NUMBER_P_N*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg0 = args[0].As<Int32>()->Value();
    if (!args[1]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg1 = args[1].As<Int32>()->Value();
    int cres = ptr->F_P_P_N_P_N_f_gold(carg0,carg1);
    Local<Integer> jsres = Int32::New(isolate, cres);
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
        Local<FunctionTemplate> FINDING_POWER_PRIME_NUMBER_P_N_ctor_tpl = FunctionTemplate::New(isolate, FINDING_POWER_PRIME_NUMBER_P_N_constructor);
        FINDING_POWER_PRIME_NUMBER_P_N_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "FINDING_POWER_PRIME_NUMBER_P_N").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = FINDING_POWER_PRIME_NUMBER_P_N_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        FINDING_POWER_PRIME_NUMBER_P_N_ctor_tpl->PrototypeTemplate()->Set(isolate, "F_P_P_N_P_N_f_gold", FunctionTemplate::New(isolate, FINDING_POWER_PRIME_NUMBER_P_N_F_P_P_N_P_N_f_gold_glue));
        Local<Function> FINDING_POWER_PRIME_NUMBER_P_N_func = FINDING_POWER_PRIME_NUMBER_P_N_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "FINDING_POWER_PRIME_NUMBER_P_N").ToLocalChecked(), FINDING_POWER_PRIME_NUMBER_P_N_func).ToChecked();
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
