%module example
class Environment;
template<typename T>
class Local;
class Object;
class ProcessWrap{
public:
ProcessWrap(Environment* env,Local<Object> wrap);
int uv_process_kill(int signum);
};