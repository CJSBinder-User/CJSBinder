void SerializerContext_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    if(!args.IsConstructCall())
    {
       return;
    }
    SerializerContext* obj = new SerializerContext(env,args.This());
}
void SerializerContext_WriteHeader_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->serializer_.WriteHeader();
}
void SerializerContext_WriteValue_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Maybe<bool> cres = ptr->serializer_.WriteValue(Environment::GetCurrent(args)->context(),args[0]);
    bool jsres;
    if (cres.IsJust())
       jsres = cres.FromJust();
    else return;
    args.GetReturnValue().Set(jsres);
}
void SerializerContext_SetTreatArrayBufferViewsAsHostObjects_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsBoolean());
    bool carg0 = args[0]->IsTrue();
    ptr->serializer_.SetTreatArrayBufferViewsAsHostObjects(carg0);
}
void SerializerContext_Release_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    std::pair<unsigned char *, unsigned int> cres = ptr->serializer_.Release();
    auto buf = Buffer::New(ptr->env(),reinterpret_cast<char*>(ret.first),ret.second);
    if (!buf.IsEmpty()) args.GetReturnValue().Set(buf.ToLocalChecked());
}
void SerializerContext_TransferArrayBuffer_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    CHECK(args[1]->IsArrayBuffer());
    Local<ArrayBuffer> carg1 = args[1].As<ArrayBuffer>();
    ptr->serializer_.TransferArrayBuffer(carg0,carg1);
}
void SerializerContext_WriteUint32_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    ptr->serializer_.WriteUint32(carg0);
}
void SerializerContext_WriteUint64_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsBigInt());
    unsigned long long carg0 = args[0].As<BigInt>()->Value();
    ptr->serializer_.WriteUint64(carg0);
}
void SerializerContext_WriteDouble_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsNumber());
    double carg0 = args[0].As<Number>()->Value();
    ptr->serializer_.WriteDouble(carg0);
}
void SerializerContext_WriteRawBytes_glue(const FunctionCallbackInfo<Value>& args)
{
    SerializerContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint8Array());
    const void * carg0 = Buffer::Data(args[0]);
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    ptr->serializer_.WriteRawBytes(carg0,carg1);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> SerializerContext_ctor_tpl = env->NewFunctionTemplate(SerializerContext::New);
    SerializerContext_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "WriteHeader", SerializerContext_WriteHeader_glue);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "WriteValue", SerializerContext_WriteValue_glue);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "SetTreatArrayBufferViewsAsHostObjects", SerializerContext_SetTreatArrayBufferViewsAsHostObjects_glue);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "Release", SerializerContext_Release_glue);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "TransferArrayBuffer", SerializerContext_TransferArrayBuffer_glue);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "WriteUint32", SerializerContext_WriteUint32_glue);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "WriteUint64", SerializerContext_WriteUint64_glue);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "WriteDouble", SerializerContext_WriteDouble_glue);
    env->SetProtoMethod(SerializerContext_ctor_tpl, "WriteRawBytes", SerializerContext_WriteRawBytes_glue);
    Local<String> SerializerContextString = FIXED_ONE_BYTE_STRING(env->isolate(), "SerializerContext");
    SerializerContext_ctor_tpl->SetClassName(SerializerContextString);
    target->Set(context,SerializerContextString,SerializerContext_ctor_tpl->GetFunction(context).ToLocalChecked())
}
