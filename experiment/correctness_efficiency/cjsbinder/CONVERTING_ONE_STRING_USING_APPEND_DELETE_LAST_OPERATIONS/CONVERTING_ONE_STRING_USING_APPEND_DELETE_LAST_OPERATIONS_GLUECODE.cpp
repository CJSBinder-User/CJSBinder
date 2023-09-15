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
void CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS* ptr = new CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_C_O_S_U_A_D_L_O_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS* ptr = static_cast<CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS*>(args.This()->GetAlignedPointerFromInternalField(0));
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
    if (!args[2]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg2 = args[2].As<Int32>()->Value();
    bool cres = ptr->C_O_S_U_A_D_L_O_f_gold(carg0,carg1,carg2);
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
        Local<FunctionTemplate> CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_ctor_tpl = FunctionTemplate::New(isolate, CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_constructor);
        CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_ctor_tpl->PrototypeTemplate()->Set(isolate, "C_O_S_U_A_D_L_O_f_gold", FunctionTemplate::New(isolate, CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_C_O_S_U_A_D_L_O_f_gold_glue));
        Local<Function> CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_func = CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS").ToLocalChecked(), CONVERTING_ONE_STRING_USING_APPEND_DELETE_LAST_OPERATIONS_func).ToChecked();
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
