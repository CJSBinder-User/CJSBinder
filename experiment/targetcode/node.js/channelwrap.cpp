//node.js:cares_wrap.cc

void ChannelWrap::New(const FunctionCallbackInfo<Value>& args) {
  CHECK(args.IsConstructCall());
  CHECK_EQ(args.Length(), 2);
  CHECK(args[0]->IsInt32());
  CHECK(args[1]->IsInt32());
  const int timeout = args[0].As<Int32>()->Value();
  const int tries = args[1].As<Int32>()->Value();
  Environment* env = Environment::GetCurrent(args);
  new ChannelWrap(env, args.This(), timeout, tries);
}
//96line
void Cancel(const FunctionCallbackInfo<Value>& args) {
  ChannelWrap* channel;
  ASSIGN_OR_RETURN_UNWRAP(&channel, args.Holder());
  ares_cancel(channel->cares_channel());
}

{
  Environment* env = Environment::GetCurrent(context);
  Local<FunctionTemplate> channel_wrap = env->NewFunctionTemplate(ChannelWrap::New);
  env->SetProtoMethod(channel_wrap, "cancel", Cancel);
  auto inst = channel_wrap->InstanceTemplate();
  inst->SetInternalFieldCount(1);
  Local<String> channelWrapString = FIXED_ONE_BYTE_STRING(env->isolate(), "ChannelWrap");
  channel_wrap->SetClassName(channelWrapString);
  Local<Function> f = channel_wrap->GetFunction(context).ToLocalChecked();
  target->Set(channelWrapString,f);//9line
}