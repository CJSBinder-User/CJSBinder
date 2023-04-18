void TLSWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    TLSWrap* obj = new TLSWrap(env,args.This());
}
void TLSWrap_DestroySSL_glue(const FunctionCallbackInfo<Value>& args)
{
    TLSWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->DestroySSL();
}
void TLSWrap_WaitForCertCb_glue(const FunctionCallbackInfo<Value>& args)
{
    TLSWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->WaitForCertCb(OnClientHelloParseEnd,ptr);
}
void TLSWrap_OnStreamRead_glue(const FunctionCallbackInfo<Value>& args)
{
    TLSWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    CHECK(Buffer::HasInstance(args[1]));
    char* data = Buffer::Data(args[1]);
    size_t len = Buffer::Length(args[1]);
    uv_buf_t carg1 = ptr->OnStreamAlloc(len);
    ptr->OnStreamRead(carg0,carg1);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> TLSWrap_ctor_tpl = env->NewFunctionTemplate(TLSWrap_constructor);
    TLSWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(TLSWrap_ctor_tpl, "DestroySSL", TLSWrap_DestroySSL_glue);
    env->SetProtoMethod(TLSWrap_ctor_tpl, "WaitForCertCb", TLSWrap_WaitForCertCb_glue);
    env->SetProtoMethod(TLSWrap_ctor_tpl, "OnStreamRead", TLSWrap_OnStreamRead_glue);
    Local<String> TLSWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "TLSWrap");
    TLSWrap_ctor_tpl->SetClassName(TLSWrapString);
    target->Set(TLSWrapString,TLSWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
