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
void MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE* ptr = new MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_M_R_F_M_E_O_N_B_W_G_S_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE* ptr = static_cast<MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE*>(args.This()->GetAlignedPointerFromInternalField(0));
    if (!args[0]->IsArray()){
       args.GetReturnValue().SetNull();
       std::cout << "type error!" << std::endl;
       return;
    }
    Local<Array> v8arr0 = args[0].As<Array>();
    string carg0[v8arr0->Length()];
    //std::vector<std::string> vec(v8arr0->Length(),"");
    for(int i = 0;i < v8arr0->Length();i++){
       String::Utf8Value v8str0(isolate, v8arr0->Get(context,i).ToLocalChecked());
       std::string cppStr0(*v8str0);
       carg0[i] = cppStr0;
       //vec.push_back(cppStr0);
    }
    //std::string* carg0 = &vec.front();
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
    int cres = ptr->M_R_F_M_E_O_N_B_W_G_S_f_gold(carg0,carg1,carg2);
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
        Local<FunctionTemplate> MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_ctor_tpl = FunctionTemplate::New(isolate, MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_constructor);
        MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_ctor_tpl->PrototypeTemplate()->Set(isolate, "M_R_F_M_E_O_N_B_W_G_S_f_gold", FunctionTemplate::New(isolate, MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_M_R_F_M_E_O_N_B_W_G_S_f_gold_glue));
        Local<Function> MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_func = MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE").ToLocalChecked(), MINIMUM_ROOMS_FOR_M_EVENTS_OF_N_BATCHES_WITH_GIVEN_SCHEDULE_func).ToChecked();
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
