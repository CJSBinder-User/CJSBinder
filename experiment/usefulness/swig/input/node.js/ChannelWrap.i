%module example
struct Environment;
template<typename T>
class Local;
struct Object;

class ChannelWrap {
public:
  ChannelWrap(Environment* env, Local<Object> object,int timeout,int tries);
  void cares_channel();

};