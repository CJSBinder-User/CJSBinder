//node.js:async_wrap.cc

void AsyncWrap::GetAsyncId(const FunctionCallbackInfo<Value>& args) {
  AsyncWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  double cres = ptr->get_async_id();
  Environment* env = Environment::GetCurrent(args);
  Local<Number> jsres = Number::New(env->isolate(), cres);
  info.GetReturnValue().Set(jsres);
}

void AsyncWrap::AsyncReset(const FunctionCallbackInfo<Value>& args) {
  AsyncWrap* wrap;
  ASSIGN_OR_RETURN_UNWRAP(&wrap, args.Holder());
  Local<Value> jsarg0 = info[0];
  double execution_async_id = jsarg0->IsNumber() ? jsarg0.As<Number>()->Value() : -1;
  wrap->AsyncReset(execution_async_id);
}

//register code snippet
{
    Environment* env = Environment::GetCurrent(context);
    auto function_template = env->NewFunctionTemplate(AsyncWrapObject::New);
    auto class_name = FIXED_ONE_BYTE_STRING(env->isolate(), "AsyncWrap");
    env->SetProtoMethod(tmpl, "getAsyncId", AsyncWrap::GetAsyncId);
    env->SetProtoMethod(tmpl, "asyncReset", AsyncWrap::AsyncReset);
    function_template->SetClassName(class_name);
    function_template->InstanceTemplate()->SetInternalFieldCount(1);
    target->Set(context, class_name, function_template->GetFunction(context).ToLocalChecked(););
    env->set_async_wrap_object_ctor_template(function_template);
}