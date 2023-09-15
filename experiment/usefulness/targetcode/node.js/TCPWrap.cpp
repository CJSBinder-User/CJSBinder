//node.js:tcp_wrap.cc
void TCPWrap::New(const FunctionCallbackInfo<Value>& args) {
  CHECK(args.IsConstructCall());
  CHECK(args[0]->IsInt32());
  Environment* env = Environment::GetCurrent(args);
  int type_value = args[0].As<Int32>()->Value();
  TCPWrap::SocketType type = static_cast<TCPWrap::SocketType>(type_value);
  ProviderType provider;
  switch (type) {
    case SOCKET:
      provider = PROVIDER_TCPWRAP;
      break;
    case SERVER:
      provider = PROVIDER_TCPSERVERWRAP;
      break;
    default:
      UNREACHABLE();
  }
  new TCPWrap(env, args.This(), provider);
}
void TCPWrap::Open(const FunctionCallbackInfo<Value>& args) {
  TCPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsInt32());
  int val = args[0].As<Int32>()->Value();
  int err = wrap->uv_tcp_open(fd);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void TCPWrap::Bind(const FunctionCallbackInfo<Value>& args) {
  TCPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsString());
  node::Utf8Value ip_address(wrap->env()->isolate(), args[0]);
  const char* ip = *ip_address;
  CHECK(args[1]->IsInt32());
  int port = args[1].As<Int32>()->Value();
  sockaddr_in addr;
  int err = wrap->uv_ip4_addr(ip, port, &addr);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void TCPWrap::Bind6(const FunctionCallbackInfo<Value>& args) {
  TCPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsString());
  node::Utf8Value ip_address(wrap->env()->isolate(), args[0]);
  const char* ip = *ip_address;
  CHECK(args[1]->IsInt32());
  int port = args[1].As<Int32>()->Value();
  sockaddr_in addr;
  int err = wrap->uv_ip6_addr(ip, port, &addr);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void TCPWrap::Listen(const FunctionCallbackInfo<Value>& args) {
  TCPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder(), args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsInt32());
  int backlog = args[0].As<Int32>()->Value();
  int err = wrap->uv_listen(backlog,OnConnection);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void TCPWrap::SetNoDelay(const FunctionCallbackInfo<Value>& args) {
  TCPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder(), args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsInt32());
  int enable = args[0].As<Int32>()->Value();
  int err = wrap->uv_tcp_nodelay(enable);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void TCPWrap::SetKeepAlive(const FunctionCallbackInfo<Value>& args) {
  TCPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder(), args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsInt32());
  int enable = args[0].As<Int32>()->Value();
  CHECK(args[1]->IsUint32());
  unsigned int delay = args[1].As<Uint32>()->Value();
  int err = wrap->uv_tcp_keepalive(enable, delay);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void TCPWrap::SetSimultaneousAccepts(const FunctionCallbackInfo<Value>& args) {
  TCPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder(), args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsBoolean());
  bool enable = args[0]->IsTrue();
  int err = wrap->uv_tcp_simultaneous_accepts(enable);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void TCPWrap::SetSimultaneousAccepts(const FunctionCallbackInfo<Value>& args) {
  TCPWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsBoolean());
  bool enable = args[0]->IsTrue();
  int err = wrap->uv_tcp_simultaneous_accepts(enable);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
{
  //register code snippet
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> t = env->NewFunctionTemplate(New);
  Local<String> tcpString = FIXED_ONE_BYTE_STRING(env->isolate(), "TCP");
  t->SetClassName(tcpString);
  t->InstanceTemplate()->SetInternalFieldCount(1);
  env->SetProtoMethod(t, "open", Open);
  env->SetProtoMethod(t, "bind", Bind);
  env->SetProtoMethod(t, "listen", Listen);
  env->SetProtoMethod(t, "bind6", Bind6);
  env->SetProtoMethod(t, "setNoDelay", SetNoDelay);
  env->SetProtoMethod(t, "setKeepAlive", SetKeepAlive);
  env->SetProtoMethod(t, "setSimultaneousAccepts", SetSimultaneousAccepts);
  target->Set(tcpString, t->GetFunction(env->context()).ToLocalChecked());
  env->set_tcp_constructor_template(t);
}

