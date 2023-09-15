void AsyncWrap_get_async_id_glue(const FunctionCallbackInfo<Value>& args)
{
    AsyncWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    double cres = ptr->get_async_id();
    Environment* env = Environment::GetCurrent(args);
    Local<Number> jsres = Number::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void AsyncWrap_AsyncReset_glue(const FunctionCallbackInfo<Value>& args)
{
    AsyncWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsNumber());
    double carg0 = args[0].As<Number>()->Value();
    CHECK(args[1]->IsBoolean());
    bool carg1 = args[1]->IsTrue();
    ptr->AsyncReset(carg0,carg1);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> AsyncWrap_ctor_tpl = env->NewFunctionTemplate(AsyncWrap::New);
    AsyncWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(AsyncWrap_ctor_tpl, "get_async_id", AsyncWrap_get_async_id_glue);
    env->SetProtoMethod(AsyncWrap_ctor_tpl, "AsyncReset", AsyncWrap_AsyncReset_glue);
    Local<String> AsyncWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "AsyncWrap");
    AsyncWrap_ctor_tpl->SetClassName(AsyncWrapString);
    target->Set(context,AsyncWrapString,AsyncWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
