template<typename T>
class Local;
template<typename T>
class FunctionCallbackInfo;
class Environment;
class Value;
class Object;
class ContextifyScript{
 public:
  ContextifyScript(Environment* env, Local<Object> object);
  bool EvalMachine(Environment* env,long long timeout,bool display_errors,bool break_on_sigint,
                          const FunctionCallbackInfo<Value>& args);
};
