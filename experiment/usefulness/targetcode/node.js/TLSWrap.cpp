//node.js:tls_wrap.cc
void TLSWrap::Wrap(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  CHECK_EQ(args.Length(), 3);
  CHECK(args[0]->IsObject());
  CHECK(args[1]->IsObject());
  CHECK(args[2]->IsBoolean());
  Local<External> stream_obj = args[0].As<External>();
  Local<Object> sc = args[1].As<Object>();
  Kind kind = args[2]->IsTrue() ? SSLWrap<TLSWrap>::kServer :SSLWrap<TLSWrap>::kClient;
  StreamBase* stream = static_cast<StreamBase*>(stream_obj->Value());
  CHECK_NOT_NULL(stream);
  TLSWrap* res = new TLSWrap(env, kind, stream, Unwrap<SecureContext>(sc));
  args.GetReturnValue().Set(res->object());
}

void TLSWrap::Receive(const FunctionCallbackInfo<Value>& args) {
  TLSWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(Buffer::HasInstance(args[0]));
  char* data = Buffer::Data(args[0]);
  size_t len = Buffer::Length(args[0]);
  uv_buf_t buf = wrap->OnStreamAlloc(len);
  size_t copy = buf.len > len ? len : buf.len;
  wrap->OnStreamRead(copy, buf);
}
void TLSWrap::DestroySSL(const FunctionCallbackInfo<Value>& args) {
  TLSWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  wrap->DestroySSL();
}
void TLSWrap::EnableCertCb(const FunctionCallbackInfo<Value>& args) {
  TLSWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  wrap->WaitForCertCb(OnClientHelloParseEnd,wrap);
}
{
  //register code snippet

  env->SetMethod(target, "wrap", TLSWrap::Wrap);
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> t = BaseObject::MakeLazilyInitializedJSTemplate(env);
  Local<String> tlsWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "TLSWrap");
  env->SetProtoMethod(t, "receive", Receive);
  env->SetProtoMethod(t, "destroySSL", DestroySSL);
  env->SetProtoMethod(t, "enableCertCb", EnableCertCb);
  StreamBase::AddMethods<TLSWrap>(env, t);
  SSLWrap<TLSWrap>::AddMethods(env, t);
  env->set_tls_wrap_constructor_function(t->GetFunction(env->context()).ToLocalChecked());
  target->Set(tlsWrapString, t->GetFunction(env->context()).ToLocalChecked());
}