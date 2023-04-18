//node.js:node_stat_watcher.cc

void StatWatcher::New(const FunctionCallbackInfo<Value>& args) {
  CHECK(args.IsConstructCall());
  Environment* env = Environment::GetCurrent(args);
  new StatWatcher(env, args.This(), args[0]->IsTrue());
}

// wrap.start(filename, interval)
void StatWatcher::Start(const FunctionCallbackInfo<Value>& args) {
  CHECK_EQ(args.Length(), 2);
  StatWatcher* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(args[0]->IsString());
  node::Utf8Value path(args.GetIsolate(), args[0]);
  const char* p = *path;
  CHECK(args[1]->IsUint32());
  uint32_t interval = args[1].As<Uint32>()->Value();
  int err = wrap->uv_fs_poll_start(Callback, p, interval);
  if (err != 0) {
    Environment* env = Environment::GetCurrent(args);
    Local<Integer> jsres = Int32::New(env->isolate(), err);
    args.GetReturnValue().Set(jsres);}
}


{
  //register code snippet
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> t = env->NewFunctionTemplate(StatWatcher::New);
  t->InstanceTemplate()->SetInternalFieldCount(1);
  Local<String> statWatcherString =FIXED_ONE_BYTE_STRING(env->isolate(), "StatWatcher");
  t->SetClassName(statWatcherString);

  env->SetProtoMethod(t, "start", StatWatcher::Start);

  target->Set(statWatcherString,t->GetFunction(context).ToLocalChecked());
}