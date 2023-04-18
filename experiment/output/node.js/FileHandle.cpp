void FileHandle_constructor(const FunctionCallbackInfo<Value>& args)
{
    Environment* env = Environment::GetCurrent(args);
    CHECK(args.IsConstructCall());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    FileHandle* obj = new FileHandle(env,carg0,args[1]);
}
void FileHandle_ClosePromise_glue(const FunctionCallbackInfo<Value>& args)
{
    FileHandle* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    MaybeLocal<Promise> cres = ptr->ClosePromise();
    Local<Promise> jsres = cres.ToLocalChecked();
    args.GetReturnValue().Set(jsres);
}
void FileHandle_AfterClose_glue(const FunctionCallbackInfo<Value>& args)
{
    FileHandle* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->AfterClose();
}
{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> FileHandle_ctor_tpl = env->NewFunctionTemplate(FileHandle_constructor);
    FileHandle_ctor_tpl->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(FileHandle_ctor_tpl, "ClosePromise", FileHandle_ClosePromise_glue);
    env->SetProtoMethod(FileHandle_ctor_tpl, "AfterClose", FileHandle_AfterClose_glue);
    Local<String> FileHandleString = FIXED_ONE_BYTE_STRING(env->isolate(), "FileHandle");
    FileHandle_ctor_tpl->SetClassName(FileHandleString);
    target->Set(context,FileHandleString,FileHandle_ctor_tpl->GetFunction(context).ToLocalChecked())
}
