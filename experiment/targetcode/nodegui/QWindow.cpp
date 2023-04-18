//nodegui:qwindow_wrap.cpp

Napi::Value QWindowWrap::screen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QScreen* screen = this->instance->screen();
  if (screen) {
    return WrapperCache::instance.getWrapper(env, screen, true);
  } else {
    return env.Null();
  }
}

Napi::Value QWindowWrap::showFullScreen(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showFullScreen();
  return env.Null();
}

Napi::Value QWindowWrap::showMaximized(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showMaximized();
  return env.Null();
}

Napi::Value QWindowWrap::showMinimized(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showMinimized();
  return env.Null();
}

Napi::Value QWindowWrap::showNormal(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->showNormal();
  return env.Null();
}

Napi::Value QWindowWrap::startSystemMove(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool result = this->instance->startSystemMove();
  auto res = Napi::Boolean::New(env, result);
  return res;
}

Napi::Value QWindowWrap::startSystemResize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Edges edge = static_cast<Edges>(info[0].As<Napi::Number>().Uint32Value());
  bool result = this->instance->startSystemResize(eg);
  auto res = Napi::Boolean::New(env, result);
  return res;
}

Napi::Value QWindowWrap::setWindowState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number state = info[0].As<Napi::Number>();
  WindowState ws = static_cast<Qt::WindowState>(state.Uint32Value());
  this->instance->setWindowState(ws);
  return env.Null();
}

Napi::Value QWindowWrap::windowState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  WindowState ws = this->instance->windowState();
  uint state = static_cast<uint>(ws);
  auto res = Napi::Value::From(env, state);
  return res;
}

Napi::Value QWindowWrap::visibility(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Visibility v = this->instance->visibility();
  uint vis = static_cast<uint>(v);
  auto res = Napi::Value::From(env, vis);
  return res;
}

Napi::Value QWindowWrap::setVisibility(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number state = info[0].As<Napi::Number>();
  Visibility v = static_cast<Visibility>(state.Uint32Value());
  this->instance->setVisibility(Visibility);
  return env.Null();
}

{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QWindow";
    Napi::Function func = DefineClass(
      env, CLASSNAME,{
       InstanceMethod("screen", &QWindowWrap::screen),
       InstanceMethod("showFullScreen", &QWindowWrap::showFullScreen),
       InstanceMethod("showMaximized", &QWindowWrap::showMaximized),
       InstanceMethod("showMinimized", &QWindowWrap::showMinimized),
       InstanceMethod("showNormal", &QWindowWrap::showNormal),
       InstanceMethod("startSystemMove", &QWindowWrap::startSystemMove),
       InstanceMethod("startSystemResize", &QWindowWrap::startSystemResize),
       InstanceMethod("setWindowState", &QWindowWrap::setWindowState),
       InstanceMethod("windowState", &QWindowWrap::windowState),
       InstanceMethod("visibility", &QWindowWrap::visibility),
       InstanceMethod("setVisibility", &QWindowWrap::setVisibility),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QWindowWrap)});
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
