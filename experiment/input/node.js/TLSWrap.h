class Environment;
template<typename T>
class Local;
class Object;
class CertCb;
class uv_buf_t;
class TLSWrap{
public:
  TLSWrap(Environment* env,Local<Object> wrap);  
  void DestroySSL();
  void WaitForCertCb(CertCb cb, void* arg);
  void OnStreamRead(unsigned int,uv_buf_t);
};