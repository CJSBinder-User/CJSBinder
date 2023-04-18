void JSBindingsConnection_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args[0]->IsFunction());
    Local<Function> carg0 = args[0].As<Function>();
    JSBindingsConnection* obj = new JSBindingsConnection(env,args.This(),carg0);
}
void JSBindingsConnection_Disconnect_glue(const FunctionCallbackInfo<Value>& args)
{
    JSBindingsConnection* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Disconnect();
}
void JSBindingsConnection_Dispatch_glue(const FunctionCallbackInfo<Value>& args)
{
    JSBindingsConnection* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = Environment::GetCurrent(args);
    std::unique_ptr<StringBuffer> carg0 = ToProtocolString(env->isolate(), args[0])->string();
    ptr->Dispatch(carg0);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> JSBindingsConnection_ctor_tpl = env->NewFunctionTemplate(JSBindingsConnection_constructor);
    JSBindingsConnection_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(JSBindingsConnection_ctor_tpl, "Disconnect", JSBindingsConnection_Disconnect_glue);
    env->SetProtoMethod(JSBindingsConnection_ctor_tpl, "Dispatch", JSBindingsConnection_Dispatch_glue);
    Local<String> JSBindingsConnectionString = FIXED_ONE_BYTE_STRING(env->isolate(), "JSBindingsConnection");
    JSBindingsConnection_ctor_tpl->SetClassName(JSBindingsConnectionString);
    target->Set(context,JSBindingsConnectionString,JSBindingsConnection_ctor_tpl->GetFunction(context).ToLocalChecked())
}
