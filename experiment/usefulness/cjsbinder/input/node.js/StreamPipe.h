class StreamBase;
template<typename T>
class Local;
class Object;

class StreamPipe{
 public:
  StreamPipe(StreamBase* source, StreamBase* sink, Local<Object> obj);
  
  void Unpipe();
};