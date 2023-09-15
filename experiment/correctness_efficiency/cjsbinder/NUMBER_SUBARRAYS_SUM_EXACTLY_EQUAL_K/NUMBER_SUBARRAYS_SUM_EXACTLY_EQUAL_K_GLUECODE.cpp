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
void NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K* ptr = new NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_N_S_S_E_E_K_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K* ptr = static_cast<NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsArray()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    Local<Array> v8arr0 = args[0].As<Array>();
    int carg0[v8arr0->Length()];
    for(int i = 0;i < v8arr0->Length();i++){
       carg0[i] = v8arr0->Get(context,i).ToLocalChecked().As<Int32>()->Value();
    }
    if (!args[1]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg1 = args[1].As<Int32>()->Value();
    if (!args[2]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg2 = args[2].As<Int32>()->Value();
    int cres = ptr->N_S_S_E_E_K_f_gold(carg0,carg1,carg2);
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
        Local<FunctionTemplate> NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_ctor_tpl = FunctionTemplate::New(isolate, NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_constructor);
        NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_ctor_tpl->PrototypeTemplate()->Set(isolate, "N_S_S_E_E_K_f_gold", FunctionTemplate::New(isolate, NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_N_S_S_E_E_K_f_gold_glue));
        Local<Function> NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_func = NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K").ToLocalChecked(), NUMBER_SUBARRAYS_SUM_EXACTLY_EQUAL_K_func).ToChecked();
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