//nodegui:qmovie_wrap.cpp

Napi::Value QMovieWrap::setFileName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::String fileName = info[0].As<Napi::String>();
  auto st = QString::fromStdString(fileName.Utf8Value());
  this->instance->setFileName(st);
  return env.Null();
}

Napi::Value QMovieWrap::fileName(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QString fileName = this->instance->fileName();
  auto res = Napi::Value::From(env, fileName.toStdString())
  return res;
}

Napi::Value QMovieWrap::setFormat(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  std::string format = info[0].As<Napi::String>().Utf8Value();
  QByteArray byteArray(format.c_str(), format.length());
  this->instance->setFormat(byteArray);
  return env.Null();
}

Napi::Value QMovieWrap::format(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QByteArray format = this->instance->format();
  auto res = Napi::Value::From(env, format.toStdString());
  return res;
}

Napi::Value QMovieWrap::setScaledSize(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Object sizeObject = info[0].As<Napi::Object>();
  QSizeWrap* sizeWrap = Napi::ObjectWrap<QSizeWrap>::Unwrap(sizeObject);
  auto size = *sizeWrap->getInternalInstance()
  this->instance->setScaledSize(size);
  return env.Null();
}

Napi::Value QMovieWrap::start(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->start();
  return env.Null();
}

Napi::Value QMovieWrap::stop(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  this->instance->stop();
  return env.Null();
}

Napi::Value QMovieWrap::setPaused(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool paused = info[0].As<Napi::Boolean>().Value();
  this->instance->setPaused(paused);
  return env.Null();
}

Napi::Value QMovieWrap::jumpToNextFrame(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  bool jumped = this->instance->jumpToNextFrame();
  auto res = Napi::Value::From(env, jumped);
  return res;
}

Napi::Value QMovieWrap::jumpToFrame(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int frameNo = info[0].As<Napi::Number>().Int32Value();
  bool jumped = this->instance->jumpToFrame(frameNo);
  auto res = Napi::Value::From(env, jumped)
  return res;
}

Napi::Value QMovieWrap::state(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QMovie::MovieState state = this->instance->state();
  auto res = Napi::Value::From(env, static_cast<int>(state));
  return res;
}

Napi::Value QMovieWrap::currentFrameNumber(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int currentFrameNumber = this->instance->currentFrameNumber();
  auto res = Napi::Value::From(env, currentFrameNumber);
  return res;
}

Napi::Value QMovieWrap::currentPixmap(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  QPixmap pixmap = this->instance->currentPixmap();
  auto instance = QPixmapWrap::constructor.New({Napi::External<QPixmap>::New(env, new QPixmap(pixmap))});
  return instance;
}

Napi::Value QMovieWrap::loadFromData(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  Napi::Buffer<const char> buffer = info[0].As<Napi::Buffer<const char>>();
  QByteArray byteArray = QByteArray(buffer.Data(), buffer.Length());
  this->bufferDevice->setData(byteArray);
  return env.Null();
}
Napi::Value QMovieWrap::frameCount(const Napi::CallbackInfo& info) {
  Napi::Env env = info.Env();
  int frameCount = this->instance->frameCount();
  auto res = Napi::Value::From(env, frameCount);
  return res;
}

{
    //register code snippet
  Napi::HandleScope scope(env);
  char CLASSNAME[] = "QMovie";
  Napi::Function func = DefineClass(
      env, CLASSNAME,{
       InstanceMethod("setFileName", &QMovieWrap::setFileName),
       InstanceMethod("fileName", &QMovieWrap::fileName),
       InstanceMethod("setFormat", &QMovieWrap::setFormat),
       InstanceMethod("format", &QMovieWrap::format),
       InstanceMethod("setScaledSize", &QMovieWrap::setScaledSize),
       InstanceMethod("start", &QMovieWrap::start),
       InstanceMethod("stop", &QMovieWrap::stop),
       InstanceMethod("setPaused", &QMovieWrap::setPaused),
       InstanceMethod("jumpToNextFrame", &QMovieWrap::jumpToNextFrame),
       InstanceMethod("jumpToFrame", &QMovieWrap::jumpToFrame),
       InstanceMethod("state", &QMovieWrap::state),
       InstanceMethod("currentFrameNumber", &QMovieWrap::currentFrameNumber),
       InstanceMethod("currentPixmap", &QMovieWrap::currentPixmap),
       InstanceMethod("loadFromData", &QMovieWrap::loadFromData),
       InstanceMethod("frameCount", &QMovieWrap::frameCount),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QMovieWrap)});
  constructor = Napi::Persistent(func);
  exports.Set(CLASSNAME, func);
}