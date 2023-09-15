void Http2Stream_SubmitResponse_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsArray());
    Local<Array> headers0 = args[0].As<Array>();
    Headers list0(ptr->env()->isolate(),ptr->env()->context(),headers0);
    nghttp2_nv* carg0 = *list0;
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    CHECK(args[2]->IsInt32());
    int carg2 = args[2].As<Int32>()->Value();
    int cres = ptr->SubmitResponse(carg0,carg1,carg2);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void Http2Stream_SubmitInfo_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsArray());
    Local<Array> headers0 = args[0].As<Array>();
    Headers list0(ptr->env()->isolate(),ptr->env()->context(),headers0);
    nghttp2_nv* carg0 = *list0;
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    int cres = ptr->SubmitInfo(carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void Http2Stream_SubmitTrailers_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsArray());
    Local<Array> headers0 = args[0].As<Array>();
    Headers list0(ptr->env()->isolate(),ptr->env()->context(),headers0);
    nghttp2_nv* carg0 = *list0;
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    int cres = ptr->SubmitTrailers(carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void Http2Stream_SubmitRstStream_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    ptr->SubmitRstStream(carg0);
}
void Http2Stream_SubmitPushPromise_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsArray());
    Local<Array> headers0 = args[0].As<Array>();
    Headers list0(ptr->env()->isolate(),ptr->env()->context(),headers0);
    nghttp2_nv* carg0 = *list0;
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    CHECK(args[2]->IsInt32());
    int carg2 = args[2].As<Int32>()->Value();
    Http2Stream * cres = ptr->SubmitPushPromise(carg0,carg1,carg2);
    Local<Object> jsres = cres->object();
    args.GetReturnValue().Set(jsres);
}
void Http2Stream_SubmitPriority_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsBoolean());
    bool carg0 = args[0]->IsTrue();
    int cres = ptr->SubmitPriority(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void Http2Stream_Destroy_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Destroy();
}
void Http2Stream_ReadStart_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->ReadStart();
}
void Http2Stream_id_glue(const FunctionCallbackInfo<Value>& args)
{
    Http2Stream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->id();
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> Http2Stream_ctor_tpl = env->NewFunctionTemplate(Http2Stream::New);
    Http2Stream_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "SubmitResponse", Http2Stream_SubmitResponse_glue);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "SubmitInfo", Http2Stream_SubmitInfo_glue);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "SubmitTrailers", Http2Stream_SubmitTrailers_glue);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "SubmitRstStream", Http2Stream_SubmitRstStream_glue);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "SubmitPushPromise", Http2Stream_SubmitPushPromise_glue);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "SubmitPriority", Http2Stream_SubmitPriority_glue);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "Destroy", Http2Stream_Destroy_glue);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "ReadStart", Http2Stream_ReadStart_glue);
    env->SetProtoMethod(Http2Stream_ctor_tpl, "id", Http2Stream_id_glue);
    Local<String> Http2StreamString = FIXED_ONE_BYTE_STRING(env->isolate(), "Http2Stream");
    Http2Stream_ctor_tpl->SetClassName(Http2StreamString);
    target->Set(context,Http2StreamString,Http2Stream_ctor_tpl->GetFunction(context).ToLocalChecked())
}
