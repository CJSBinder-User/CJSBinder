void TCPWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    TCPWrap* obj = new TCPWrap(env,args.This(),carg0);
}
void TCPWrap_uv_listen_glue(const FunctionCallbackInfo<Value>& args)
{
    TCPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->uv_listen(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void TCPWrap_uv_tcp_open_glue(const FunctionCallbackInfo<Value>& args)
{
    TCPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->uv_tcp_open(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void TCPWrap_uv_ip4_addr_glue(const FunctionCallbackInfo<Value>& args)
{
    TCPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value str0(args.GetIsolate(), args[0]);
    const char* carg0 = *str0;
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    int cres = ptr->uv_ip4_addr(carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void TCPWrap_uv_ip6_addr_glue(const FunctionCallbackInfo<Value>& args)
{
    TCPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value str0(args.GetIsolate(), args[0]);
    const char* carg0 = *str0;
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    int cres = ptr->uv_ip6_addr(carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void TCPWrap_uv_tcp_nodelay_glue(const FunctionCallbackInfo<Value>& args)
{
    TCPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->uv_tcp_nodelay(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void TCPWrap_uv_tcp_keepalive_glue(const FunctionCallbackInfo<Value>& args)
{
    TCPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    int cres = ptr->uv_tcp_keepalive(carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void TCPWrap_uv_tcp_simultaneous_accepts_glue(const FunctionCallbackInfo<Value>& args)
{
    TCPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    int cres = ptr->uv_tcp_simultaneous_accepts(carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> TCPWrap_ctor_tpl = env->NewFunctionTemplate(TCPWrap_constructor);
    TCPWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(TCPWrap_ctor_tpl, "uv_listen", TCPWrap_uv_listen_glue);
    env->SetProtoMethod(TCPWrap_ctor_tpl, "uv_tcp_open", TCPWrap_uv_tcp_open_glue);
    env->SetProtoMethod(TCPWrap_ctor_tpl, "uv_ip4_addr", TCPWrap_uv_ip4_addr_glue);
    env->SetProtoMethod(TCPWrap_ctor_tpl, "uv_ip6_addr", TCPWrap_uv_ip6_addr_glue);
    env->SetProtoMethod(TCPWrap_ctor_tpl, "uv_tcp_nodelay", TCPWrap_uv_tcp_nodelay_glue);
    env->SetProtoMethod(TCPWrap_ctor_tpl, "uv_tcp_keepalive", TCPWrap_uv_tcp_keepalive_glue);
    env->SetProtoMethod(TCPWrap_ctor_tpl, "uv_tcp_simultaneous_accepts", TCPWrap_uv_tcp_simultaneous_accepts_glue);
    Local<String> TCPWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "TCPWrap");
    TCPWrap_ctor_tpl->SetClassName(TCPWrapString);
    target->Set(TCPWrapString,TCPWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
