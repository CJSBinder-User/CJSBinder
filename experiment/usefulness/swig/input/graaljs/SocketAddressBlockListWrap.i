%module example
class SocketAddress;
template<typename T>
class MaybeLocal;
class Array;
class SocketAddressBlockListWrap{
public:
  void AddSocketAddressRange(SocketAddress* start,SocketAddress* end);
  void AddSocketAddressMask(SocketAddress* address,int prefix);
  void AddSocketAddress(SocketAddress* address,int prefix);
  bool Apply(SocketAddress* address);
  MaybeLocal<Array> ListRules();
};