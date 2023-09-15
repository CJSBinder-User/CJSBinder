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
void TURN_OFF_THE_RIGHTMOST_SET_BIT_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    TURN_OFF_THE_RIGHTMOST_SET_BIT* ptr = new TURN_OFF_THE_RIGHTMOST_SET_BIT();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void TURN_OFF_THE_RIGHTMOST_SET_BIT_T_O_T_R_S_B_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    TURN_OFF_THE_RIGHTMOST_SET_BIT* ptr = static_cast<TURN_OFF_THE_RIGHTMOST_SET_BIT*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsUint32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    int cres = ptr->T_O_T_R_S_B_f_gold(carg0);
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
        Local<FunctionTemplate> TURN_OFF_THE_RIGHTMOST_SET_BIT_ctor_tpl = FunctionTemplate::New(isolate, TURN_OFF_THE_RIGHTMOST_SET_BIT_constructor);
        TURN_OFF_THE_RIGHTMOST_SET_BIT_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "TURN_OFF_THE_RIGHTMOST_SET_BIT").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = TURN_OFF_THE_RIGHTMOST_SET_BIT_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        TURN_OFF_THE_RIGHTMOST_SET_BIT_ctor_tpl->PrototypeTemplate()->Set(isolate, "T_O_T_R_S_B_f_gold", FunctionTemplate::New(isolate, TURN_OFF_THE_RIGHTMOST_SET_BIT_T_O_T_R_S_B_f_gold_glue));
        Local<Function> TURN_OFF_THE_RIGHTMOST_SET_BIT_func = TURN_OFF_THE_RIGHTMOST_SET_BIT_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "TURN_OFF_THE_RIGHTMOST_SET_BIT").ToLocalChecked(), TURN_OFF_THE_RIGHTMOST_SET_BIT_func).ToChecked();
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
