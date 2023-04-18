template<typename T>
class BaseObjectPtr;
class Environment;
template<typename T>
class MaybeLocal;
class Value;
class Blob{
public:
    MaybeLocal<Value> GetArrayBuffer(Environment*);
    BaseObjectPtr<Blob> Slice(Environment* env, unsigned int start, unsigned int end);
};