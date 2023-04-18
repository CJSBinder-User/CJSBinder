//node.js:timer_wrap.cc
void TimerWrap::New(const FunctionCallbackInfo<Value>& args) {
    CHECK(args.IsConstructCall());
    Environment* env = Environment::GetCurrent(args);
    new TimerWrap(env, args.This());
}

  static void Start(const FunctionCallbackInfo<Value>& args) {
    TimerWrap* wrap;
    ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
    CHECK(args[0]->IsNumber());
    int64_t timeout = args[0].As<Integer>()->Value();
    int err = wrap->uv_timer_start(OnTimeout, timeout, 0);
    Environment* env = Environment::GetCurrent(args);
    Local<Integer> jsres = Int32::New(env->isolate(), err);
    args.GetReturnValue().Set(jsres);
  }
  static void Stop(const FunctionCallbackInfo<Value>& args) {
    TimerWrap* wrap;
    ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
    int err = wrap->uv_timer_stop();
    Environment* env = Environment::GetCurrent(args);
    Local<Integer> jsres = Int32::New(env->isolate(), err);
    args.GetReturnValue().Set(jsres);
  }

{
    //register code snippet
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> constructor = env->NewFunctionTemplate(New);
    Local<String> timerString = FIXED_ONE_BYTE_STRING(env->isolate(), "Timer");
    constructor->InstanceTemplate()->SetInternalFieldCount(1);
    constructor->SetClassName(timerString);
    env->SetProtoMethod(constructor, "start", Start);
    env->SetProtoMethod(constructor, "stop", Stop);
    target->Set(timerString, constructor->GetFunction());
}