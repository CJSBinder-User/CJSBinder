//node.js:handle_wrap.cc
void HandleWrap::Close(const FunctionCallbackInfo<Value>& args) {
  HandleWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  wrap->Close(args[0]);
}
void HandleWrap::HasRef(const FunctionCallbackInfo<Value>& args) {
  HandleWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  bool ok = wrap->HasRef();
  Environment* env = Environment::GetCurrent(args);
  Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
  info.GetReturnValue().Set(jsres);
}
void HandleWrap::Ref(const FunctionCallbackInfo<Value>& args) {
  HandleWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  wrap->uv_ref();
}

void HandleWrap::Unref(const FunctionCallbackInfo<Value>& args) {
  HandleWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  wrap->uv_unref();
}

//register code snippet
{
  Local<FunctionTemplate> tmpl = env->async_wrap_ctor_template();
  if (tmpl.IsEmpty()) {
    tmpl = env->NewFunctionTemplate(nullptr);
    tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), "AsyncWrap"));
    env->SetProtoMethod(tmpl, "getAsyncId", AsyncWrap::GetAsyncId);
    env->SetProtoMethod(tmpl, "asyncReset", AsyncWrap::AsyncReset);
    env->set_async_wrap_ctor_template(tmpl);
  }
  return tmpl;
}