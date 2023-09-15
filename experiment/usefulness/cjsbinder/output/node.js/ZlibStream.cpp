void ZlibStream_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args[0]->IsInt32());
    node_zlib_mode carg0 = static_cast<node_zlib_mode>(args[0].As<Int32>()->Value());
    ZlibStream* obj = new ZlibStream(env,args.This(),carg0);
}
void ZlibStream_Init_glue(const FunctionCallbackInfo<Value>& args)
{
    ZlibStream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    CHECK(args[2]->IsInt32());
    int carg2 = args[2].As<Int32>()->Value();
    CHECK(args[3]->IsInt32());
    int carg3 = args[3].As<Int32>()->Value();
    CHECK(Buffer::HasInstance(args[4]));
    std::vector<unsigned char> dict;
    unsigned char* data0 = reinterpret_cast<unsigned char*>(Buffer::Data(args[4]));
    dict = std::vector<unsigned char>(data0, data0 + Buffer::Length(args[4]));
    auto carg4 = std::move(dict)
    CompressionError cres = ptr->context()->Init(carg0,carg1,carg2,carg3,carg4);
    if (cres.IsError())
       wrap->EmitError(cres);
}
void ZlibStream_ResetStream_glue(const FunctionCallbackInfo<Value>& args)
{
    ZlibStream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CompressionError cres = ptr->context()->ResetStream();
    if (cres.IsError())
       wrap->EmitError(cres);
}
void ZlibStream_SetParams_glue(const FunctionCallbackInfo<Value>& args)
{
    ZlibStream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    CompressionError cres = ptr->context()->SetParams(carg0,carg1);
    if (cres.IsError())
       wrap->EmitError(cres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> ZlibStream_ctor_tpl = env->NewFunctionTemplate(ZlibStream_constructor);
    ZlibStream_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(ZlibStream_ctor_tpl, "Init", ZlibStream_Init_glue);
    env->SetProtoMethod(ZlibStream_ctor_tpl, "ResetStream", ZlibStream_ResetStream_glue);
    env->SetProtoMethod(ZlibStream_ctor_tpl, "SetParams", ZlibStream_SetParams_glue);
    Local<String> ZlibStreamString = FIXED_ONE_BYTE_STRING(env->isolate(), "ZlibStream");
    ZlibStream_ctor_tpl->SetClassName(ZlibStreamString);
    target->Set(ZlibStreamString,ZlibStream_ctor_tpl->GetFunction(context).ToLocalChecked())
}
