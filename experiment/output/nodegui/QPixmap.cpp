Napi::Value QPixmapWrap::load(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string fileName0 = args[0].As<Napi::String>().Utf8Value();
    auto carg0 = QString::fromUtf8(fileName0.c_str());
    bool cres = this->instance->load(carg0);
    auto jsres = Napi::Value::From(env, cres);
     jsres;
}
Napi::Value QPixmapWrap::loadFromDataWithFormat(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string fileName0 = args[0].As<Napi::String>().Utf8Value();
    auto carg0 = QString::fromUtf8(fileName0.c_str());
    unsigned int carg1 = args[1].As<Napi::Number>().Uint32Value();
    Napi::String format0 = args[2].As<Napi::String>();
    const char* carg2 = format.Utf8Value().c_str();
    bool cres = this->instance->loadFromDataWithFormat(carg0,carg1,carg2);
    auto jsres = Napi::Value::From(env, cres);
     jsres;
}
Napi::Value QPixmapWrap::loadFromData(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string fileName0 = args[0].As<Napi::String>().Utf8Value();
    auto carg0 = QString::fromUtf8(fileName0.c_str());
    unsigned int carg1 = args[1].As<Napi::Number>().Uint32Value();
    bool cres = this->instance->loadFromData(carg0,carg1);
    auto jsres = Napi::Value::From(env, cres);
     jsres;
}
Napi::Value QPixmapWrap::save(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string fileName0 = args[0].As<Napi::String>().Utf8Value();
    auto carg0 = QString::fromUtf8(fileName0.c_str());
    bool cres = this->instance->save(carg0);
    auto jsres = Napi::Value::From(env, cres);
     jsres;
}
Napi::Value QPixmapWrap::saveDataWithFormat(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string fileName0 = args[0].As<Napi::String>().Utf8Value();
    auto carg0 = QString::fromUtf8(fileName0.c_str());
    Napi::String format0 = args[1].As<Napi::String>();
    const char* carg1 = format.Utf8Value().c_str();
    bool cres = this->instance->saveDataWithFormat(carg0,carg1);
    auto jsres = Napi::Value::From(env, cres);
     jsres;
}
Napi::Value QPixmapWrap::scaled(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Qt::TransformationMode transformationMode = Qt::FastTransformation;
    int carg0 = args[0].As<Napi::Number>().Int32Value();
    int carg1 = args[1].As<Napi::Number>().Int32Value();
    Qt::AspectRatioMode carg2 = static_cast<Qt::AspectRatioMode>(args[2].As<Napi::Number>().Int32Value());
    QPixmap cres = this->instance->scaled(carg0,carg1,carg2,transformationMode);
    QPixmap* updatedPixMap0 = new QPixmap(cres);
    auto jsres = QPixmapWrap::constructor.New({Napi::External<QPixmap>::New(env, updatedPixMap0)});
     jsres;
}
Napi::Value QPixmapWrap::width(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int cres = this->instance->width();
    auto jsres = Napi::Value::From(env, cres);
     jsres;
}
Napi::Value QPixmapWrap::height(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    int cres = this->instance->height();
    auto jsres = Napi::Value::From(env, cres);
     jsres;
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
       InstanceMethod("save", &QPixmapWrap::save),
       InstanceMethod("saveDataWithFormat", &QPixmapWrap::saveDataWithFormat),
       InstanceMethod("scaled", &QPixmapWrap::scaled),
       InstanceMethod("width", &QPixmapWrap::width),
       InstanceMethod("height", &QPixmapWrap::height),
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QPixmapWrap)});
    auto constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
