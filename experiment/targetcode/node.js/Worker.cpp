//node.js:node_worker.cc

void Worker::New(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  CHECK(args.IsConstructCall());
  std::string url;
  if (args.Length() == 1 && !args[0]->IsNullOrUndefined()) {
    Utf8Value value(args.GetIsolate(),args[0]->ToString(env->context()).FromMaybe(Local<String>()));
    url.append(value.out(), value.length());
  }
  new Worker(env, args.This(), url);
}

void Worker::StopThread(const FunctionCallbackInfo<Value>& args) {
  Worker* w;
  ASSIGN_OR_RETURN_UNWRAP(&w, args.This());
  w->JoinThread();
}
void Worker::Ref(const FunctionCallbackInfo<Value>& args) {
  Worker* w;
  ASSIGN_OR_RETURN_UNWRAP(&w, args.This());
  w->uvref();
}
void Worker::Unref(const FunctionCallbackInfo<Value>& args) {
  Worker* w;
  ASSIGN_OR_RETURN_UNWRAP(&w, args.This());
  w->Unref();
}
{
  //register code snippet
  Local<FunctionTemplate> w = env->NewFunctionTemplate(Worker::New);

  w->InstanceTemplate()->SetInternalFieldCount(1);
  w->Inherit(AsyncWrap::GetConstructorTemplate(env));

  env->SetProtoMethod(w, "stopThread", Worker::StopThread);
  env->SetProtoMethod(w, "ref", Worker::Ref);
  env->SetProtoMethod(w, "unref", Worker::Unref);

  Local<String> workerString = FIXED_ONE_BYTE_STRING(env->isolate(), "Worker");
  w->SetClassName(workerString);
  target->Set(workerString, w->GetFunction(context).ToLocalChecked());
}