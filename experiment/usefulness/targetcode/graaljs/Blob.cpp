//graaljs:node_blob.cc

void Blob::ToArrayBuffer(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  Blob* blob;
  ASSIGN_OR_RETURN_UNWRAP(&blob, args.Holder());
  MaybeLocal<Value> ret = blob->GetArrayBuffer(env);
  if (!ret.IsEmpty())
    args.GetReturnValue().Set(ret.ToLocalChecked());
}
//MaybeLocal<Value>
void Blob::ToSlice(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  Blob* blob;
  ASSIGN_OR_RETURN_UNWRAP(&blob, args.Holder());
  CHECK(args[0]->IsUint32());
  CHECK(args[1]->IsUint32());
  size_t start = args[0].As<Uint32>()->Value();
  size_t end = args[1].As<Uint32>()->Value();
  BaseObjectPtr<Blob> slice = blob->Slice(env, start, end);
  if (slice)
    args.GetReturnValue().Set(slice->object());
}

{
  //register code snippet
  Local<FunctionTemplate> tmpl = env->blob_constructor_template();
  if (tmpl.IsEmpty()) {
    tmpl = FunctionTemplate::New(env->isolate());
    tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
    tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), "Blob"));
    env->SetProtoMethod(tmpl, "toArrayBuffer", ToArrayBuffer);
    env->SetProtoMethod(tmpl, "slice", ToSlice);
    env->set_blob_constructor_template(tmpl);
  }
  return tmpl;
}