class Environment;
template<typename T>
class Local;
class Value;
class MessagePort{
 public:
  void Start();
  void Stop();
  void OnMessage();
  void PostMessage(Environment*,Local<Value>,Local<Value>);
};