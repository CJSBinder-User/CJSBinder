//node.js:node_contextify.cc
void ContextifyScript::New(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  CHECK(args.IsConstructCall());
  ContextifyScript* contextify_script = new ContextifyScript(env, args.This());
}

void ContextifyScript::RunInContext(const FunctionCallbackInfo<Value>& args) {
  ContextifyScript* wrapped_script;
  ASSIGN_OR_RETURN_UNWRAP(&wrapped_script, args.Holder());
  CHECK_EQ(args.Length(), 4);
  CHECK(args[0]->IsObject());
  Local<Object> sandbox = args[0].As<Object>();
  // Get the context from the sandbox
  ContextifyContext* contextify_context = ContextifyContext::ContextFromContextifiedSandbox(Environment::GetCurrent(args), sandbox);
  CHECK_NOT_NULL(contextify_context);
  if (contextify_context->context().IsEmpty())
    return;
  Environment* env1 = contextify_context->env();
  TRACE_EVENT_NESTABLE_ASYNC_BEGIN0(TRACING_CATEGORY_NODE2(vm, script), "RunInContext", wrapped_script);
  CHECK(args[1]->IsNumber());
  int64_t timeout = args[1].As<Integer>()->Value();

  CHECK(args[2]->IsBoolean());
  bool display_errors = args[2]->IsTrue();

  CHECK(args[3]->IsBoolean());
  bool break_on_sigint = args[3]->IsTrue();

  wrapped_script->EvalMachine(env1,timeout,display_errors,break_on_sigint,args);

}

//register code snippet
{
  Environment* env = Environment::GetCurrent(context);
  Local<String> class_name = FIXED_ONE_BYTE_STRING(env->isolate(), "ContextifyScript");
  Local<FunctionTemplate> script_tmpl = env->NewFunctionTemplate(New);
  script_tmpl->InstanceTemplate()->SetInternalFieldCount(1);
  script_tmpl->SetClassName(class_name);
  env->SetProtoMethod(script_tmpl, "runInContext", RunInContext);
  target->Set(class_name,script_tmpl->GetFunction(context).ToLocalChecked());
}
