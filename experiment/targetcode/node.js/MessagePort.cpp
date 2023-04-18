//node.js:node_messaging.cc

void MessagePort::PostMessage(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  MessagePort* port;
  ASSIGN_OR_RETURN_UNWRAP(&port, args.This());
  port->PostMessage(env, args[0], args[1]);
}
void MessagePort::Start(const FunctionCallbackInfo<Value>& args) {
  MessagePort* port;
  ASSIGN_OR_RETURN_UNWRAP(&port, args.This());
  port->Start();
}
void MessagePort::Stop(const FunctionCallbackInfo<Value>& args) {
  MessagePort* port;
  ASSIGN_OR_RETURN_UNWRAP(&port, args.This());
  port->Stop();
}
void MessagePort::Drain(const FunctionCallbackInfo<Value>& args) {
  MessagePort* port;
  ASSIGN_OR_RETURN_UNWRAP(&port, args.This());
  port->OnMessage();
}

//register code snippet
{
    Environment* env = Environment::GetCurrent(context);
    Local<FunctionTemplate> m = env->NewFunctionTemplate(MessagePort::New);
    m->SetClassName(env->message_port_constructor_string());
    m->InstanceTemplate()->SetInternalFieldCount(1);
    env->SetProtoMethod(m, "postMessage", MessagePort::PostMessage);
    env->SetProtoMethod(m, "start", MessagePort::Start);
    env->SetProtoMethod(m, "stop", MessagePort::Stop);
    env->SetProtoMethod(m, "drain", MessagePort::Drain);
    env->set_message_port_constructor_template(m);
}