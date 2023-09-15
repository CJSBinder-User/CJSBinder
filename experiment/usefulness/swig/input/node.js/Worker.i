%module example
namespace std{
  class string;
}
class Environment;
template<typename T>
class Local;
class Object;
class Worker {
public:
  Worker(Environment* env,Local<Object> wrap,std::string);
  void uvref();
  void JoinThread();
  void Unref();
};