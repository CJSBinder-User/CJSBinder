//node.js:node_http2.cc

void Http2Session::Consume(const FunctionCallbackInfo<Value>& args) {
  Http2Session* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, args.Holder());
  CHECK(args[0]->IsExternal());
  Local<External> j = args[0].As<External>();
  session->Consume(j);
}
void Http2Session::Destroy(const FunctionCallbackInfo<Value>& args) {
  Http2Session* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, args.Holder());
  CHECK(args[0]->IsUint32());
  uint32_t code = args[0].As<Uint32>()->Value();
  CHECK(args[1]->IsBoolean());
  bool socketDestroyed = args[1]->IsTrue();
  session->Close(code, socketDestroyed);
}
void Http2Session::Request(const FunctionCallbackInfo<Value>& args) {
  Http2Session* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, args.Holder());
  CHECK(args[0]->IsArray());
  Local<Array> headers = args[0].As<Array>();
  int options = args[1]->IntegerValue(context).ToChecked();
  Http2Priority priority(env, args[2], args[3], args[4]);
  Headers list(ptr->env()->isolate(), session->env()->context(),headers);
  nghttp2_nv* p = *list;
  int32_t ret = 0;
  Http2Stream* stream = session->Http2Session::SubmitRequest(*priority, p , list.length(),&ret, options);
  args.GetReturnValue().Set(stream->object());
}
void Http2Session::Goaway(const FunctionCallbackInfo<Value>& args) {
  Http2Session* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, args.Holder());
  CHECK(args[0]->IsUint32());
  uint32_t code = args[0].As<Uint32>()->Value();
  CHECK(args[1]->IsInt32());
  int32_t lastStreamID = args[1].As<Int32>()->Value();
  CHECK(args[2]->IsString());
  Local<Value> opaqueData = args[2];
  uint8_t* data = nullptr;
  size_t length = 0;
  if (Buffer::HasInstance(opaqueData)) {
    data = reinterpret_cast<uint8_t*>(Buffer::Data(opaqueData));
    length = Buffer::Length(opaqueData);}
  session->Goaway(code, lastStreamID, data, length);
}
void Http2Session::AltSvc(const FunctionCallbackInfo<Value>& args) {
  Http2Session* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, args.Holder());
  CHECK(args[0]->IsInt32());
  int32_t id = args[0].As<Int32>()->Value();
  CHECK(args[1]->IsString());
  Local<String> origin_str = args[1].As<String>();
  HECK(args[2]->IsString());
  Local<String> value_str = args[2].As<String>();
  size_t origin_len = origin_str->Length();
  size_t value_len = value_str->Length();
  CHECK_LE(origin_len + value_len, 16382);  // Max permitted for ALTSVC
  CHECK((origin_len != 0 && id == 0) || (origin_len == 0 && id != 0));
  MaybeStackBuffer<uint8_t> origin(origin_len)
  MaybeStackBuffer<uint8_t> value(value_len);
  origin_str->WriteOneByte(Environment::GetCurrent(args)->isolate(), *origin);
  value_str->WriteOneByte(Environment::GetCurrent(args)->isolate(), *value);
  session->AltSvc(id, *origin, origin_len, *value, value_len);
}
void Http2Session::Origin(const FunctionCallbackInfo<Value>& args) {
  Http2Session* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, args.Holder());
  CHECK(args[0].IsString());
  Local<String> origin_string = args[0].As<String>();
  CHECK(args[1].IsInteger());
  int count = args[1].As<Int32>()->Value();
  Origins origins(env->isolate(),env->context(),origin_string,count);
  session->Origin(*origins, origins.length());
}
void Http2Session::Ping(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  Http2Session* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, args.Holder());
  uint8_t* payload = nullptr;
  if (Buffer::HasInstance(args[0])) {
    payload = reinterpret_cast<uint8_t*>(Buffer::Data(args[0]));}
  Http2Ping* ping = new Http2Ping(session);
  if (!session->AddPing(ping)) {
    //other unrelated logics
  }
  args.GetReturnValue().Set(true);
}
void Http2Session::Settings(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  Http2Session* session;
  ASSIGN_OR_RETURN_UNWRAP(&session, args.Holder());
  Http2Settings* settings = new Http2Settings(session);
  if (!session->AddSettings(settings)){
    //other unrelated logics
  } 
  args.GetReturnValue().Set(true);
}

//register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> session = env->NewFunctionTemplate(Http2Session::New);
  Local<String> http2SessionClassName = FIXED_ONE_BYTE_STRING(env->isolate(), "Http2Session");
  session->SetClassName(http2SessionClassName);
  session->InstanceTemplate()->SetInternalFieldCount(1);
  env->SetProtoMethod(session, "origin", Http2Session::Origin);
  env->SetProtoMethod(session, "altsvc", Http2Session::AltSvc);
  env->SetProtoMethod(session, "ping", Http2Session::Ping);
  env->SetProtoMethod(session, "consume", Http2Session::Consume);
  env->SetProtoMethod(session, "destroy", Http2Session::Destroy);
  env->SetProtoMethod(session, "goaway", Http2Session::Goaway);
  env->SetProtoMethod(session, "settings", Http2Session::Settings);
  env->SetProtoMethod(session, "request", Http2Session::Request);
  target->Set(context,http2SessionClassName,session->GetFunction(context).ToLocalChecked());
}