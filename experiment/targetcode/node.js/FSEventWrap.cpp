//node.js:fs_event_wrap.cc
void glue(){
      Environment* env = Environment::GetCurrent(context);

  auto fsevent_string = FIXED_ONE_BYTE_STRING(env->isolate(), "FSEvent");
  Local<FunctionTemplate> t = env->NewFunctionTemplate(New);
  t->InstanceTemplate()->SetInternalFieldCount(1);
  t->SetClassName(fsevent_string);

  t->Inherit(AsyncWrap::GetConstructorTemplate(env));
  env->SetProtoMethod(t, "start", Start);
  env->SetProtoMethod(t, "close", Close);

  Local<FunctionTemplate> get_initialized_templ =
      FunctionTemplate::New(env->isolate(),
                            GetInitialized,
                            env->as_external(),
                            Signature::New(env->isolate(), t));

  t->PrototypeTemplate()->SetAccessorProperty(
      FIXED_ONE_BYTE_STRING(env->isolate(), "initialized"),
      get_initialized_templ,
      Local<FunctionTemplate>(),
      static_cast<PropertyAttribute>(ReadOnly | DontDelete | v8::DontEnum));

  target->Set(fsevent_string, t->GetFunction(context).ToLocalChecked());
}
void FSEventWrap::New(const FunctionCallbackInfo<Value>& args) {
  CHECK(args.IsConstructCall());
  Environment* env = Environment::GetCurrent(args);
  new FSEventWrap(env, args.This());
}
void FSEventWrap::GetInitialized(const FunctionCallbackInfo<Value>& args) {
  FSEventWrap* wrap = Unwrap<FSEventWrap>(args.This());
  CHECK_NOT_NULL(wrap);
  args.GetReturnValue().Set(!wrap->IsHandleClosing());
}
void FSEventWrap::Start(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);

  FSEventWrap* wrap = Unwrap<FSEventWrap>(args.This());
  CHECK_NOT_NULL(wrap);
  CHECK(wrap->IsHandleClosing());  // Check that Start() has not been called.

  const int argc = args.Length();
  CHECK_GE(argc, 4);

  BufferValue path(env->isolate(), args[0]);
  CHECK_NOT_NULL(*path);

  unsigned int flags = 0;
  if (args[2]->IsTrue())
    flags |= UV_FS_EVENT_RECURSIVE;

  wrap->encoding_ = ParseEncoding(env->isolate(), args[3], kDefaultEncoding);

  int err = uv_fs_event_init(wrap->env()->event_loop(), &wrap->handle_);
  if (err != 0) {
    return args.GetReturnValue().Set(err);
  }

  err = uv_fs_event_start(&wrap->handle_, OnEvent, *path, flags);
  wrap->MarkAsInitialized();

  if (err != 0) {
    FSEventWrap::Close(args);
    return args.GetReturnValue().Set(err);
  }

  // Check for persistent argument
  if (!args[1]->IsTrue()) {
    uv_unref(reinterpret_cast<uv_handle_t*>(&wrap->handle_));
  }

  args.GetReturnValue().Set(err);
}
void InternalCallbackScope::Close() {
  if (closed_) return;
  closed_ = true;
  HandleScope handle_scope(env_->isolate());

  if (!env_->can_call_into_js()) return;
  if (failed_ && !env_->is_main_thread() && env_->is_stopping_worker()) {
    env_->async_hooks()->clear_async_id_stack();
  }

  if (pushed_ids_)
    env_->async_hooks()->pop_async_id(async_context_.async_id);

  if (failed_) return;

  if (async_context_.async_id != 0) {
    AsyncWrap::EmitAfter(env_, async_context_.async_id);
  }

  if (env_->makecallback_depth() > 1) {
    return;
  }
  class FSEventWrap: public HandleWrap {
 public:
  static void Initialize(Local<Object> target,
                         Local<Value> unused,
                         Local<Context> context);
  static void New(const FunctionCallbackInfo<Value>& args);
  static void Start(const FunctionCallbackInfo<Value>& args);
  static void GetInitialized(const FunctionCallbackInfo<Value>& args);

  SET_NO_MEMORY_INFO()
  SET_MEMORY_INFO_NAME(FSEventWrap)
  SET_SELF_SIZE(FSEventWrap)

 private:
  static const encoding kDefaultEncoding = UTF8;

  FSEventWrap(Environment* env, Local<Object> object);
  ~FSEventWrap() override;

  static void OnEvent(uv_fs_event_t* handle, const char* filename, int events,
    int status);

  uv_fs_event_t handle_;
  enum encoding encoding_ = kDefaultEncoding;
};