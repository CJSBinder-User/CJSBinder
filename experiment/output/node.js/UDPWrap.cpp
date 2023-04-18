void UDPWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    UDPWrap* obj = new UDPWrap(env,args.This());
}
void UDPWrap_uv_ip4_bind_glue(const FunctionCallbackInfo<Value>& args)
{
    UDPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value str0(args.GetIsolate(), args[0]);
    const char* carg0 = *str0;
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    CHECK(args[2]->IsInt32());
    int carg2 = args[2].As<Int32>()->Value();
    int cres = ptr->uv_ip4_bind(carg0,carg1,carg2);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void UDPWrap_uv_ip6_bind_glue(const FunctionCallbackInfo<Value>& args)
{
    UDPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value str0(args.GetIsolate(), args[0]);
    const char* carg0 = *str0;
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    CHECK(args[2]->IsInt32());
    int carg2 = args[2].As<Int32>()->Value();
    int cres = ptr->uv_ip6_bind(carg0,carg1,carg2);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void UDPWrap_uv_udp_set_multicast_interface_glue(const FunctionCallbackInfo<Value>& args)
{
    UDPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value str0(args.GetIsolate(), args[0]);
    const char* carg0 = *str0;
    int cres = ptr->uv_udp_set_multicast_interface(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void UDPWrap_uv_udp_add_membership_glue(const FunctionCallbackInfo<Value>& args)
{
    UDPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value str0(args.GetIsolate(), args[0]);
    const char* carg0 = *str0;
    CHECK(args[1]->IsString());
    node::Utf8Value str1(args.GetIsolate(), args[1]);
    const char* carg1 = *str1;
    int cres = ptr->uv_udp_add_membership(carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void UDPWrap_uv_udp_drop_membership_glue(const FunctionCallbackInfo<Value>& args)
{
    UDPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value str0(args.GetIsolate(), args[0]);
    const char* carg0 = *str0;
    CHECK(args[1]->IsString());
    node::Utf8Value str1(args.GetIsolate(), args[1]);
    const char* carg1 = *str1;
    int cres = ptr->uv_udp_drop_membership(carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void UDPWrap_uv_udp_recv_start_glue(const FunctionCallbackInfo<Value>& args)
{
    UDPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->uv_udp_recv_start();
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void UDPWrap_uv_udp_recv_stop_glue(const FunctionCallbackInfo<Value>& args)
{
    UDPWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->uv_udp_recv_stop();
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> UDPWrap_ctor_tpl = env->NewFunctionTemplate(UDPWrap_constructor);
    UDPWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(UDPWrap_ctor_tpl, "uv_ip4_bind", UDPWrap_uv_ip4_bind_glue);
    env->SetProtoMethod(UDPWrap_ctor_tpl, "uv_ip6_bind", UDPWrap_uv_ip6_bind_glue);
    env->SetProtoMethod(UDPWrap_ctor_tpl, "uv_udp_set_multicast_interface", UDPWrap_uv_udp_set_multicast_interface_glue);
    env->SetProtoMethod(UDPWrap_ctor_tpl, "uv_udp_add_membership", UDPWrap_uv_udp_add_membership_glue);
    env->SetProtoMethod(UDPWrap_ctor_tpl, "uv_udp_drop_membership", UDPWrap_uv_udp_drop_membership_glue);
    env->SetProtoMethod(UDPWrap_ctor_tpl, "uv_udp_recv_start", UDPWrap_uv_udp_recv_start_glue);
    env->SetProtoMethod(UDPWrap_ctor_tpl, "uv_udp_recv_stop", UDPWrap_uv_udp_recv_stop_glue);
    Local<String> UDPWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "UDPWrap");
    UDPWrap_ctor_tpl->SetClassName(UDPWrapString);
    target->Set(UDPWrapString,UDPWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
