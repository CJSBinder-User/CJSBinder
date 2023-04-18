void JSStream_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    JSStream* obj = new JSStream(env,args.This());
}
void JSStream_EmitRead_glue(const FunctionCallbackInfo<Value>& args)
{
    JSStream* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsUint32());
    unsigned int carg0 = args[0].As<Uint32>()->Value();
    CHECK(Buffer::HasInstance(args[1]));
    char* data = Buffer::Data(args[0]);
    int len = Buffer::Length(args[1])
    auto carg1 = wrap->EmitAlloc(len);
    ptr->EmitRead(carg0,carg1);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> JSStream_ctor_tpl = env->NewFunctionTemplate(JSStream_constructor);
    JSStream_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(JSStream_ctor_tpl, "EmitRead", JSStream_EmitRead_glue);
    Local<String> JSStreamString = FIXED_ONE_BYTE_STRING(env->isolate(), "JSStream");
    JSStream_ctor_tpl->SetClassName(JSStreamString);
    auto f = JSStream_ctor_tpl->GetFunction(context).ToLocalChecked();
    target->Set(JSStreamString,f)
}
