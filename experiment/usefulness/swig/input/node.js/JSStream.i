%module example
class Environment;
template<typename T>
class Local;
class Object;
class uv_buf_t;
class JSStream{
 public:
  JSStream(Environment* env,Local<Object> wrap);
  void EmitRead(unsigned int nread,const uv_buf_t& buf);
};