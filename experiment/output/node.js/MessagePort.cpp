void MessagePort_Start_glue(const FunctionCallbackInfo<Value>& args)
{
    MessagePort* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Start();
}
void MessagePort_Stop_glue(const FunctionCallbackInfo<Value>& args)
{
    MessagePort* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Stop();
}
void MessagePort_OnMessage_glue(const FunctionCallbackInfo<Value>& args)
{
    MessagePort* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->OnMessage();
}
void MessagePort_PostMessage_glue(const FunctionCallbackInfo<Value>& args)
{
    MessagePort* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    CHECK(1);
    Local<Value> carg0 = args[0];
    CHECK(1);
    Local<Value> carg1 = args[1];
    ptr->PostMessage(env,carg0,carg1);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> MessagePort_ctor_tpl = env->NewFunctionTemplate(MessagePort::New);
    MessagePort_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(MessagePort_ctor_tpl, "Start", MessagePort_Start_glue);
    env->SetProtoMethod(MessagePort_ctor_tpl, "Stop", MessagePort_Stop_glue);
    env->SetProtoMethod(MessagePort_ctor_tpl, "OnMessage", MessagePort_OnMessage_glue);
    env->SetProtoMethod(MessagePort_ctor_tpl, "PostMessage", MessagePort_PostMessage_glue);
    Local<String> MessagePortString = FIXED_ONE_BYTE_STRING(env->isolate(), "MessagePort");
    MessagePort_ctor_tpl->SetClassName(MessagePortString);
    target->Set(context,MessagePortString,MessagePort_ctor_tpl->GetFunction(context).ToLocalChecked())
}
