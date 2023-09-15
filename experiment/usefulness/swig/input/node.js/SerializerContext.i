%module example
template<typename T>
class Local;
template<typename T>
class Maybe;
template<typename T>
class MaybeLocal;
class Value;
class Object;
class Environment;
class ArrayBuffer;
class Context;
namespace std{
    template<typename A,typename B>
    class pair;
};
class SerializerContext {
 public:
SerializerContext(Environment* env,Local<Object> wrap);
void WriteHeader();
Maybe<bool> WriteValue(Local<Context> context,Local<Value> value);
void SetTreatArrayBufferViewsAsHostObjects(bool mode);
std::pair<unsigned char*, unsigned int> Release();
void TransferArrayBuffer(unsigned int transfer_id, Local<ArrayBuffer> array_buffer);
void WriteUint32(unsigned int value);
void WriteUint64(unsigned long long value);
void WriteDouble(double value);
void WriteRawBytes(const void* source, unsigned int length);
};