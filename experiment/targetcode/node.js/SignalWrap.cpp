//node.js:signal_wrap.cc
void SignalWrap::New(const FunctionCallbackInfo<Value>& args) {
    CHECK(args.IsConstructCall());
    Environment* env = Environment::GetCurrent(args);
    new SignalWrap(env, args.This());
}

void SignalWrap::Start(const FunctionCallbackInfo<Value>& args) {
    SignalWrap* wrap;
    ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
    CHECK(args[0]->IsInt32());
    int signum = args[0].As<Int32>()->Value();
    int err = wrap->uv_signal_start(OnSignal, signum);
    Environment* env = Environment::GetCurrent(args);
    Local<Integer> jsres = Int32::New(env->isolate(), err);
    args.GetReturnValue().Set(jsres);
}

void SignalWrap::Stop(const FunctionCallbackInfo<Value>& args) {
    SignalWrap* wrap;
    ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
    int err = wrap->uv_signal_stop();
    Environment* env = Environment::GetCurrent(args);
    Local<Integer> jsres = Int32::New(env->isolate(), err);
    args.GetReturnValue().Set(jsres);
}

//register code snippet
{
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> constructor = env->NewFunctionTemplate(SignalWrap::New);
    constructor->InstanceTemplate()->SetInternalFieldCount(1);
    Local<String> signalString =FIXED_ONE_BYTE_STRING(env->isolate(), "Signal");
    constructor->SetClassName(signalString);

    env->SetProtoMethod(constructor, "start", Start);
    env->SetProtoMethod(constructor, "stop", Stop);

    target->Set(signalString,constructor->GetFunction(context).ToLocalChecked());
}
