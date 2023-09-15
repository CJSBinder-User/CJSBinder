class Environment;
template<typename T>
class Local;
class Object;
class CallBack;
class StatWatcher{
 public:  
  StatWatcher(Environment* env,Local<Object> wrap);
  int uv_fs_poll_start(CallBack,const char* path,unsigned int interval);
};