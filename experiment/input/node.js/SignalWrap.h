class Environment;
template<typename T>
class Local;
class Object;
class OnSignal;
class SignalWrap{
public:
    SignalWrap(Environment* env,Local<Object> wrap);
    int uv_signal_stop();
    int uv_signal_start(OnSignal,int signum);
};