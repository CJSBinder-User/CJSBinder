class Environment;
template<typename T>
class Local;
class Object;
class CertCb;
class uv_buf_t;
class Kind;
class StreamBase;
class SecureContext;
class TLSWrap{
public:
  TLSWrap(Environment* env,Kind kind,StreamBase* stream,SecureContext* sc);
  void DestroySSL();
  void WaitForCertCb(CertCb cb, void* arg);
  void OnStreamRead(unsigned int,uv_buf_t);
};