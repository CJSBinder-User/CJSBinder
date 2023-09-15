void SocketAddressBlockListWrap_AddSocketAddressRange_glue(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    SocketAddressBlockListWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(SocketAddressBase::HasInstance(env, args[0]));
    SocketAddressBase* addr0;
    ASSIGN_OR_RETURN_UNWRAP(&addr, args[0]);
    auto carg0 = addr->address();
    CHECK(SocketAddressBase::HasInstance(env, args[1]));
    SocketAddressBase* addr1;
    ASSIGN_OR_RETURN_UNWRAP(&addr, args[1]);
    auto carg1 = addr->address();
    ptr->AddSocketAddressRange(carg0,carg1);
}
void SocketAddressBlockListWrap_AddSocketAddressMask_glue(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    SocketAddressBlockListWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(SocketAddressBase::HasInstance(env, args[0]));
    SocketAddressBase* addr0;
    ASSIGN_OR_RETURN_UNWRAP(&addr, args[0]);
    auto carg0 = addr->address();
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    ptr->AddSocketAddressMask(carg0,carg1);
}
void SocketAddressBlockListWrap_AddSocketAddress_glue(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    SocketAddressBlockListWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(SocketAddressBase::HasInstance(env, args[0]));
    SocketAddressBase* addr0;
    ASSIGN_OR_RETURN_UNWRAP(&addr, args[0]);
    auto carg0 = addr->address();
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    ptr->AddSocketAddress(carg0,carg1);
}
void SocketAddressBlockListWrap_Apply_glue(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    SocketAddressBlockListWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(SocketAddressBase::HasInstance(env, args[0]));
    SocketAddressBase* addr0;
    ASSIGN_OR_RETURN_UNWRAP(&addr, args[0]);
    auto carg0 = addr->address();
    bool cres = ptr->Apply(carg0);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void SocketAddressBlockListWrap_ListRules_glue(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    SocketAddressBlockListWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    MaybeLocal<Array> cres = ptr->ListRules();
    if (!cres.IsEmpty())
       args.GetReturnValue().Set(cres.ToLocalChecked());
}
{
    //register code snippet
    Local<FunctionTemplate> tmpl;
    if (tmpl.IsEmpty()) {
       tmpl = env->NewFunctionTemplate(SocketAddressBlockListWrap::New);
       tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
       tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), SocketAddressBlockListWrap));
       env->SetProtoMethod(tmpl, "AddSocketAddressRange", SocketAddressBlockListWrap_AddSocketAddressRange_glue);
       env->SetProtoMethod(tmpl, "AddSocketAddressMask", SocketAddressBlockListWrap_AddSocketAddressMask_glue);
       env->SetProtoMethod(tmpl, "AddSocketAddress", SocketAddressBlockListWrap_AddSocketAddress_glue);
       env->SetProtoMethod(tmpl, "Apply", SocketAddressBlockListWrap_Apply_glue);
       env->SetProtoMethod(tmpl, "ListRules", SocketAddressBlockListWrap_ListRules_glue);
    }
    return tmpl;
}
