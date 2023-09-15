void TLSWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK_EQ(args.Length(), 3);
    CHECK(args[0]->IsBoolean());
    Kind carg0 = args[0]->IsTrue() ? SSLWrap<TLSWrap>::kServer :SSLWrap<TLSWrap>::kClient;
    CHECK(args[1]->IsObject());
    Local<External> stream0_obj = args[1].As<External>();
    StreamBase * carg1 = static_cast<StreamBase *>(stream0_obj->Value());
    CHECK_NOT_NULL(carg1);
    CHECK(args[2]->IsObject());
    Local<Object> sc0 = args[2].As<Object>();
    SecureContext * carg2 = Unwrap<SecureContext>(sc0);
    TLSWrap* obj = new TLSWrap(env,carg0,carg1,carg2);
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
