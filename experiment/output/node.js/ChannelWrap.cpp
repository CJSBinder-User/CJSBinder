void ChannelWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK_EQ(args.Length(), 2);
    CHECK(args.IsConstructCall());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    ChannelWrap* obj = new ChannelWrap(env,args.This(),carg0,carg1);
}
void ChannelWrap_cares_channel_glue(const FunctionCallbackInfo<Value>& args)
{
    ChannelWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->cares_channel();
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> ChannelWrap_ctor_tpl = env->NewFunctionTemplate(ChannelWrap_constructor);
    auto inst0 = ChannelWrap_ctor_tpl->InstanceTemplate()
    inst0->SetInternalFieldCount(1);
    env->SetProtoMethod(ChannelWrap_ctor_tpl, "cares_channel", ChannelWrap_cares_channel_glue);
    Local<String> ChannelWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "ChannelWrap");
    ChannelWrap_ctor_tpl->SetClassName(ChannelWrapString);
    auto function0 = ChannelWrap_ctor_tpl->GetFunction(context).ToLocalChecked();
    target->Set(ChannelWrapString,function0)
}
