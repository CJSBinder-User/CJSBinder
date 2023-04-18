Napi::Value QWindowWrap::screen(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    QScreen * cres = this->instance->screen();
    if (cres){
       return WrapperCache::instance.getWrapper(env, cres, true);
    }else{
    return env.Null();
    }
}
Napi::Value QWindowWrap::showFullScreen(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    this->instance->showFullScreen();
    return env.Null();
}
Napi::Value QWindowWrap::showMaximized(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    this->instance->showMaximized();
    return env.Null();
}
Napi::Value QWindowWrap::showMinimized(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    this->instance->showMinimized();
    return env.Null();
}
Napi::Value QWindowWrap::showNormal(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    this->instance->showNormal();
    return env.Null();
}
Napi::Value QWindowWrap::startSystemMove(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    bool cres = this->instance->startSystemMove();
    auto jsres = Napi::Value::From(env, cres);
    return jsres
}
Napi::Value QWindowWrap::startSystemResize(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    bool cres = this->instance->startSystemResize();
    auto jsres = Napi::Value::From(env, cres);
    return jsres
}
Napi::Value QWindowWrap::setWindowState(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Napi::Number uint0 = args[0].As<Napi::Number>();
    WindowState ws = static_cast<WindowState>(uint0.Uint32Value());
    this->instance->setWindowState(carg0);
    return env.Null();
}
Napi::Value QWindowWrap::windowState(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    WindowState cres = this->instance->windowState();
    uint state0 = static_cast<uint>(cres);
    auto jsres = Napi::Value::From(env, state0);
    return jsres;
}
Napi::Value QWindowWrap::visibility(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Visibility cres = this->instance->visibility();
    uint vis0 = static_cast<uint>(cres);
    auto jsres = Napi::Value::From(env, vis0);
    return jsres;
}
Napi::Value QWindowWrap::setVisibility(const Napi::CallbackInfo& args)
{
    Napi::Env env = args.Env();
    Napi::Number uint0 = args[0].As<Napi::Number>();
    Visibility ws = static_cast<Visibility>(uint0.Uint32Value());
    this->instance->setVisibility(carg0);
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
    auto constructor = Napi::Persistent(func);
    exports.Set(CLASSNAME, func);
}
