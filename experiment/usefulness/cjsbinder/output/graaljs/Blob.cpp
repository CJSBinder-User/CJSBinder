void Blob_GetArrayBuffer_glue(const FunctionCallbackInfo<Value>& args)
{
    Blob* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    MaybeLocal<Value> cres = ptr->GetArrayBuffer(env);
    if (!cres.IsEmpty())
       args.GetReturnValue().Set(cres.ToLocalChecked());
}
void Blob_Slice_glue(const FunctionCallbackInfo<Value>& args)
{
    Blob* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    BaseObjectPtr<Blob> cres = ptr->Slice(env,carg0,carg1);
    if (cres)
       args.GetReturnValue().Set(cres->object());
}
{
    //register code snippet
    Local<FunctionTemplate> tmpl;
    if (tmpl.IsEmpty()) {
       tmpl = FunctionTemplate::New(env->isolate());
       tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
       tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), Blob));
       env->SetProtoMethod(tmpl, "GetArrayBuffer", Blob_GetArrayBuffer_glue);
       env->SetProtoMethod(tmpl, "Slice", Blob_Slice_glue);
    }
    return tmpl;
}
