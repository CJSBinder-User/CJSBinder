template<typename T>
class Local;
template<typename T>
class Maybe;
template<typename T>
class MaybeLocal;
class Value;
class Status;
class Environment;
class Object;
class Context;
class ModuleWrap {
 public:
  ModuleWrap(Environment* env,Local<Object> wrap);
  Status GetStatus();
  Local<Value> GetException();
  Local<Value> GetModuleNamespace();
  Maybe<bool> InstantiateModule(Local<Context>);
  MaybeLocal<Value> Evaluate(Local<Context>);
  int GetModuleRequestsLength();
};