void SocketAddressBase_flow_label_glue(const FunctionCallbackInfo<Value>& args)
{
    SocketAddressBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    unsigned int cres = ptr->address_.flow_label();
    args.GetReturnValue().Set(cres);
}
void SocketAddressBase_ToJS_glue(const FunctionCallbackInfo<Value>& args)
{
    SocketAddressBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    Local<Object> address;
    MaybeLocal<Object> cres = ptr->address_.ToJS(env);
    if (!cres.IsEmpty())
       args.GetReturnValue().Set(cres.ToLocalChecked());
}
{
    //register code snippet
    Local<FunctionTemplate> tmpl;
    if (tmpl.IsEmpty()) {
       tmpl = env->NewFunctionTemplate(New);
       tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
       tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), SocketAddressBase));
       env->SetProtoMethod(tmpl, "flow_label", SocketAddressBase_flow_label_glue);
       env->SetProtoMethod(tmpl, "ToJS", SocketAddressBase_ToJS_glue);
    }
    return tmpl;
}
