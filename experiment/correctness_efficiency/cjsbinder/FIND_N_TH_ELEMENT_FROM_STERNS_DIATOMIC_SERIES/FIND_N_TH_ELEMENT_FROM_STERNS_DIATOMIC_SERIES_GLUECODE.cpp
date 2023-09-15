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
void FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES* ptr = new FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_F_N_T_E_F_S_D_S_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES* ptr = static_cast<FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->F_N_T_E_F_S_D_S_f_gold(carg0);
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
        Local<FunctionTemplate> FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_ctor_tpl = FunctionTemplate::New(isolate, FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_constructor);
        FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_ctor_tpl->PrototypeTemplate()->Set(isolate, "F_N_T_E_F_S_D_S_f_gold", FunctionTemplate::New(isolate, FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_F_N_T_E_F_S_D_S_f_gold_glue));
        Local<Function> FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_func = FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES").ToLocalChecked(), FIND_N_TH_ELEMENT_FROM_STERNS_DIATOMIC_SERIES_func).ToChecked();
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
