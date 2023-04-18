//node.js:udp_wrap.cc

void UDPWrap::New(const FunctionCallbackInfo<Value>& args) {
  CHECK(args.IsConstructCall());
  Environment* env = Environment::GetCurrent(args);
  new UDPWrap(env, args.This());
}
void UDPWrap::SetMulticastInterface(const FunctionCallbackInfo<Value>& args) {
  UDPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsString());
  Utf8Value iface(args.GetIsolate(), args[0]);
  const char* iface_cstr = *iface;
  int err = wrap->uv_udp_set_multicast_interface(iface_cstr);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void UDPWrap::AddMembership(const FunctionCallbackInfo<Value>& args) {
  UDPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsString());
  CHECK(args[1]->IsString());
  node::Utf8Value address(args.GetIsolate(), args[0]);
  node::Utf8Value iface(args.GetIsolate(), args[1]);
  const char* iface_cstr = *iface;
  const char* i = *address;
  int err = wrap->uv_udp_add_membership(i,iface_cstr);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void UDPWrap::DropMembership(const FunctionCallbackInfo<Value>& args) {
  UDPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsString());
  CHECK(args[1]->IsString());
  node::Utf8Value address(args.GetIsolate(), args[0]);
  node::Utf8Value iface(args.GetIsolate(), args[1]);
  const char* iface_cstr = *iface;
  const char* i = *address;
  int err = wrap->uv_udp_drop_membership(i,iface_cstr);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void UDPWrap::RecvStart(const FunctionCallbackInfo<Value>& args) {
  UDPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  int err = wrap->uv_udp_recv_start(OnAlloc, OnRecv);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void UDPWrap::RecvStop(const FunctionCallbackInfo<Value>& args) {
  UDPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  int r = wrap->uv_udp_recv_stop();
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), r);
  args.GetReturnValue().Set(jsres);
}
void UDPWrap::Bind(const FunctionCallbackInfo<Value>& args, int family) {
  UDPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsString())
  node::Utf8Value address(args.GetIsolate(), args[0]);
  const char* i = *address;
  CHECK(args[1].IsUint32());
  uint32_t port = args[1].As<Uint32>()->Value();
  char addr[sizeof(sockaddr_in6)];
  int err = wrap->uv_ip4_addr(i, port, reinterpret_cast<sockaddr_in*>(&addr));
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void UDPWrap::Bind6(const FunctionCallbackInfo<Value>& args, int family) {
  UDPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsString())
  node::Utf8Value address(args.GetIsolate(), args[0]);
  const char* i = *address;
  CHECK(args[1].IsUint32());
  uint32_t port = args[1].As<Uint32>()->Value();
  char addr[sizeof(sockaddr_in6)];
  int err = wrap->uv_ip6_addr(i, port, reinterpret_cast<sockaddr_in*>(&addr))
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
{
  //register code snippet
  Local<FunctionTemplate> t = env->NewFunctionTemplate(New);
  t->InstanceTemplate()->SetInternalFieldCount(1);
  Local<String> udpString = FIXED_ONE_BYTE_STRING(env->isolate(), "UDP");
  t->SetClassName(udpString);
  env->SetProtoMethod(t, "bind", Bind);
  env->SetProtoMethod(t, "bind6", Bind6);
  env->SetProtoMethod(t, "recvStart", RecvStart);
  env->SetProtoMethod(t, "recvStop", RecvStop);
  env->SetProtoMethod(t, "addMembership", AddMembership);
  env->SetProtoMethod(t, "dropMembership", DropMembership);
  env->SetProtoMethod(t, "setMulticastInterface", SetMulticastInterface);
  target->Set(udpString, t->GetFunction(env->context()).ToLocalChecked());
  env->set_udp_constructor_function(t->GetFunction(env->context()).ToLocalChecked());
}
