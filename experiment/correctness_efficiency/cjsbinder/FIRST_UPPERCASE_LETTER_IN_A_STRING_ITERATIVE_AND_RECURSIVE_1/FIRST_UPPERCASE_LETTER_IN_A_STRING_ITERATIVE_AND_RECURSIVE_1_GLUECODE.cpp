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
void FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1* ptr = new FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_F_U_L_I_A_S_I_A_R_1_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1* ptr = static_cast<FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsString()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    String::Utf8Value v8str0(isolate, args[0]);
    string carg0(*v8str0);
    if (!args[1]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg1 = args[1].As<Int32>()->Value();
    char cres = ptr->F_U_L_I_A_S_I_A_R_1_f_gold(carg0,carg1);
    string tmpst0(1,cres);
    Local<String> jsres = String::NewFromUtf8(isolate, tmpst0.c_str()).ToLocalChecked();
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
        Local<FunctionTemplate> FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_ctor_tpl = FunctionTemplate::New(isolate, FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_constructor);
        FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_ctor_tpl->PrototypeTemplate()->Set(isolate, "F_U_L_I_A_S_I_A_R_1_f_gold", FunctionTemplate::New(isolate, FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_F_U_L_I_A_S_I_A_R_1_f_gold_glue));
        Local<Function> FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_func = FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1").ToLocalChecked(), FIRST_UPPERCASE_LETTER_IN_A_STRING_ITERATIVE_AND_RECURSIVE_1_func).ToChecked();
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
