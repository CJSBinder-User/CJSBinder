//nodegui:qpixmap_wrap.cpp

Napi::Value QPixmapWrap::load(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool loadSuccess = false;
  QString imageUrl = QString::fromUtf8(info[0].As<Napi::String>().Utf8Value().c_str());
  loadSuccess = this->instance->load(imageUrl);
  auto res = Napi::Boolean::New(env, loadSuccess);
  return res;
}

Napi::Value QPixmapWrap::loadFromDataWithFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool loadSuccess = false;
  Napi::Buffer<uchar> buffer = info[0].As<Napi::Buffer<uchar>>();
  auto buf = buffer.Data()
  Napi::String format = info[1].As<Napi::String>();
  const char* fmt = format.Utf8Value().c_str();
  loadSuccess = this->instance->loadFromDataWithFormat(buf,buffer.length(),fmt);
  auto res = Napi::Boolean::New(env, loadSuccess);
  return res;
}


Napi::Value QPixmapWrap::loadFromData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool loadSuccess = false;
  Napi::Buffer<uchar> buffer = info[0].As<Napi::Buffer<uchar>>();
  auto buf = buffer.Data()
  loadSuccess = this->instance->loadFromData(buf,buffer.length());
  auto res = Napi::Boolean::New(env, loadSuccess);
  return res
}

Napi::Value QPixmapWrap::save(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool loadSuccess = false;
  QString imageUrl = QString::fromUtf8(info[0].As<Napi::String>();.Utf8Value().c_str());
  loadSuccess = this->instance->save(imageUrl);
  auto res = Napi::Boolean::New(env, loadSuccess);
  return res;
}

Napi::Value QPixmapWrap::saveWithFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool loadSuccess = false;
  QString imageUrl = QString::fromUtf8(info[0].As<Napi::String>();.Utf8Value().c_str());
  Napi::String format = info[1].As<Napi::String>().Utf8Value().c_str());
  const char* fmt = format.Utf8Value().c_str(); 
  loadSuccess = this->instance->saveWithFormat(imageUrl,fmt);
  auto res = Napi::Boolean::New(env, loadSuccess);
  return res;
}

Napi::Value QPixmapWrap::scaled(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Number widthValue = info[0].As<Napi::Number>();
  Napi::Number heightValue = info[1].As<Napi::Number>();
  int width = widthValue.Int32Value();
  int height = heightValue.Int32Value();
  Qt::AspectRatioMode aspectRatioMode = Qt::IgnoreAspectRatio;
  Qt::TransformationMode transformationMode = Qt::FastTransformation;
  aspectRatioMode = static_cast<Qt::AspectRatioMode>(info[2].As<Napi::Number>().Int32Value());
  auto scl = this->instance->scaled(width, height, aspectRatioMode, transformationMode);
  QPixmap* updatedPixMap = new QPixmap(scl);
  auto instance = QPixmapWrap::constructor.New({Napi::External<QPixmap>::New(env, updatedPixMap)});
  return instance;
}

Napi::Value QPixmapWrap::height(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->height());
}
Napi::Value QPixmapWrap::width(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  return Napi::Value::From(env, this->instance->width());
}

{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QPixmap";
    Napi::Function func = DefineClass(
        env, CLASSNAME,{
        InstanceMethod("load", &QPixmapWrap::load),
        InstanceMethod("loadFromDataWithFormat", &QPixmapWrap::loadFromDataWithFormat),
        InstanceMethod("loadFromData", &QPixmapWrap::loadFromData),
        InstanceMethod("saveWithFormat", &QPixmapWrap::saveWithFormat),
        InstanceMethod("save", &QPixmapWrap::save),
        InstanceMethod("scaled", &QPixmapWrap::scaled),
        InstanceMethod("height", &QPixmapWrap::height),
        InstanceMethod("width", &QPixmapWrap::width),
        COMPONENT_WRAPPED_METHODS_EXPORT_DEFINE(QPixmapWrap)});
    constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
