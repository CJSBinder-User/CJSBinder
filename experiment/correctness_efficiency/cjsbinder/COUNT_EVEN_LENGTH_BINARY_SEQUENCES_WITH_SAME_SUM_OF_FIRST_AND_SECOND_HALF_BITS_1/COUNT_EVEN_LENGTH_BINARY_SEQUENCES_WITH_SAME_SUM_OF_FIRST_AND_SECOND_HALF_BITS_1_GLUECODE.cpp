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
void COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1* ptr = new COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_C_E_L_B_S_W_S_S_O_F_A_S_H_B_1_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1* ptr = static_cast<COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->C_E_L_B_S_W_S_S_O_F_A_S_H_B_1_f_gold(carg0);
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
        Local<FunctionTemplate> COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_ctor_tpl = FunctionTemplate::New(isolate, COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_constructor);
        COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_ctor_tpl->PrototypeTemplate()->Set(isolate, "C_E_L_B_S_W_S_S_O_F_A_S_H_B_1_f_gold", FunctionTemplate::New(isolate, COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_C_E_L_B_S_W_S_S_O_F_A_S_H_B_1_f_gold_glue));
        Local<Function> COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_func = COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1").ToLocalChecked(), COUNT_EVEN_LENGTH_BINARY_SEQUENCES_WITH_SAME_SUM_OF_FIRST_AND_SECOND_HALF_BITS_1_func).ToChecked();
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
