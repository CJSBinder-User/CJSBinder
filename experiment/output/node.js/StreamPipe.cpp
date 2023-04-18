void StreamPipe_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    CHECK(args[0]->IsExternal());
    StreamBase * carg0 = static_cast<StreamBase*>(args[0].As<External>()->Value());
    CHECK(args[1]->IsExternal());
    StreamBase * carg1 = static_cast<StreamBase*>(args[1].As<External>()->Value());
    StreamPipe* obj = new StreamPipe(carg0,carg1,args.This());
}
void StreamPipe_Unpipe_glue(const FunctionCallbackInfo<Value>& args)
{
    StreamPipe* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Unpipe();
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> StreamPipe_ctor_tpl = env->NewFunctionTemplate(StreamPipe_constructor);
    StreamPipe_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(StreamPipe_ctor_tpl, "Unpipe", StreamPipe_Unpipe_glue);
    Local<String> StreamPipeString = FIXED_ONE_BYTE_STRING(env->isolate(), "StreamPipe");
    StreamPipe_ctor_tpl->SetClassName(StreamPipeString);
    target->Set(context,StreamPipeString,StreamPipe_ctor_tpl->GetFunction(context).ToLocalChecked())
}
