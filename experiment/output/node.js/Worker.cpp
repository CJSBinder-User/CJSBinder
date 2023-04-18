void Worker_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    CHECK(args[0]->IsString());
    Utf8Value str(args.GetIsolate(), args[0]);
    std::string carg0 = *str
    Worker* obj = new Worker(env,args.This(),carg0);
}
void Worker_uvref_glue(const FunctionCallbackInfo<Value>& args)
{
    Worker* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->uvref();
}
void Worker_JoinThread_glue(const FunctionCallbackInfo<Value>& args)
{
    Worker* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->JoinThread();
}
void Worker_Unref_glue(const FunctionCallbackInfo<Value>& args)
{
    Worker* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Unref();
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> Worker_ctor_tpl = env->NewFunctionTemplate(Worker_constructor);
    Worker_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(Worker_ctor_tpl, "uvref", Worker_uvref_glue);
    env->SetProtoMethod(Worker_ctor_tpl, "JoinThread", Worker_JoinThread_glue);
    env->SetProtoMethod(Worker_ctor_tpl, "Unref", Worker_Unref_glue);
    Local<String> WorkerString = FIXED_ONE_BYTE_STRING(env->isolate(), "Worker");
    Worker_ctor_tpl->SetClassName(WorkerString);
    target->Set(WorkerString,Worker_ctor_tpl->GetFunction(context).ToLocalChecked())
}
