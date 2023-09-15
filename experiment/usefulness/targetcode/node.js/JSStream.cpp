//node.js:js_stream.cc

void JSStream::New(const FunctionCallbackInfo<Value>& args) {
  CHECK(args.IsConstructCall());
  Environment* env = Environment::GetCurrent(args);
  new JSStream(env, args.This());
}
void JSStream::ReadBuffer(const FunctionCallbackInfo<Value>& args) {
  JSStream* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(Buffer::HasInstance(args[0]));
  char* data = Buffer::Data(args[0]);
  int len = Buffer::Length(args[0]);
  uv_buf_t buf = wrap->EmitAlloc(len);
  ssize_t avail = len;
  wrap->EmitRead(avail, buf);
}
//register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> t = env->NewFunctionTemplate(New);
  Local<String> jsStreamString =FIXED_ONE_BYTE_STRING(env->isolate(), "JSStream");
  t->SetClassName(jsStreamString);
  t->InstanceTemplate()->SetInternalFieldCount(1);
  env->SetProtoMethod(t, "readBuffer", ReadBuffer);
  auto f = t->GetFunction(context).ToLocalChecked()
  StreamBase::AddMethods<JSStream>(env, t);
  target->Set(jsStreamString, f);
}