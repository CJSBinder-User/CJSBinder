struct Promise;
template<typename T>
class MaybeLocal;
template<typename T>
class Local;
class Environment;
class Value;
class FileHandle{
 public:
  FileHandle(Environment* env,int fd,Local<Value> buffer);
  MaybeLocal<Promise> ClosePromise();
  void AfterClose();
};



