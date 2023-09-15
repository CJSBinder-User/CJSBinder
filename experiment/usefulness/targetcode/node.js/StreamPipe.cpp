//node.js:stream_pipe.cc

void StreamPipe::New(const FunctionCallbackInfo<Value>& args) {
  CHECK(args.IsConstructCall());
  CHECK(args[0]->IsExternal());
  CHECK(args[1]->IsExternal());
  auto source = static_cast<StreamBase*>(args[0].As<External>()->Value());
  auto sink = static_cast<StreamBase*>(args[1].As<External>()->Value());

  new StreamPipe(source, sink, args.This());
}

void StreamPipe::Unpipe(const FunctionCallbackInfo<Value>& args) {
  StreamPipe* pipe;
  ASSIGN_OR_RETURN_UNWRAP(&pipe, args.Holder());
  pipe->Unpipe();
}

{
  //register code snippet
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> pipe = env->NewFunctionTemplate(StreamPipe::New);
  Local<String> stream_pipe_string =FIXED_ONE_BYTE_STRING(env->isolate(), "StreamPipe");
  env->SetProtoMethod(pipe, "unpipe", StreamPipe::Unpipe);
  pipe->Inherit(AsyncWrap::GetConstructorTemplate(env));
  pipe->SetClassName(stream_pipe_string);
  pipe->InstanceTemplate()->SetInternalFieldCount(1);
  target->Set(context, stream_pipe_string,pipe->GetFunction(context).ToLocalChecked())
}