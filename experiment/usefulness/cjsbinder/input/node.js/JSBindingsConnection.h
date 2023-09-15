namespace std{
template<typename T>
class unique_ptr;
}
class StringBuffer;
class Environment;
template<typename T>
class Local;
class Object;
class Function;
class JSBindingsConnection{
public:
  JSBindingsConnection(Environment* env,Local<Object> wrap,Local<Function> callback);
  void Disconnect();
  void Dispatch(std::unique_ptr<StringBuffer>);
};
