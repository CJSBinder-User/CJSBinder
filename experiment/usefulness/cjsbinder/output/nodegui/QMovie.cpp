Napi::Value QMoiveWrap::setFileName(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Napi::String napistr0 = args[0].As<Napi::String>();
    auto carg0 = QString::fromStdString(napistr0.Utf8Value());
    this->instance->setFileName(carg0);
    return env.Null();
}
Napi::Value QMoiveWrap::fileName(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    QString cres = this->instance->fileName();
    auto jsres = Napi::Value::From(env, cres.toStdString())
    return jsres;
}
Napi::Value QMoiveWrap::setFormat(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string format0 = args[0].As<Napi::String>().Utf8Value();
    QByteArray carg0(format0.c_str(), format0.length());
    this->instance->setFormat(carg0);
    return env.Null();
}
Napi::Value QMoiveWrap::format(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    QByteArray cres = this->instance->format();
    auto jsres = Napi::Value::From(env, cres.toStdString())
    return jsres;
}
Napi::Value QMoiveWrap::setScaledSize(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Napi::Object sizeObject0 = args[0].As<Napi::Object>();
    QSizeWrap* sizeWrap0 = Napi::ObjectWrap<QSizeWrap>::Unwrap(sizeObject0);
    auto carg0 = *sizeWrap0->getInternalInstance()
    this->instance->setScaledSize(carg0);
    return env.Null();
}
Napi::Value QMoiveWrap::start(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    this->instance->start();
    return env.Null();
}
Napi::Value QMoiveWrap::stop(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    this->instance->stop();
    return env.Null();
}
Napi::Value QMoiveWrap::setPaused(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    bool carg0 = args[0].As<Napi::Boolean>().Value();
    this->instance->setPaused(carg0);
    return env.Null();
}
Napi::Value QMoiveWrap::jumpToNextFrame(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    this->instance->jumpToNextFrame();
    return env.Null();
}
Napi::Value QMoiveWrap::jumpToFrame(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int carg0 = args[0].As<Napi::Number>().Int32Value();
    bool cres = this->instance->jumpToFrame(carg0);
    auto jsres = Napi::Value::From(env, cres);
    return jsres;
}
Napi::Value QMoiveWrap::state(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    MovieState cres = this->instance->state();
    auto jsres = Napi::Value::From(env, static_cast<int>(cres));
    return jsres;
}
Napi::Value QMoiveWrap::currentFrameNumber(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int cres = this->instance->currentFrameNumber();
    auto jsres = Napi::Value::From(env, cres);
    return jsres;
}
Napi::Value QMoiveWrap::currentPixmap(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    QPixmap cres = this->instance->currentPixmap();
    auto jsres = QPixmapWrap::constructor.New({Napi::External<QPixmap>::New(env, new QPixmap(cres))});
    return jsres;
}
Napi::Value QMoiveWrap::setData(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string format0 = args[0].As<Napi::String>().Utf8Value();
    QByteArray carg0(format0.c_str(), format0.length());
    this->instance->setData(carg0);
    return env.Null();
}
Napi::Value QMoiveWrap::frameCount(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int cres = this->instance->frameCount();
    auto jsres = Napi::Value::From(env, cres);
    return jsres;
}
{
    //register code snippet
    Napi::HandleScope scope(env);
    char CLASSNAME[] = "QMoive";
    Napi::Function func = DefineClass(
        env, CLASSNAME,{
       InstanceMethod("setFileName", &QMoiveWrap::setFileName),
       InstanceMethod("fileName", &QMoiveWrap::fileName),
       InstanceMethod("setFormat", &QMoiveWrap::setFormat),
       InstanceMethod("format", &QMoiveWrap::format),
       InstanceMethod("setScaledSize", &QMoiveWrap::setScaledSize),
       InstanceMethod("start", &QMoiveWrap::start),
       InstanceMethod("stop", &QMoiveWrap::stop),
       InstanceMethod("setPaused", &QMoiveWrap::setPaused),
       InstanceMethod("jumpToNextFrame", &QMoiveWrap::jumpToNextFrame),
       InstanceMethod("jumpToFrame", &QMoiveWrap::jumpToFrame),
       InstanceMethod("state", &QMoiveWrap::state),
       InstanceMethod("currentFrameNumber", &QMoiveWrap::currentFrameNumber),
       InstanceMethod("currentPixmap", &QMoiveWrap::currentPixmap),
       InstanceMethod("setData", &QMoiveWrap::setData),
       InstanceMethod("frameCount", &QMoiveWrap::frameCount),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QMoiveWrap)});
    auto constructor = Napi::Persistent(func);
    target.Set(CLASSNAME, func);
}
