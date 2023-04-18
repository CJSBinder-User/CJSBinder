Napi::Value QPenWrap::setGlobalColor(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int clr0 = args[0].As<Napi::Number>().Int32Value();
    Qt::GlobalColor carg0 = (Qt::GlobalColor)clr0;
    this->instance->setGlobalColor(carg0);
    return env.Null();
}
Napi::Value QPenWrap::setColort(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    QColorWrap* color0 = Napi::ObjectWrap<QColorWrap>::Unwrap(args[0].As<Napi::Object>());
    auto carg0 = *color0->getInternalInstance();
    this->instance->setColort(carg0);
    return env.Null();
}
Napi::Value QPenWrap::setScaledSize(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Qt::PenStyle carg0 = (Qt::PenStyle)args[0].As<Napi::Number>().Int32Value();
    this->instance->setScaledSize(carg0);
    return env.Null();
}
Napi::Value QPenWrap::style(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Qt::PenStyle cres = this->instance->style();
    auto jsres = Napi::Number::New(env, static_cast<int>(cres));
    return jsres;
}
Napi::Value QPenWrap::setCapStyle(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Qt::PenCapStyle carg0 = (Qt::PenCapStyle)args[0].As<Napi::Number>().Int32Value();
    this->instance->setCapStyle(carg0);
    return env.Null();
}
Napi::Value QPenWrap::setWidth(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int carg0 = args[0].As<Napi::Number>().Int32Value();
    this->instance->setWidth(carg0);
    return env.Null();
}
{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QPen";
    Napi::Function func = DefineClass(
        env, CLASSNAME,{
       InstanceMethod("setGlobalColor", &QPenWrap::setGlobalColor),
       InstanceMethod("setColort", &QPenWrap::setColort),
       InstanceMethod("setScaledSize", &QPenWrap::setScaledSize),
       InstanceMethod("style", &QPenWrap::style),
       InstanceMethod("setCapStyle", &QPenWrap::setCapStyle),
       InstanceMethod("setWidth", &QPenWrap::setWidth),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QPenWrap)});
    auto constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
