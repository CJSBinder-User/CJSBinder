%module example
template<typename T>
class Local;
class Value;
class HandleWrap{
 public:
  void uv_ref();
  void uv_unref();
  bool HasRef();
  void Close(Local<Value> close_callback);
};