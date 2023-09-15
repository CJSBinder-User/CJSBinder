//node.js:inspector_js_api.cc

static void Dispatch(const FunctionCallbackInfo<Value>& info) {
  JSBindingsConnection* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, info.Holder());
  CHECK(info[0]->IsString());
  Environment* env = Environment::GetCurrent(info);
  auto str = ToProtocolString(env->isolate(), info[0])->string();
  session->Dispatch(str);
}
static void Disconnect(const FunctionCallbackInfo<Value>& info) {
  JSBindingsConnection* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, info.Holder());
  session->Disconnect();
}
static void New(const FunctionCallbackInfo<Value>& info) {
  Environment* env = Environment::GetCurrent(info);
  CHECK(info[0]->IsFunction());
  Local<Function> callback = info[0].As<Function>();
  new JSBindingsConnection(env, info.This(), callback);
}

//Register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> tmpl = env->NewFunctionTemplate(JSBindingsConnection::New);
  auto conn_str = FIXED_ONE_BYTE_STRING(env->isolate(), "Connection");
  tmpl->InstanceTemplate()->SetInternalFieldCount(1);
  tmpl->SetClassName(conn_str);
  env->SetProtoMethod(tmpl, "dispatch", JSBindingsConnection::Dispatch);
  env->SetProtoMethod(tmpl, "disconnect", JSBindingsConnection::Disconnect);
  target->Set(context, conn_str,tmpl->GetFunction(context).ToLocalChecked());
}