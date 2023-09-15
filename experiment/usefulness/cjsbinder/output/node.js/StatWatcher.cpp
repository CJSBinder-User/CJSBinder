void StatWatcher_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    StatWatcher* obj = new StatWatcher(env,args.This());
}
void StatWatcher_uv_fs_poll_start_glue(const FunctionCallbackInfo<Value>& args)
{
    StatWatcher* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    node::Utf8Value name(args.GetIsolate(), args[0]);
    const char * carg0 = *name;
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    int cres = ptr->uv_fs_poll_start(CallBack,carg0,carg1);
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> StatWatcher_ctor_tpl = env->NewFunctionTemplate(StatWatcher_constructor);
    StatWatcher_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(StatWatcher_ctor_tpl, "uv_fs_poll_start", StatWatcher_uv_fs_poll_start_glue);
    Local<String> StatWatcherString = FIXED_ONE_BYTE_STRING(env->isolate(), "StatWatcher");
    StatWatcher_ctor_tpl->SetClassName(StatWatcherString);
    target->Set(StatWatcherString,StatWatcher_ctor_tpl->GetFunction(context).ToLocalChecked())
}
