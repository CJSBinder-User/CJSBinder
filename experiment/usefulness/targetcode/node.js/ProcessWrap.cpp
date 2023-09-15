//node.js:process_wrap.cc

void ProcessWrap::New(const FunctionCallbackInfo<Value>& args) {
    // This constructor should not be exposed to public javascript.
    // Therefore we assert that we are not trying to call this as a
    // normal function.
    CHECK(args.IsConstructCall());
    Environment* env = Environment::GetCurrent(args);
    new ProcessWrap(env, args.This());
}

void ProcessWrap::Kill(const FunctionCallbackInfo<Value>& args) {
    Environment* env = Environment::GetCurrent(args);
    ProcessWrap* wrap;
    ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
    int signal = args[0]->Int32Value(env->context()).FromJust();
    int err = wrap->uv_process_kill(signal);
    Environment* env = Environment::GetCurrent(args);
    Local<Integer> jsres = Int32::New(env->isolate(), err);
    args.GetReturnValue().Set(jsres);
}

//register code snippet
{
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> constructor = env->NewFunctionTemplate(New);
    constructor->InstanceTemplate()->SetInternalFieldCount(1);
    Local<String> processString = FIXED_ONE_BYTE_STRING(env->isolate(), "Process");
    constructor->SetClassName(processString);
    env->SetProtoMethod(constructor, "kill", Kill);
    target->Set(processString,constructor->GetFunction(context).ToLocalChecked());
}