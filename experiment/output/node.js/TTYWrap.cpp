void TTYWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    CHECK(args[0]->IsBoolean());
    bool carg0 = args[0]->IsTrue();
    TTYWrap* obj = new TTYWrap(env,args.This(),carg0);
}
void TTYWrap_uv_guess_handle_glue(const FunctionCallbackInfo<Value>& args)
{
    TTYWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    uv_handle_type cres = ptr->uv_guess_handle(carg0);
    const char* type = nullptr;
    switch (cres) {
    case UV_TCP: type = "TCP"; break;
    case UV_TTY: type = "TTY"; break;
    case UV_UDP: type = "UDP"; break;
    case UV_FILE: type = "FILE"; break;
    case UV_NAMED_PIPE: type = "PIPE"; break;
    case UV_UNKNOWN_H]ANDLE: type = "UNKNOWN"; break;
    default:ABORT();}
    Local<String> jsres = OneByteString(env->isolate(), type);
    args.GetReturnValue().Set(jsres);
}
void TTYWrap_uv_tty_get_winsize_glue(const FunctionCallbackInfo<Value>& args)
{
    TTYWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->uv_tty_get_winsize();
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void TTYWrap_uv_tty_set_mode_glue(const FunctionCallbackInfo<Value>& args)
{
    TTYWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsBoolean());
    bool carg0 = args[0]->IsTrue();
    int cres = ptr->uv_tty_set_mode(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> TTYWrap_ctor_tpl = env->NewFunctionTemplate(TTYWrap_constructor);
    TTYWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(TTYWrap_ctor_tpl, "uv_guess_handle", TTYWrap_uv_guess_handle_glue);
    env->SetProtoMethod(TTYWrap_ctor_tpl, "uv_tty_get_winsize", TTYWrap_uv_tty_get_winsize_glue);
    env->SetProtoMethod(TTYWrap_ctor_tpl, "uv_tty_set_mode", TTYWrap_uv_tty_set_mode_glue);
    Local<String> TTYWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "TTYWrap");
    TTYWrap_ctor_tpl->SetClassName(TTYWrapString);
    target->Set(TTYWrapString,TTYWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
