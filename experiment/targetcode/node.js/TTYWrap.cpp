//node.js:tty_wrap.cc
void TTYWrap::New(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  CHECK(args.IsConstructCall());
  int fd;
  if (!args[0]->Int32Value(env->context()).To(&fd)) return;
  int err = 0;
  new TTYWrap(env, args.This(), fd, args[1]->IsTrue(), &err);
}
void TTYWrap::GuessHandleType(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  TTYWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsInt32());
  int fd = args[0].As<Int32>()->Value();
  CHECK_GE(fd, 0);
  uv_handle_type t = wrap->uv_guess_handle(fd);
  const char* type = nullptr;
  switch (t) {
  case UV_TCP: type = "TCP"; break;
  case UV_TTY: type = "TTY"; break;
  case UV_UDP: type = "UDP"; break;
  case UV_FILE: type = "FILE"; break;
  case UV_NAMED_PIPE: type = "PIPE"; break;
  case UV_UNKNOWN_H]ANDLE: type = "UNKNOWN"; break;
  default:ABORT();}
  Local<String> s = OneByteString(env->isolate(), type);
  args.GetReturnValue().Set(s);
}
void TTYWrap::GetWindowSize(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  TTYWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  int width, height;
  int err = wrap->uv_tty_get_winsize(&width, &height);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void TTYWrap::SetRawMode(const FunctionCallbackInfo<Value>& args) {
  TTYWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap,args.Holder(),args.GetReturnValue().Set(UV_EBADF));
  CHECK(args[0]->IsBoolean());
  bool carg0 = args[0]->IsTrue();
  int err = ptr->uv_tty_set_mode(carg0);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}

{
  //register code snippet
  Environment* env = Environment::GetCurrent(context);
  Local<String> ttyString = FIXED_ONE_BYTE_STRING(env->isolate(), "TTY");
  Local<FunctionTemplate> t = env->NewFunctionTemplate(New);
  t->SetClassName(ttyString);
  t->InstanceTemplate()->SetInternalFieldCount(1);
  env->SetProtoMethodNoSideEffect(t, "getWindowSize", TTYWrap::GetWindowSize);
  env->SetProtoMethod(t, "setRawMode", SetRawMode);
  env->SetMethodNoSideEffect(target, "guessHandleType", GuessHandleType);
  target->Set(ttyString, t->GetFunction(env->context()).ToLocalChecked());
  env->set_tty_constructor_template(t);
}
