//graaljs:node_sockaddr.cc

(const FunctionCallbackInfo<Value>& args) {
  SocketAddressBase* base;
  ASSIGN_OR_RETURN_UNWRAP(&base, args.Holder());
  auto ret = base->address_->flow_label()
  args.GetReturnValue().Set(ret);
}

void SocketAddressBase::LegacyDetail(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SocketAddressBase* base;
  ASSIGN_OR_RETURN_UNWRAP(&base, args.Holder());
  Local<Object> address;
  MaybeLocal<Object> ret = base->address_->ToJS(env);
  if (!ret.IsEmpty())
    args.GetReturnValue().Set(ret.ToLocalChecked());
}

{
    //register code snippet
    Local<FunctionTemplate> tmpl = env->socketaddress_constructor_template();
    if (tmpl.IsEmpty()) {
        tmpl = env->NewFunctionTemplate(New);
        tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), "SocketAddress"));
        tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
        env->SetProtoMethod(tmpl, "legacyDetail", LegacyDetail);
        env->SetProtoMethodNoSideEffect(tmpl, "flowlabel", GetFlowLabel);
        env->set_socketaddress_constructor_template(tmpl);
  }
  return tmpl;
}