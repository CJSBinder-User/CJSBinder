void Http2Session_Close_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Session* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    CHECK(args[1]->IsBoolean());
    bool carg1 = args[1]->IsTrue();
    ptr->Close(carg0,carg1);
}
void Http2Session_Consume_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Session* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsExternal());
    Local<External> carg0 = args[0].As<External>();
    ptr->Consume(carg0);
}
void Http2Session_SubmitRequest_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Session* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsArray());
    Local<Array> carg0 = args[0].As<Array>();
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    CHECK(args[2]->IsInt32());
    int carg2 = args[2].As<Int32>()->Value();
    Http2Stream * cres = ptr->SubmitRequest(carg0,carg1,carg2);
    Local<Object> jsres = cres->object();
    args.GetReturnValue().Set(jsres);
}
void Http2Session_Goaway_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Session* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    CHECK(args[1]->IsInt32());
    int carg1 = args[1].As<Int32>()->Value();
    CHECK(args[2]->IsString());
    Local<Value> opaqueData0 = args[2];
    unsigned char* carg2 = nullptr;
    if (Buffer::HasInstance(opaqueData0)) {
    carg2 = reinterpret_cast<unsigned char*>(Buffer::Data(opaqueData0));}
    CHECK(args[3]->IsInt32());
    int carg3 = args[3].As<Int32>()->Value();
    ptr->Goaway(carg0,carg1,carg2,carg3);
}
void Http2Session_AltSvc_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Session* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    CHECK(args[1]->IsString());
    Local<Value> opaqueData0 = args[1];
    unsigned char* carg1 = nullptr;
    if (Buffer::HasInstance(opaqueData0)) {
    carg1 = reinterpret_cast<unsigned char*>(Buffer::Data(opaqueData0));}
    CHECK(args[2]->IsUint32());
    unsigned int carg2 = args[2].As<Uint32>()->Value();
    CHECK(args[3]->IsString());
    Local<Value> opaqueData1 = args[3];
    unsigned char* carg3 = nullptr;
    if (Buffer::HasInstance(opaqueData1)) {
    carg3 = reinterpret_cast<unsigned char*>(Buffer::Data(opaqueData1));}
    CHECK(args[4]->IsUint32());
    unsigned int carg4 = args[4].As<Uint32>()->Value();
    ptr->AltSvc(carg0,carg1,carg2,carg3,carg4);
}
void Http2Session_Origin_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Session* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    ptr->Origin(carg0);
}
void Http2Session_AddSettings_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Session* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    bool cres = ptr->AddSettings();
    Environment* env = Environment::GetCurrent(args);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void Http2Session_AddPing_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Session* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    bool cres = ptr->AddPing();
    Environment* env = Environment::GetCurrent(args);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> Http2Session_ctor_tpl = env->NewFunctionTemplate(Http2Session::New);
    Http2Session_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(Http2Session_ctor_tpl, "Close", Http2Session_Close_glue);
    env->SetProtoMethod(Http2Session_ctor_tpl, "Consume", Http2Session_Consume_glue);
    env->SetProtoMethod(Http2Session_ctor_tpl, "SubmitRequest", Http2Session_SubmitRequest_glue);
    env->SetProtoMethod(Http2Session_ctor_tpl, "Goaway", Http2Session_Goaway_glue);
    env->SetProtoMethod(Http2Session_ctor_tpl, "AltSvc", Http2Session_AltSvc_glue);
    env->SetProtoMethod(Http2Session_ctor_tpl, "Origin", Http2Session_Origin_glue);
    env->SetProtoMethod(Http2Session_ctor_tpl, "AddSettings", Http2Session_AddSettings_glue);
    env->SetProtoMethod(Http2Session_ctor_tpl, "AddPing", Http2Session_AddPing_glue);
    Local<String> Http2SessionString = FIXED_ONE_BYTE_STRING(env->isolate(), "Http2Session");
    Http2Session_ctor_tpl->SetClassName(Http2SessionString);
    target->Set(context,Http2SessionString,Http2Session_ctor_tpl->GetFunction(context).ToLocalChecked())
}
