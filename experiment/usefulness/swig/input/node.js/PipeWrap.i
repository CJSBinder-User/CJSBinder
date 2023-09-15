%module example
class Environment;
template<typename T>
class Local;
class Object;
class PipeWrap{
public:
PipeWrap(Environment* env,Local<Object> wrap,int);
int uv_pipe_bind(const char*);
void uv_pipe_pending_instances(int count);
int uv_pipe_chmod(int flags); 
int uv_pipe_open(int file);
int uv_listen(int backlog);
};