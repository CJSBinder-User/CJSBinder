//node.js:node_http2.cc

void Http2Stream::RstStream(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* stream;
  ASSIGN_OR_RETURN_UNWRAP(&stream, args.Holder());
  CHECK(args[0]->IsUint32());
  uint32_t code = args[0].As<Uint32>()->Value();
  stream->SubmitRstStream(code);
}
void Http2Stream::Respond(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* stream;
  ASSIGN_OR_RETURN_UNWRAP(&stream, args.Holder());
  CHECK(args[0]->IsArray());
  Local<Array> headers = args[0].As<Array>();
  CHECK(args[1]->IsInt32());
  int options = args[1].As<Int32>()->Value();
  Headers list(ptr->env()->isolate(),ptr->env()->context(),headers);
  nghttp2_nv* l = *list;
  int cres = stream->SubmitResponse(l, list.length(), options);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), cres);
  args.GetReturnValue().Set(jsres);
}
void Http2Stream::Info(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* stream;
  ASSIGN_OR_RETURN_UNWRAP(&stream, args.Holder());
  CHECK(args[0]->IsArray());
  Local<Array> headers = args[0].As<Array>();
  Headers list(ptr->env()->isolate(),ptr->env()->context(),headers);
  nghttp2_nv* l = *list;
  int cres = stream->SubmitInfo(l, list.length());
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), cres);
  args.GetReturnValue().Set(jsres);
}
void Http2Stream::Trailers(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* stream;
  ASSIGN_OR_RETURN_UNWRAP(&stream, args.Holder());
  CHECK(args[0]->IsArray());
  Local<Array> headers = args[0].As<Array>();
  Headers list(iptr->env()->isolate(),ptr->env()->context(),headers);
  nghttp2_nv* l = *list;
  int cres = stream->SubmitTrailers(l, list.length());
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), cres);
  args.GetReturnValue().Set(jsres);
}
void Http2Stream::GetID(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* stream;
  ASSIGN_OR_RETURN_UNWRAP(&stream, args.Holder());
   int cres = ptr->id();
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), cres);
  args.GetReturnValue().Set(jsres);
}
void Http2Stream::Destroy(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* stream;
  ASSIGN_OR_RETURN_UNWRAP(&stream, args.Holder());;
  stream->Destroy();
}
void Http2Stream::FlushData(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* stream;
  ASSIGN_OR_RETURN_UNWRAP(&stream, args.Holder());
  stream->ReadStart();
}
void Http2Stream::PushPromise(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* parent;
  ASSIGN_OR_RETURN_UNWRAP(&parent, args.Holder());
  CHECK(args[0]->IsArray());
  Local<Array> headers = args[0].As<Array>();
  Headers list(isolate, context, headers);
  nghttp2_nv* l = *list;
  CHECK(args[1]->IsInt32());
  int options = args[1].As<Int32>()->Value();
  int32_t ret = 0;
  Http2Stream* stream = parent->SubmitPushPromise(l, list.length(),&ret, options);
  args.GetReturnValue().Set(stream->object());
}
void Http2Stream::Priority(const FunctionCallbackInfo<Value>& args) {
  Http2Stream* stream;
  ASSIGN_OR_RETURN_UNWRAP(&stream, args.Holder());
  Http2Priority priority(stream->env(), args[0], args[1], args[2]);
  CHECK(args[3]->IsBoolean());
  bool silent = args[3]->IsTrue();
  int cres = ptr->SubmitPriority(*priority, silent);
  Environment* env = Environment::GetCurrent(args);
  Local<Integer> jsres = Int32::New(env->isolate(), cres);
  args.GetReturnValue().Set(jsres);
}

//register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> stream = FunctionTemplate::New(env->isolate());
  Local<String> http2StreamClassName = FIXED_ONE_BYTE_STRING(env->isolate(), "Http2Stream");
  stream->SetClassName(http2StreamClassName);
  env->SetProtoMethod(stream, "id", Http2Stream::GetID);
  env->SetProtoMethod(stream, "destroy", Http2Stream::Destroy);
  env->SetProtoMethod(stream, "flushData", Http2Stream::FlushData);
  env->SetProtoMethod(stream, "priority", Http2Stream::Priority);
  env->SetProtoMethod(stream, "pushPromise", Http2Stream::PushPromise);
  env->SetProtoMethod(stream, "info", Http2Stream::Info);
  env->SetProtoMethod(stream, "trailers", Http2Stream::Trailers);
  env->SetProtoMethod(stream, "respond", Http2Stream::Respond);
  env->SetProtoMethod(stream, "rstStream", Http2Stream::RstStream);
  env->set_http2stream_constructor_template(streamt);
  streamt = stream->InstanceTemplate()->SetInternalFieldCount(1);
  Local<Function> f = stream->GetFunction(context).ToLocalChecked();
  target->Set(context,http2StreamClassName,f);
}