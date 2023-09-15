Napi::Value QStyleWrap::pixelMetric(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int metricInt0 = args[0].As<Napi::Number>().Int32Value();
    PixelMetric carg0 = static_cast<PixelMetric>(metricInt0);
    int cres = this->instance->pixelMetric(carg0);
    return Napi::Value::From(env, cres);
}
Napi::Value QStyleWrap::polish(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Napi::Object qwidgetObject0 = args[0].As<Napi::Object>();
    NodeWidgetWrap* qwidgetWrap0 = Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject0);
    QWidget* carg0 = qwidgetWrap0->getInternalInstance();
    this->instance->polish(carg0);
    return env.Null();
}
Napi::Value QStyleWrap::unpolish(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Napi::Object qwidgetObject0 = args[0].As<Napi::Object>();
    NodeWidgetWrap* qwidgetWrap0 = Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject0);
    QWidget* carg0 = qwidgetWrap0->getInternalInstance();
    this->instance->unpolish(carg0);
    return env.Null();
}
{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QStyle";
    Napi::Function func = DefineClass(
        env, CLASSNAME,{
       InstanceMethod("pixelMetric", &QStyleWrap::pixelMetric),
       InstanceMethod("polish", &QStyleWrap::polish),
       InstanceMethod("unpolish", &QStyleWrap::unpolish),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QStyleWrap)});
    auto constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
