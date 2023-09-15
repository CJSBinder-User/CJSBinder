void ProcessWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    ProcessWrap* obj = new ProcessWrap(env,args.This());
}
void ProcessWrap_uv_process_kill_glue(const FunctionCallbackInfo<Value>& args)
{
    ProcessWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->uv_process_kill(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> ProcessWrap_ctor_tpl = env->NewFunctionTemplate(ProcessWrap_constructor);
    ProcessWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(ProcessWrap_ctor_tpl, "uv_process_kill", ProcessWrap_uv_process_kill_glue);
    Local<String> ProcessWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "ProcessWrap");
    ProcessWrap_ctor_tpl->SetClassName(ProcessWrapString);
    target->Set(context,ProcessWrapString,ProcessWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
