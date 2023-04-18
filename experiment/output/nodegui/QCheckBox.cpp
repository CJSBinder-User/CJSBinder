Napi::Value QStyleWrap::checkState(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    CheckState cres = this->instance->checkState();
    auto jsres = Napi::Value::From(env, static_cast<int>(cres));
    return jsres;
}
Napi::Value QStyleWrap::setCheckState(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int state0 = args[0].As<Napi::Number>().Int32Value();
    CheckState carg0 = static_cast<CheckState>(state0);
    this->instance->setCheckState(carg0);
    return env.Null();
}
{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QStyle";
    Napi::Function func = DefineClass(
        env, CLASSNAME,{
       InstanceMethod("checkState", &QStyleWrap::checkState),
       InstanceMethod("setCheckState", &QStyleWrap::setCheckState),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QStyleWrap)});
    auto constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
