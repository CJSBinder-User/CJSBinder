%module example
class Environment;
template<typename T>
class Local;
class Object;
class TCPWrap{
public:
  TCPWrap(Environment* env,Local<Object> wrap,int);  
  int uv_listen(int backlog);
  int uv_tcp_open(int sock);
  int uv_ip4_addr(const char* ip,int port);
  int uv_ip6_addr(const char* ip,int port);
  int uv_tcp_nodelay(int on);
  int uv_tcp_keepalive(int on, unsigned int delay);
  int uv_tcp_simultaneous_accepts(int on, unsigned int delay);
};