%module example
class Environment;
template<typename T>
class MaybeLocal;
class Object;
class Environment;
class SocketAddressBase{
public:
    unsigned int flow_label();
    MaybeLocal<Object> ToJS(Environment*);
};