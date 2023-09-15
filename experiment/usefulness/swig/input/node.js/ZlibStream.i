%module example

class Environment;
template<typename T>
class Local;
class Object;
namespace std{
  template<typename T>
  class vector;
};
class CompressionError;
class node_zlib_mode;
class ZlibStream{
 public:
  ZlibStream(Environment* env,Local<Object> wrap,node_zlib_mode);
  CompressionError Init(int level, int window_bits, int mem_level, int strategy,std::vector<unsigned char>&& dictionary);
  CompressionError ResetStream();
  CompressionError SetParams(int level, int strategy);
};