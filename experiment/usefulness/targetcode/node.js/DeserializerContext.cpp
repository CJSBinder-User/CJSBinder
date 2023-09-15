//node.js:node_serdesc.cc
void DeserializerContext::New(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  if (!args[0]->IsUint8Array()) {
    return node::THROW_ERR_INVALID_ARG_TYPE(env, "buffer must be a Uint8Array");
  }
  new DeserializerContext(env, args.This(), args[0]);
}

void DeserializerContext::ReadHeader(const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  Maybe<bool> ret = ctx->deserializer_.ReadHeader(Environment::GetCurrent(args)->context());
  bool jsres;
  if (ret.IsJust())
    jsres = ret.FromJust();
  else return;
  args.GetReturnValue().Set(jsres);
}
void DeserializerContext::ReadValue(const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  MaybeLocal<Value> ret = ctx->deserializer_.ReadValue(Environment::GetCurrent(args)->context());
  Local<Value> jsres = Null();
  if (!ret.IsEmpty())
      jsres = ret.ToLocalChecked()
  args.GetReturnValue().Set(jsres);
}
void DeserializerContext::TransferArrayBuffer(
    const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  CHECK(args[0]->IsUint32());
  unsigned int id = args[0].As<Uint32>()->Value();
  if (args[1]->IsArrayBuffer()) {
    Local<ArrayBuffer> ab = args[1].As<ArrayBuffer>();
    ctx->deserializer_.TransferArrayBuffer(id, ab);
    return;}
}
void DeserializerContext::TransferSharedArrayBuffer(
    const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  CHECK(args[0]->IsUint32());
  unsigned int id = args[0].As<Uint32>()->Value();
  if (args[1]->IsSharedArrayBuffer()) {
    Local<SharedArrayBuffer> sab = args[1].As<SharedArrayBuffer>();
    ctx->deserializer_.TransferSharedArrayBuffer(id, sab);
    return;}
}
void DeserializerContext::GetWireFormatVersion(
    const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  unsigned int cres = ctx->deserializer_.GetWireFormatVersion();
  Environment* env = Environment::GetCurrent(args);
  Local<Uint32> jsres = Uint32::New(env->isolate(), cres);
  args.GetReturnValue().Set(jsres);
}
void DeserializerContext::ReadUint32(const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  uint32_t value;
  bool ok = ctx->deserializer_.ReadUint32(&value);
  return args.GetReturnValue().Set(value);
}
void DeserializerContext::ReadUint64(const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  uint64_t value;
  bool ok = ctx->deserializer_.ReadUint64(&value);
  //complex computation for ret
  return args.GetReturnValue().Set(ret);
}
void DeserializerContext::ReadDouble(const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  double value;
  bool ok = ctx->deserializer_.ReadDouble(&value);
  return args.GetReturnValue().Set(value);
}
void DeserializerContext::ReadRawBytes(
    const FunctionCallbackInfo<Value>& args) {
  DeserializerContext* ctx;
  ASSIGN_OR_RETURN_UNWRAP(&ctx, args.Holder());
  CHECK(args[0]->IsInt32());
  int length = args[0].As<Int32>()->Value();
  const void* data;
  bool ok = ctx->deserializer_.ReadRawBytes(length, &data);
  //complex computation for offset
  args.GetReturnValue().Set(offset);
  
}

//register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> des = env->NewFunctionTemplate(DeserializerContext::New);
  des->InstanceTemplate()->SetInternalFieldCount(1);
  env->SetProtoMethod(des, "readHeader", DeserializerContext::ReadHeader);
  env->SetProtoMethod(des, "readValue", DeserializerContext::ReadValue);
  env->SetProtoMethod(des,"getWireFormatVersion",DeserializerContext::GetWireFormatVersion);
  env->SetProtoMethod(des,"transferArrayBuffer",DeserializerContext::TransferArrayBuffer);
  env->SetProtoMethod(des,"transferSharedArrayBuffer",DeserializerContext::TransferSharedArrayBuffer);
  env->SetProtoMethod(des, "readUint32", DeserializerContext::ReadUint32);
  env->SetProtoMethod(des, "readUint64", DeserializerContext::ReadUint64);
  env->SetProtoMethod(des, "readDouble", DeserializerContext::ReadDouble);
  env->SetProtoMethod(des, "_readRawBytes", DeserializerContext::ReadRawBytes);
  Local<String> deserializerString =FIXED_ONE_BYTE_STRING(env->isolate(), "Deserializer");
  des->SetClassName(deserializerString);
  target->Set(context,deserializerString,des->GetFunction(context).ToLocalChecked());
}