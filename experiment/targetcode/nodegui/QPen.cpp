//nodegui:qpen_wrap.cpp

Napi::Value QPenWrap::setGlobalColor(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int clr = info[0].As<Napi::Number>().Int32Value();
  Qt::GlobalColor color = (Qt::GlobalColor)clr;
  this->instance->setGlobalColor(color);
  return env.Null();
}

Napi::Value QPenWrap::setColor(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    QColorWrap* colorWrap = Napi::ObjectWrap<QColorWrap>::Unwrap(info[0].As<Napi::Object>());
    auto color = *colorWrap->getInternalInstance();
    this->instance->setColor(color);
    return env.Null();
}

Napi::Value QPenWrap::setStyle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::PenStyle style = (Qt::PenStyle)info[0].As<Napi::Number>().Int32Value();
  this->instance->setStyle(style);
  return env.Null();
}

Napi::Value QPenWrap::style(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::PenStyle style = this->instance->style();
  auto res = Napi::Number::New(env, static_cast<int>(style));
  return res;
}

Napi::Value QPenWrap::setCapStyle(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Qt::PenCapStyle style = (Qt::PenCapStyle)info[0].As<Napi::Number>().Int32Value();
  this->instance->setCapStyle(style);
  return env.Null();
}

Napi::Value QPenWrap::setWidth(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int width = info[0].As<Napi::Number>().Int32Value();
  this->instance->setWidth(width);
  return env.Null();
}

{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QPen";
    Napi::Function func =
      DefineClass(env, CLASSNAME,{
                   InstanceMethod("setGlobalColor", &QPenWrap::setGlobalColor),
                   InstanceMethod("setColor", &QPenWrap::setColor),
                   InstanceMethod("setStyle", &QPenWrap::setStyle),
                   InstanceMethod("style", &QPenWrap::style),
                   InstanceMethod("setCapStyle", &QPenWrap::setCapStyle),
                   InstanceMethod("setWidth", &QPenWrap::setWidth),
                   COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPenWrap)});
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}




