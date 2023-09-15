//graaljs:node_sockaddr.cc

void SocketAddressBlockListWrap::AddAddress(
    const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SocketAddressBlockListWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(SocketAddressBase::HasInstance(env, args[0]));
  SocketAddressBase* addr;
  ASSIGN_OR_RETURN_UNWRAP(&addr, args[0]);
  auto add = addr->address();
  wrap->blocklist_->AddSocketAddress(add);
  args.GetReturnValue().Set(true);
}
void SocketAddressBlockListWrap::AddRange(
    const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SocketAddressBlockListWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(SocketAddressBase::HasInstance(env, args[0]));
  CHECK(SocketAddressBase::HasInstance(env, args[1]));
  SocketAddressBase* start_addr;
  SocketAddressBase* end_addr;
  ASSIGN_OR_RETURN_UNWRAP(&start_addr, args[0]);
  ASSIGN_OR_RETURN_UNWRAP(&end_addr, args[1]);
  auto start_add = start_addr->address();
  auto end_add = end_addr->address();
  wrap->blocklist_->AddSocketAddressRange(start_addr->address(),end_addr->address());
  args.GetReturnValue().Set(true);
}
void SocketAddressBlockListWrap::AddSubnet(
    const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SocketAddressBlockListWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(SocketAddressBase::HasInstance(env, args[0]));
  SocketAddressBase* addr;
  ASSIGN_OR_RETURN_UNWRAP(&addr, args[0]);
  CHECK(args[1]->IsInt32());
  int32_t prefix = args[1].As<Int32>()->Value();
  CHECK_GE(prefix, 0);
  auto add = addr->address();
  wrap->blocklist_->AddSocketAddressMask(add, prefix);
  args.GetReturnValue().Set(true);
}
void SocketAddressBlockListWrap::Check(
    const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SocketAddressBlockListWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(SocketAddressBase::HasInstance(env, args[0]));
  SocketAddressBase* addr;
  ASSIGN_OR_RETURN_UNWRAP(&addr, args[0]);
  auto add = addr->address();
  bool res = wrap->blocklist_->Apply(add);
  auto jsres = Boolean::New(env->Isolate(), res);
  args.GetReturnValue().Set(res);
}

void SocketAddressBlockListWrap::GetRules(
    const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SocketAddressBlockListWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  MaybeLocal<Array> rules = wrap->blocklist_->ListRules();
  if (!rules.IsEmpty())
    args.GetReturnValue().Set(rules.ToLocalChecked());
}

{
  //register code snippet
  Local<FunctionTemplate> tmpl = env->blocklist_constructor_template();
  if (tmpl.IsEmpty()) {
    tmpl = env->NewFunctionTemplate(SocketAddressBlockListWrap::New);
    tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), "BlockList"));
    tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
    env->SetProtoMethod(tmpl, "addAddress", AddAddress);
    env->SetProtoMethod(tmpl, "addRange", AddRange);
    env->SetProtoMethod(tmpl, "addSubnet", AddSubnet);
    env->SetProtoMethod(tmpl, "check", Check);
    env->SetProtoMethod(tmpl, "getRules", GetRules);
    env->set_blocklist_constructor_template(tmpl);
  }
  return tmpl;
}