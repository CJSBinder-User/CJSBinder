//nodegui:qcheckbox_wrap.cpp

Napi::Value QCheckBoxWrap::checkState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  CheckState state = this->instance->checkState();
  auto res = Napi::Value::From(env, static_cast<int>(state));
  return res;
}

Napi::Value QCheckBoxWrap::setCheckState(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int state = info[0].As<Napi::Number>().Int32Value();
  CheckState cs = static_cast<CheckState>(state);
  this->instance->setCheckState(cs);
  return env.Null();
}

{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QCheckBox";
    Napi::Function func = DefineClass(
      env, CLASSNAME,{
       InstanceMethod("checkState", &QCheckBoxWrap::checkState),
       InstanceMethod("setCheckState", &QCheckBoxWrap::setCheckState),
       QABSTRACTBUTTON_WRAPPED_METHODS_EXPORT_DEFINE(QCheckBoxWrap)});
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}