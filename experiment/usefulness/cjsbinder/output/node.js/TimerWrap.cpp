void TimerWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    TimerWrap* obj = new TimerWrap(env,args.This());
}
void TimerWrap_uv_timer_stop_glue(const FunctionCallbackInfo<Value>& args)
{
    TimerWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->uv_timer_stop();
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void TimerWrap_uv_timer_start_glue(const FunctionCallbackInfo<Value>& args)
{
    TimerWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsNumber());
    long long carg0 = args[0].As<Integer>()->Value();
    int cres = ptr->uv_timer_start(OnTimeout,carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> TimerWrap_ctor_tpl = env->NewFunctionTemplate(TimerWrap_constructor);
    TimerWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(TimerWrap_ctor_tpl, "uv_timer_stop", TimerWrap_uv_timer_stop_glue);
    env->SetProtoMethod(TimerWrap_ctor_tpl, "uv_timer_start", TimerWrap_uv_timer_start_glue);
    Local<String> TimerWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "TimerWrap");
    TimerWrap_ctor_tpl->SetClassName(TimerWrapString);
    target->Set(TimerWrapString,TimerWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
