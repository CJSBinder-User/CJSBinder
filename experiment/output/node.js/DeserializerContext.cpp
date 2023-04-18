void DeserializerContext_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    if(!args[0]->IsUint8Array())
    {
       return;
    }
    DeserializerContext* obj = new DeserializerContext(env,args.This(),args[0]);
}
void DeserializerContext_ReadValue_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    MaybeLocal<Value> cres = ptr->deserializer_.ReadValue(Environment::GetCurrent(args)->context());
    Local<Value> jsres = Null();
    if (!cres.IsEmpty())
       jsres = cres.ToLocalChecked()
    args.GetReturnValue().Set(jsres);
}
void DeserializerContext_ReadHeader_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Maybe<bool> cres = ptr->deserializer_.ReadHeader(Environment::GetCurrent(args)->context());
    bool jsres;
    if (cres.IsJust())
       jsres = cres.FromJust();
    else return;
    args.GetReturnValue().Set(jsres);
}
void DeserializerContext_ReadDouble_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    bool cres = ptr->deserializer_.ReadDouble();
    Environment* env = Environment::GetCurrent(args);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void DeserializerContext_ReadUint32_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    bool cres = ptr->deserializer_.ReadUint32();
    Environment* env = Environment::GetCurrent(args);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void DeserializerContext_ReadUint64_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    bool cres = ptr->deserializer_.ReadUint64();
    Environment* env = Environment::GetCurrent(args);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void DeserializerContext_ReadRawBytes_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    bool cres = ptr->deserializer_.ReadRawBytes(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void DeserializerContext_GetWireFormatVersion_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    unsigned int cres = ptr->deserializer_.GetWireFormatVersion();
    Environment* env = Environment::GetCurrent(args);
    Local<Uint32> jsres = Uint32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void DeserializerContext_TransferArrayBuffer_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    CHECK(args[1]->IsArrayBuffer());
    Local<ArrayBuffer> carg1 = args[1].As<ArrayBuffer>();
    ptr->deserializer_.TransferArrayBuffer(carg0,carg1);
}
void DeserializerContext_TransferSharedArrayBuffer_glue(const FunctionCallbackInfo<Value>& args)
{
    DeserializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    CHECK(args[1]->IsSharedArrayBuffer());
    Local<SharedArrayBuffer> carg1 = args[1].As<SharedArrayBuffer>();
    ptr->deserializer_.TransferSharedArrayBuffer(carg0,carg1);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> DeserializerContext_ctor_tpl = env->NewFunctionTemplate(DeserializerContext_constructor);
    DeserializerContext_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "ReadValue", DeserializerContext_ReadValue_glue);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "ReadHeader", DeserializerContext_ReadHeader_glue);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "ReadDouble", DeserializerContext_ReadDouble_glue);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "ReadUint32", DeserializerContext_ReadUint32_glue);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "ReadUint64", DeserializerContext_ReadUint64_glue);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "ReadRawBytes", DeserializerContext_ReadRawBytes_glue);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "GetWireFormatVersion", DeserializerContext_GetWireFormatVersion_glue);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "TransferArrayBuffer", DeserializerContext_TransferArrayBuffer_glue);
    env->SetProtoMethod(DeserializerContext_ctor_tpl, "TransferSharedArrayBuffer", DeserializerContext_TransferSharedArrayBuffer_glue);
    Local<String> DeserializerContextString = FIXED_ONE_BYTE_STRING(env->isolate(), "DeserializerContext");
    DeserializerContext_ctor_tpl->SetClassName(DeserializerContextString);
    target->Set(context,DeserializerContextString,DeserializerContext_ctor_tpl->GetFunction(context).ToLocalChecked())
}
