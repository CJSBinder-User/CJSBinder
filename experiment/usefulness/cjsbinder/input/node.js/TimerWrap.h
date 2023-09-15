class Environment;
template<typename T>
class Local;
class Object;
class OnTimeout;
class TimerWrap {
 public:
  TimerWrap(Environment* env,Local<Object> wrap);
  int uv_timer_stop();
  int uv_timer_start(OnTimeout,long long timeoutt);
};