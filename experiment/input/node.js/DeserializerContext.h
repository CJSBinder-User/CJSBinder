template<typename T>
class Local;
template<typename T>
class MaybeLocal;
template<typename T>
class Maybe;
class Environment;
class Uint8Array;
class Object;
class Context;
class ArrayBuffer;
class SharedArrayBuffer;
class Value;
class DeserializerContext {
public:
  DeserializerContext(Environment* env,Local<Object> wrap,Local<Value> buffer);
  MaybeLocal<Value> ReadValue(Local<Context> context);
  Maybe<bool> ReadHeader(Local<Context> context);
  bool ReadDouble();
  bool ReadUint32();
  bool ReadUint64();
  bool ReadRawBytes(int);
  unsigned int GetWireFormatVersion();
  void TransferArrayBuffer(unsigned int transfer_id,Local<ArrayBuffer> array_buffer);
  void TransferSharedArrayBuffer(unsigned int id, Local<SharedArrayBuffer> shared_array_buffer);
};