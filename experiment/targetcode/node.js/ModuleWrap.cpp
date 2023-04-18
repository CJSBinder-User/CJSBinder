//node.js:module_wrap.cc
void ModuleWrap::Instantiate(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  ModuleWrap* obj;
  ASSIGN_OR_RETURN_UNWRAP(&obj, args.This());
  Local<Context> context = obj->context_.Get(isolate);
  Maybe<bool> ok = obj->module_.Get(isolate)->InstantiateModule(context, ResolveCallback)
  if (!ok.FromMaybe(false)) {
    //exception handle
  }
}
void ModuleWrap::Evaluate(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  ModuleWrap* obj;
  ASSIGN_OR_RETURN_UNWRAP(&obj, args.This());
  Local<Context> context = obj->context_.Get(isolate);
  MaybeLocal<Value> result = obj->module_.Get(isolate)->Evaluate(context);
  Local<Value> r = result.ToLocalChecked();
  args.GetReturnValue().Set(r);
}
void ModuleWrap::Namespace(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  ModuleWrap* obj;
  ASSIGN_OR_RETURN_UNWRAP(&obj, args.This());
  Local<Value> result = obj->module_.Get(isolate)->GetModuleNamespace();
  args.GetReturnValue().Set(result);
}
void ModuleWrap::GetStatus(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  ModuleWrap* obj;
  ASSIGN_OR_RETURN_UNWRAP(&obj, args.This());
  auto res = obj->module_.Get(isolate)->GetStatus();
  args.GetReturnValue().Set(res);
}
void ModuleWrap::GetError(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  ModuleWrap* obj;
  ASSIGN_OR_RETURN_UNWRAP(&obj, args.This());
  Local<Value> cres = obj->module_.Get(isolate)->GetException())
  args.GetReturnValue().Set(cres);
}
void ModuleWrap::GetStaticDependencySpecifiers(
    const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  ModuleWrap* obj;
  ASSIGN_OR_RETURN_UNWRAP(&obj, args.This());
  int count = obj->module_.Get(isolate)->GetModuleRequestsLength();
  //complex computation for return value specifiers
  args.GetReturnValue().Set(specifiers);
}

void glue(){
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> tpl = env->NewFunctionTemplate(New);
  Local<String> class_name = FIXED_ONE_BYTE_STRING(env->isolate(), "ModuleWrap");
  tpl->SetClassName(class_name);
  tpl->InstanceTemplate()->SetInternalFieldCount(1);
  env->SetProtoMethod(tpl, "instantiate", Instantiate);
  env->SetProtoMethod(tpl, "evaluate", Evaluate);
  env->SetProtoMethodNoSideEffect(tpl, "namespace", Namespace);
  env->SetProtoMethodNoSideEffect(tpl, "getStatus", GetStatus);
  env->SetProtoMethodNoSideEffect(tpl, "getError", GetError);
  env->SetProtoMethodNoSideEffect(tpl, "getStaticDependencySpecifiers",GetStaticDependencySpecifiers);
  target->Set(class_name,tpl->GetFunction(context).ToLocalChecked());
}
