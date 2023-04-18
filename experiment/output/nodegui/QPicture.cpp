Napi::Value QPictureWrap::setBoundingRect(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Napi::Object boundingRectObject0 = args[0].As<Napi::Object>();
    QRectWrap* boundingRectWrap0 = Napi::ObjectWrap<QRectWrap>::Unwrap(boundingRectObject0);
    auto carg0 = *boundingRectWrap0->getInternalInstance()
    this->instance->setBoundingRect(carg0);
    return env.Null();
}
Napi::Value QPictureWrap::boundingRect(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    QRect cres = this->instance->boundingRect();
    auto jsres = QRectWrap::constructor.New({Napi::External<QRect>::New(env, new QRect(cres))});
    return jsres;
}
Napi::Value QPictureWrap::isNull(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    bool cres = this->instance->isNull();
    auto jsres = Napi::Value::From(env, cres);
    return jsres;
}
Napi::Value QPictureWrap::load(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string fileName0 = args[0].As<Napi::String>().Utf8Value();
    auto carg0 = QString::fromUtf8(fileName0.c_str())
    bool cres = this->instance->load(carg0);
    auto jsres = Napi::Value::From(env, cres);
    return jsres;
}
Napi::Value QPictureWrap::save(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    std::string fileName0 = args[0].As<Napi::String>().Utf8Value();
    auto carg0 = QString::fromUtf8(fileName0.c_str())
    bool cres = this->instance->save(carg0);
    auto jsres = Napi::Value::From(env, cres);
    return jsres;
}
Napi::Value QPictureWrap::size(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    unsigned int cres = this->instance->size();
    auto jsres = Napi::Value::From(env, cres);
    return jsres;
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
       QOBJECT_WRAPPED_METHODS_EXPORT_DEFINE(QPictureWrap)});
    auto constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
