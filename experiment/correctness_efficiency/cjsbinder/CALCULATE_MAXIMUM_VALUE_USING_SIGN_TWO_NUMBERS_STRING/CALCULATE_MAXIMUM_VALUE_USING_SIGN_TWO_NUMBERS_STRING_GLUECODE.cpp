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
void CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING* ptr = new CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_C_M_V_U_S_T_N_S_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING* ptr = static_cast<CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsString()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    String::Utf8Value v8str0(isolate, args[0]);
    string carg0(*v8str0);
    int cres = ptr->C_M_V_U_S_T_N_S_f_gold(carg0);
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
        Local<FunctionTemplate> CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_ctor_tpl = FunctionTemplate::New(isolate, CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_constructor);
        CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_ctor_tpl->PrototypeTemplate()->Set(isolate, "C_M_V_U_S_T_N_S_f_gold", FunctionTemplate::New(isolate, CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_C_M_V_U_S_T_N_S_f_gold_glue));
        Local<Function> CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_func = CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING").ToLocalChecked(), CALCULATE_MAXIMUM_VALUE_USING_SIGN_TWO_NUMBERS_STRING_func).ToChecked();
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
