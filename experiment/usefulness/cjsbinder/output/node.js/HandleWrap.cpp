void HandleWrap_uv_ref_glue(const FunctionCallbackInfo<Value>& args)
{
    HandleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->uv_ref();
}
void HandleWrap_uv_unref_glue(const FunctionCallbackInfo<Value>& args)
{
    HandleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->uv_unref();
}
void HandleWrap_HasRef_glue(const FunctionCallbackInfo<Value>& args)
{
    HandleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    bool cres = ptr->HasRef();
    Environment* env = Environment::GetCurrent(args);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void HandleWrap_Close_glue(const FunctionCallbackInfo<Value>& args)
{
    HandleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Close(args[0]);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> HandleWrap_ctor_tpl = env->NewFunctionTemplate(HandleWrap_constructor);
    HandleWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(HandleWrap_ctor_tpl, "uv_ref", HandleWrap_uv_ref_glue);
    env->SetProtoMethod(HandleWrap_ctor_tpl, "uv_unref", HandleWrap_uv_unref_glue);
    env->SetProtoMethod(HandleWrap_ctor_tpl, "HasRef", HandleWrap_HasRef_glue);
    env->SetProtoMethod(HandleWrap_ctor_tpl, "Close", HandleWrap_Close_glue);
    Local<String> HandleWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "HandleWrap");
    HandleWrap_ctor_tpl->SetClassName(HandleWrapString);
    target->Set(context,HandleWrapString,HandleWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
