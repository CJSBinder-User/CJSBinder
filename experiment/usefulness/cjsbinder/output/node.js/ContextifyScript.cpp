void ContextifyScript_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    ContextifyScript* obj = new ContextifyScript(env,args.This());
}
void ContextifyScript_EvalMachine_glue(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK_EQ(args.Length(), 3);
    ContextifyScript* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsNumber());
    long long carg0 = args[0].As<Integer>()->Value();
    CHECK(args[1]->IsBoolean());
    bool carg1 = args[1]->IsTrue();
    CHECK(args[2]->IsBoolean());
    bool carg2 = args[2]->IsTrue();
    bool cres = ptr->EvalMachine(env,carg0,carg1,carg2,args);
    Local<Boolean> jsres = Boolean::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> ContextifyScript_ctor_tpl = env->NewFunctionTemplate(ContextifyScript_constructor);
    auto inst0 = ContextifyScript_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(ContextifyScript_ctor_tpl, "EvalMachine", ContextifyScript_EvalMachine_glue);
    Local<String> ContextifyScriptString = FIXED_ONE_BYTE_STRING(env->isolate(), "ContextifyScript");
    ContextifyScript_ctor_tpl->SetClassName(ContextifyScriptString);
    target->Set(ContextifyScriptString,ContextifyScript_ctor_tpl->GetFunction(context).ToLocalChecked())
}
