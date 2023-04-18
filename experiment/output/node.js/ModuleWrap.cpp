void ModuleWrap_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    Isolate* isolate = args.GetIsolate();
    CHECK(args.IsConstructCall());
    ModuleWrap* obj = new ModuleWrap(env,args.This());
}
void ModuleWrap_GetStatus_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    ModuleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Status cres = ptr->GetStatus();
    args.GetReturnValue().Set(cres);
}
void ModuleWrap_GetException_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    ModuleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Local<Value> cres = ptr->GetException();
    args.GetReturnValue().Set(cres);
}
void ModuleWrap_GetModuleNamespace_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    ModuleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Local<Value> cres = ptr->GetModuleNamespace();
    args.GetReturnValue().Set(cres);
}
void ModuleWrap_InstantiateModule_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    ModuleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Local<Context> context = ptr->context_.Get(isolate);
    Maybe<bool> cres = ptr->InstantiateModule(context);
    bool jsres;
    if (cres.IsJust())
       jsres = cres.FromJust();
    else return;
    args.GetReturnValue().Set(jsres);
}
void ModuleWrap_Evaluate_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    ModuleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Local<Context> context = ptr->context_.Get(isolate);
    MaybeLocal<Value> cres = ptr->Evaluate(context);
    Local<Value> jsres = cres.ToLocalChecked();
    args.GetReturnValue().Set(jsres);
}
void ModuleWrap_GetModuleRequestsLength_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    ModuleWrap* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->GetModuleRequestsLength();
    Environment* env = Environment::GetCurrent(args);
    Local<Int32> jsres = Int32::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> ModuleWrap_ctor_tpl = env->NewFunctionTemplate(ModuleWrap_constructor);
    ModuleWrap_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(ModuleWrap_ctor_tpl, "GetStatus", ModuleWrap_GetStatus_glue);
    env->SetProtoMethod(ModuleWrap_ctor_tpl, "GetException", ModuleWrap_GetException_glue);
    env->SetProtoMethod(ModuleWrap_ctor_tpl, "GetModuleNamespace", ModuleWrap_GetModuleNamespace_glue);
    env->SetProtoMethod(ModuleWrap_ctor_tpl, "InstantiateModule", ModuleWrap_InstantiateModule_glue);
    env->SetProtoMethod(ModuleWrap_ctor_tpl, "Evaluate", ModuleWrap_Evaluate_glue);
    env->SetProtoMethod(ModuleWrap_ctor_tpl, "GetModuleRequestsLength", ModuleWrap_GetModuleRequestsLength_glue);
    Local<String> ModuleWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "ModuleWrap");
    ModuleWrap_ctor_tpl->SetClassName(ModuleWrapString);
    target->Set(context,ModuleWrapString,ModuleWrap_ctor_tpl->GetFunction(context).ToLocalChecked())
}
