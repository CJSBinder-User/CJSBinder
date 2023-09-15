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
void PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT* ptr = new PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_P_P_A_V_W_C_S_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT* ptr = static_cast<PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT*>(args.This()->GetAlignedPointerFromInternalField(0));
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
    if (!args[2]->IsBoolean()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    bool carg2 = args[2]->IsTrue();
    int cres = ptr->P_P_A_V_W_C_S_f_gold(carg0,carg1,carg2);
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
        Local<FunctionTemplate> PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_ctor_tpl = FunctionTemplate::New(isolate, PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_constructor);
        PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_ctor_tpl->PrototypeTemplate()->Set(isolate, "P_P_A_V_W_C_S_f_gold", FunctionTemplate::New(isolate, PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_P_P_A_V_W_C_S_f_gold_glue));
        Local<Function> PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_func = PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT").ToLocalChecked(), PROGRAMMING_PUZZLE_ASSIGN_VALUE_WITHOUT_CONTROL_STATEMENT_func).ToChecked();
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
