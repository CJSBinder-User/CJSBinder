//nodegui:qpicture_wrap.cpp

Napi::Value QPictureWrap::setBoundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object boundingRectObject = info[0].As<Napi::Object>();
  QRectWrap* boundingRectWrap = Napi::ObjectWrap<QRectWrap>::Unwrap(boundingRectObject);
  auto boundingRect = *boundingRectWrap->getInternalInstance()
  this->instance->setBoundingRect(boundingRect);
  return env.Null();
}

Napi::Value QPictureWrap::boundingRect(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QRect rect = this->instance->boundingRect();
  auto instance = QRectWrap::constructor.New({Napi::External<QRect>::New(env, new QRect(rect))});
  return instance;
}

Napi::Value QPictureWrap::isNull(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool isnull = this->instance->isNull();
  auto res = Napi::Boolean::New(env, isnull);
  return res;
}

Napi::Value QPictureWrap::load(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string fileName = info[0].As<Napi::String>().Utf8Value();
  auto name = QString::fromUtf8(fileName.c_str());
  bool success = this->instance->load(name);
  auto res = Napi::Boolean::New(env, success);
  return res;
}

Napi::Value QPictureWrap::save(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string fileName = info[0].As<Napi::String>().Utf8Value();
  auto name = QString::fromUtf8(fileName.c_str())
  bool success = this->instance->save(name);
  auto res = Napi::Boolean::New(env, success);
  return res;
}

Napi::Value QPictureWrap::size(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  unsigned int size = this->instance->size()
  auto res = Napi::Number::New(env, size);
  return res;
}

{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QPicture";
    Napi::Function func = DefineClass(
        env, CLASSNAME,{
        InstanceMethod("setBoundingRect", &QPictureWrap::setBoundingRect),
        InstanceMethod("boundingRect", &QPictureWrap::boundingRect),
        InstanceMethod("isNull", &QPictureWrap::isNull),
        InstanceMethod("load", &QPictureWrap::load),
        InstanceMethod("save", &QPictureWrap::save),
        InstanceMethod("size", &QPictureWrap::size),
        COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPictureWrap)});
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
