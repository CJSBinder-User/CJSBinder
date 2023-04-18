//nodegui:qstyle_wrap.cpp

Napi::Value QStyleWrap::pixelMetric(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int metricInt = info[0].As<Napi::Number>().Int32Value();
  PixelMetric metric = static_cast<PixelMetric>(metricInt);
  res = this->instance->pixelMetric(metric)
  return Napi::Value::From(env, res);
}

Napi::Value QStyleWrap::polish(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* qwidgetWrap = Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  QWidget* qwidget = qwidgetWrap->getInternalInstance();
  this->instance->polish(qwidget);
  return env.Null();
}

Napi::Value QStyleWrap::unpolish(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object qwidgetObject = info[0].As<Napi::Object>();
  NodeWidgetWrap* qwidgetWrap = Napi::ObjectWrap<NodeWidgetWrap>::Unwrap(qwidgetObject);
  QWidget* qwidget = qwidgetWrap->getInternalInstance();
  this->instance->unpolish(qwidget);
  return env.Null();
}

{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QStyle";
    Napi::Function func =
        DefineClass(env, CLASSNAME,{
                    InstanceMethod("pixelMetric", &QStyleWrap::pixelMetric),
                    InstanceMethod("polish", &QStyleWrap::polish),
                    InstanceMethod("unpolish", &QStyleWrap::unpolish),
                    COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QStyleWrap)});
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}