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
void WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS* ptr = new WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_W_T_O_S_R_0_C_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS* ptr = static_cast<WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS*>(args.This()->GetAlignedPointerFromInternalField(0));
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
    int cres = ptr->W_T_O_S_R_0_C_f_gold(carg0,carg1);
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
        Local<FunctionTemplate> WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_ctor_tpl = FunctionTemplate::New(isolate, WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_constructor);
        WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_ctor_tpl->PrototypeTemplate()->Set(isolate, "W_T_O_S_R_0_C_f_gold", FunctionTemplate::New(isolate, WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_W_T_O_S_R_0_C_f_gold_glue));
        Local<Function> WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_func = WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS").ToLocalChecked(), WAYS_TRANSFORMING_ONE_STRING_REMOVING_0_CHARACTERS_func).ToChecked();
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
