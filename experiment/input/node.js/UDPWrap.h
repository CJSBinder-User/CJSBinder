class Environment;
template<typename T>
class Local;
class Object;
class UDPWrap{
 public:
  UDPWrap(Environment* env,Local<Object> wrap);
  int uv_ip4_bind(const char* ip,int port,int flags);
  int uv_ip6_bind(const char* ip,int port,int flags);
  int uv_udp_set_multicast_interface(const char* iface_cstr);
  int uv_udp_add_membership(const char* ip,const char* iface_cstr);
  int uv_udp_drop_membership(const char* ip,const char* iface_cstr);
  int uv_udp_recv_start();
  int uv_udp_recv_stop();
};
