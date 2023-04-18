//node.js:node_serdes.cc
void SerializerContext::New(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  if (!args.IsConstructCall()) {
    return THROW_ERR_CONSTRUCT_CALL_REQUIRED(env, "Class constructor Serializer cannot be invoked without 'new'");
  }
  new SerializerContext(env, args.This());
}
void SerializerContext::WriteHeader(const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  ctx->serializer_.WriteHeader();
}
void SerializerContext::WriteValue(const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  Local<Context> context = ctx->env()->context();
  Maybe<bool> ret = ctx->serializer_.WriteValue(context, args[0]);
  bool jsres;
  if (ret.IsJust()){
    jsres = ret.FromJust();
    args.GetReturnValue().Set(jsres);
  } 
}
void SerializerContext::SetTreatArrayBufferViewsAsHostObjects(
    const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  CHECK(args[0]->IsBoolean());
  bool value= args[0]->IsTrue();
  ctx->serializer_.SetTreatArrayBufferViewsAsHostObjects(value);
}
void SerializerContext::ReleaseBuffer(const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  std::pair<uint8_t*, size_t> ret = ctx->serializer_.Release();
  auto buf = Buffer::New(ctx->env(),reinterpret_cast<char*>(ret.first),ret.second);
  if (!buf.IsEmpty()) {
    Local<Value> jsres = buf.ToLocalChecked();
    args.GetReturnValue().Set(jsres);}
}
void SerializerContext::TransferArrayBuffer(
    const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  CHECK(args[0]->IsUint32());
  Maybe<uint32_t> id = args[0]->args[0].As<Uint32>()->Value();
  if (!args[1]->IsArrayBuffer()){
    //exception handle
  }
  Local<ArrayBuffer> ab = args[1].As<ArrayBuffer>();
  ctx->serializer_.TransferArrayBuffer(id, ab);
}
void SerializerContext::WriteUint32(const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  CHECK(args[0]->IsUint32());
  Maybe<uint32_t> value = args[0].As<Uint32>()->Value();
  ctx->serializer_.WriteUint32(value);
}
void SerializerContext::WriteUint64(const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  Maybe<uint32_t> arg0 = args[0]->Uint32Value(ctx->env()->context());
  Maybe<uint32_t> arg1 = args[1]->Uint32Value(ctx->env()->context());
  if (arg0.IsNothing() || arg1.IsNothing())
    return;
  uint64_t hi = arg0.FromJust();
  uint64_t lo = arg1.FromJust();
  ctx->serializer_.WriteUint64((hi << 32) | lo);
}
void SerializerContext::WriteDouble(const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  CHECK(args[0]->IsNumber());
  Maybe<double> value = args[0].As<Number>()->Value();
  ctx->serializer_.WriteDouble(value);
}
void SerializerContext::WriteRawBytes(const FunctionCallbackInfo<Value>& args) {
  SerializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  if (!args[0]->IsUint8Array()) {
    //exception handle
  }
  const void * d = Buffer::Data(args[0]);
  ctx->serializer_.WriteRawBytes(d, Buffer::Length(args[0]));
}

DeserializerContext::DeserializerContext(Environment* env,
                                         Local<Object> wrap,
                                         Local<Value> buffer)
  : BaseObject(env, wrap),
    data_(reinterpret_cast<const uint8_t*>(Buffer::Data(buffer))),
    length_(Buffer::Length(buffer)),
    deserializer_(env->isolate(), data_, length_, this) {
  object()->Set(env->context(), env->buffer_string(), buffer).FromJust();

  MakeWeak();
}
//register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> ser = env->NewFunctionTemplate(SerializerContext::New);
  ser->InstanceTemplate()->SetInternalFieldCount(1);
  env->SetProtoMethod(ser, "writeHeader", SerializerContext::WriteHeader);
  env->SetProtoMethod(ser, "writeValue", SerializerContext::WriteValue);
  env->SetProtoMethod(ser, "releaseBuffer", SerializerContext::ReleaseBuffer);
  env->SetProtoMethod(ser,"transferArrayBuffer",SerializerContext::TransferArrayBuffer);
  env->SetProtoMethod(ser, "writeUint32", SerializerContext::WriteUint32);
  env->SetProtoMethod(ser, "writeUint64", SerializerContext::WriteUint64);
  env->SetProtoMethod(ser, "writeDouble", SerializerContext::WriteDouble);
  env->SetProtoMethod(ser, "writeRawBytes", SerializerContext::WriteRawBytes);
  env->SetProtoMethod(ser, "_setTreatArrayBufferViewsAsHostObjects",SerializerContext::SetTreatArrayBufferViewsAsHostObjects);
  Local<String> serializerString = FIXED_ONE_BYTE_STRING(env->isolate(), "Serializer");
  ser->SetClassName(serializerString);
  target->Set(context(),serializerString,ser->GetFunction(context()).ToLocalChecked());
}