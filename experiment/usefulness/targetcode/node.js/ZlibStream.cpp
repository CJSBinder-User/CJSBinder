//node.js:node_zlib.cc

void ZlibStream::New(const FunctionCallbackInfo<Value>& args) {
    Environment* env = Environment::GetCurrent(args);
    CHECK(args[0]->IsInt32());
    node_zlib_mode mode = static_cast<node_zlib_mode>(args[0].As<Int32>()->Value());
    new ZlibStream(env, args.This(), mode);
  }

void ZlibStream::Init(const FunctionCallbackInfo<Value>& args) {
  ZlibStream* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  Local<Context> context = args.GetIsolate()->GetCurrentContext();
  CHECK(args[0]->IsUint32());
  uint32_t window_bits = args[0].As<Uint32>()->Value();
  CHECK(args[1]->IsInt32());
  int32_t level = args[1].As<Int32>()->Value();
  CHECK(args[2]->IsUint32());
  uint32_t mem_level = args[2].As<Uint32>()->Value();
  CHECK(args[3]->IsUint32());
  uint32_t strategy = args[3].As<Uint32>()->Value();
  CHECK(Buffer::HasInstance(args[4]));
  std::vector<unsigned char> dictionary;
  unsigned char* data =reinterpret_cast<unsigned char*>(Buffer::Data(args[4]));
  dictionary = std::vector<unsigned char>(data,data + Buffer::Length(args[4]));
  auto dic = std::move(dictionary)
  const CompressionError err = wrap->context()->Init(level, window_bits, mem_level, strategy, dic);
  if (err.IsError())
    wrap->EmitError(err);
}
void ZlibStream::Params(const FunctionCallbackInfo<Value>& args) {
  ZlibStream* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  CHECK(args[0]->IsInt32());
  int level = args[0].As<Int32>()->Value();
  CHECK(args[1]->IsInt32());
  int strategy = args[1].As<Int32>()->Value();
  const CompressionError err = wrap->context()->SetParams(level, strategy);
  if (err.IsError())
    wrap->EmitError(err);
}
void ZlibStream::Reset(const FunctionCallbackInfo<Value> &args) {
  ZlibStream* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  const CompressionError err = wrap->context()->ResetStream();
  if (err.IsError())
    wrap->EmitError(err);
}
{
  //register code snippet
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> z = env->NewFunctionTemplate(ZlibStream::New);
  z->InstanceTemplate()->SetInternalFieldCount(1);

  env->SetProtoMethod(z, "init", ZlibStream::Init);
  env->SetProtoMethod(z, "params", ZlibStream::Params);
  env->SetProtoMethod(z, "reset", ZlibStream::Reset);

  Local<String> zlibString = FIXED_ONE_BYTE_STRING(env->isolate(), "Zlib");
  z->SetClassName(zlibString);
  target->Set(zlibString, z->GetFunction(env->context()).ToLocalChecked());
}