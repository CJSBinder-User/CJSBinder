void PipeWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    PipeWrap* obj = new PipeWrap(env,args.This(),carg0);
}
void PipeWrap_uv_pipe_bind_glue(const FunctionCallbackInfo<Value>& args)
{
    PipeWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value name(args.GetIsolate(), args[0]);
    const char * carg0 = *name;
    int cres = ptr->uv_pipe_bind(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void PipeWrap_uv_pipe_pending_instances_glue(const FunctionCallbackInfo<Value>& args)
{
    PipeWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    ptr->uv_pipe_pending_instances(carg0);
}
void PipeWrap_uv_pipe_chmod_glue(const FunctionCallbackInfo<Value>& args)
{
    PipeWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->uv_pipe_chmod(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void PipeWrap_uv_pipe_open_glue(const FunctionCallbackInfo<Value>& args)
{
    PipeWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->uv_pipe_open(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void PipeWrap_uv_listen_glue(const FunctionCallbackInfo<Value>& args)
{
    PipeWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    int cres = ptr->uv_listen(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> PipeWrap_ctor_tpl = env->NewFunctionTemplate(PipeWrap_constructor);
    PipeWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(PipeWrap_ctor_tpl, "uv_pipe_bind", PipeWrap_uv_pipe_bind_glue);
    env->SetProtoMethod(PipeWrap_ctor_tpl, "uv_pipe_pending_instances", PipeWrap_uv_pipe_pending_instances_glue);
    env->SetProtoMethod(PipeWrap_ctor_tpl, "uv_pipe_chmod", PipeWrap_uv_pipe_chmod_glue);
    env->SetProtoMethod(PipeWrap_ctor_tpl, "uv_pipe_open", PipeWrap_uv_pipe_open_glue);
    env->SetProtoMethod(PipeWrap_ctor_tpl, "uv_listen", PipeWrap_uv_listen_glue);
    Local<String> PipeWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "PipeWrap");
    PipeWrap_ctor_tpl->SetClassName(PipeWrapString);
    target->Set(context,PipeWrapString,PipeWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
