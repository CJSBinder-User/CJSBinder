void SignalWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    SignalWrap* obj = new SignalWrap(env,args.This());
}
void SignalWrap_uv_signal_stop_glue(const FunctionCallbackInfo<Value>& args)
{
    SignalWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->uv_signal_stop();
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void SignalWrap_uv_signal_start_glue(const FunctionCallbackInfo<Value>& args)
{
    SignalWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->uv_signal_start(OnSignal,carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> SignalWrap_ctor_tpl = env->NewFunctionTemplate(SignalWrap_constructor);
    SignalWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(SignalWrap_ctor_tpl, "uv_signal_stop", SignalWrap_uv_signal_stop_glue);
    env->SetProtoMethod(SignalWrap_ctor_tpl, "uv_signal_start", SignalWrap_uv_signal_start_glue);
    Local<String> SignalWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "SignalWrap");
    SignalWrap_ctor_tpl->SetClassName(SignalWrapString);
    target->Set(SignalWrapString,SignalWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
