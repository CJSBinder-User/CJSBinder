//node.js:pipe_wrap.cc

void PipeWrap::New(const FunctionCallbackInfo<Value>& args) {
  // This constructor should not be exposed to public javascript.
  // Therefore we assert that we are not trying to call this as a
  // normal function.
  CHECK(args.IsConstructCall());
  CHECK(args[0]->IsInt32());
  Environment* env = Environment::GetCurrent(args);

  int type_value = args[0].As<Int32>()->Value();
  PipeWrap::SocketType type = static_cast<PipeWrap::SocketType>(type_value);

  bool ipc;
  ProviderType provider;
  switch (type) {
    case SOCKET:
      provider = PROVIDER_PIPEWRAP;
      ipc = false;
      break;
    case SERVER:
      provider = PROVIDER_PIPESERVERWRAP;
      ipc = false;
      break;
    case IPC:
      provider = PROVIDER_PIPEWRAP;
      ipc = true;
      break;
    default:
      UNREACHABLE();
  }

  new PipeWrap(env, args.This(), provider, ipc);
}
void PipeWrap::Bind(const FunctionCallbackInfo<Value>& args) {
  PipeWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(args[0]->IsString());
  node::Utf8Value name(args.GetIsolate(), args[0]);
  const char* n = *name;
  int err = wrap->uv_pipe_bind(n);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void PipeWrap::SetPendingInstances(const FunctionCallbackInfo<Value>& args) {
  PipeWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(args[0]->IsInt32());
  int instances = args[0].<Int32>()->Value();
  wrap->uv_pipe_pending_instances(instances);
}
void PipeWrap::Fchmod(const v8::FunctionCallbackInfo<v8::Value>& args) {
  PipeWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(args[0]->IsInt32());
  int mode = args[0].As<Int32>()->Value();
  int err = wrap->uv_pipe_chmod(mode);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void PipeWrap::Listen(const FunctionCallbackInfo<Value>& args) {
  PipeWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  Environment* env = wrap->env();
  CHECK(args[0]->IsInt32());
  int backlog = args[0].As<Int32>()->Value();
  int err = wrap->uv_listen(backlog,OnConnection);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), err);
  args.GetReturnValue().Set(jsres);
}
void PipeWrap::Open(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  PipeWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(args[0]->IsInt32());
  int fd = args[0].As<Int32>()->Value();
  int err = wrap->uv_pipe_open(fd);
  wrap->set_fd(fd);
  if (err != 0)
    env->isolate()->ThrowException(UVException(err, "uv_pipe_open"));
}

//register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> t = env->NewFunctionTemplate(New);
  Local<String> pipeString = FIXED_ONE_BYTE_STRING(env->isolate(), "Pipe");
  t->SetClassName(pipeString);
  t->InstanceTemplate()->SetInternalFieldCount(1);
  env->SetProtoMethod(t, "bind", Bind);
  env->SetProtoMethod(t, "listen", Listen);
  env->SetProtoMethod(t, "open", Open);
#ifdef _WIN32
  env->SetProtoMethod(t, "setPendingInstances", SetPendingInstances);
#endif
  env->SetProtoMethod(t, "fchmod", Fchmod);
  target->Set(pipeString, t->GetFunction(env->context()).ToLocalChecked());
}