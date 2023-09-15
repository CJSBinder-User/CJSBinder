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
void NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR* ptr = new NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_N_O_T_I_A_P_I_N_M_T_T_P_A_C_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR* ptr = static_cast<NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsInt32()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->N_O_T_I_A_P_I_N_M_T_T_P_A_C_f_gold(carg0);
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
        Local<FunctionTemplate> NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_ctor_tpl = FunctionTemplate::New(isolate, NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_constructor);
        NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_ctor_tpl->PrototypeTemplate()->Set(isolate, "N_O_T_I_A_P_I_N_M_T_T_P_A_C_f_gold", FunctionTemplate::New(isolate, NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_N_O_T_I_A_P_I_N_M_T_T_P_A_C_f_gold_glue));
        Local<Function> NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_func = NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR").ToLocalChecked(), NUMBER_OF_TRIANGLES_IN_A_PLANE_IF_NO_MORE_THAN_TWO_POINTS_ARE_COLLINEAR_func).ToChecked();
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
