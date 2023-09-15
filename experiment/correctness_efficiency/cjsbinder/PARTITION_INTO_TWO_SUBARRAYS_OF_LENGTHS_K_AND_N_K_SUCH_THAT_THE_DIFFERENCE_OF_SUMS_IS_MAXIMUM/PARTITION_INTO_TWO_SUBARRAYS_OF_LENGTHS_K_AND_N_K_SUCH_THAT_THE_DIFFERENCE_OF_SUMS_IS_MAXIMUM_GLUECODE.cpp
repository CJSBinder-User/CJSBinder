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
void PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_constructor(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM* ptr = new PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM();
    if (args.IsConstructCall()) {
       args.This()->SetAlignedPointerInInternalField(0, ptr);
    }
    else {
       args.GetReturnValue().SetNull();
       delete ptr;
    }
}
void PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_P_I_T_S_O_L_K_A_N_K_S_T_T_D_O_S_I_M_f_gold_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM* ptr = static_cast<PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM*>(args.This()->GetAlignedPointerFromInternalField(0));
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
    int cres = ptr->P_I_T_S_O_L_K_A_N_K_S_T_T_D_O_S_I_M_f_gold(carg0,carg1,carg2);
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
        Local<FunctionTemplate> PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_ctor_tpl = FunctionTemplate::New(isolate, PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_constructor);
        PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_ctor_tpl->SetClassName(String::NewFromUtf8(isolate, "PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM").ToLocalChecked());
        Local<ObjectTemplate> instance0_t = PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_ctor_tpl->InstanceTemplate();
        instance0_t->SetInternalFieldCount(1);
        PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_ctor_tpl->PrototypeTemplate()->Set(isolate, "P_I_T_S_O_L_K_A_N_K_S_T_T_D_O_S_I_M_f_gold", FunctionTemplate::New(isolate, PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_P_I_T_S_O_L_K_A_N_K_S_T_T_D_O_S_I_M_f_gold_glue));
        Local<Function> PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_func = PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_ctor_tpl->GetFunction(context).ToLocalChecked();
        globalobj->Set(context, String::NewFromUtf8(isolate, "PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM").ToLocalChecked(), PARTITION_INTO_TWO_SUBARRAYS_OF_LENGTHS_K_AND_N_K_SUCH_THAT_THE_DIFFERENCE_OF_SUMS_IS_MAXIMUM_func).ToChecked();
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
