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
void SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE* ptr = new SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_S_O_A_E_U_T_N_R_I_A_P_T_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE* ptr = static_cast<SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg0 = args[0].As<Int32>()->Value();
    long long cres = ptr->S_O_A_E_U_T_N_R_I_A_P_T_f_gold(carg0);
    Local<Number> jsres = Number::New(isolate, cres);
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
        Local<FunctionTemplate> SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_ctor_tpl = FunctionTemplate::New(isolate, SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_constructor);
        SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_ctor_tpl->PrototypeTemplate()->Set(isolate, "S_O_A_E_U_T_N_R_I_A_P_T_f_gold", FunctionTemplate::New(isolate, SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_S_O_A_E_U_T_N_R_I_A_P_T_f_gold_glue));
        Local<Function> SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_func = SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE").ToLocalChecked(), SUM_OF_ALL_ELEMENTS_UP_TO_NTH_ROW_IN_A_PASCALS_TRIANGLE_func).ToChecked();
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
