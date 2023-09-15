%module example

class Environment;
class BIOPointer;
template<typename T>
class MaybeLocal;
class Value;
class BIO;
class X509Certificate{
public:
    MaybeLocal<Value> GetSubject(Environment* env,const BIOPointer& bio);
    MaybeLocal<Value> GetIssuerString(Environment* env,const BIOPointer& bio);
    MaybeLocal<Value> GetSubjectAltNameString(Environment* env,const BIOPointer& bio);
    MaybeLocal<Value> GetInfoAccessString(Environment* env,const BIOPointer& bio);
    MaybeLocal<Value> GetValidFrom(Environment* env,const BIOPointer& bio);
    MaybeLocal<Value> GetValidTo(Environment* env,const BIOPointer& bio);
    MaybeLocal<Value> GetFingerprintDigest(Environment* env);
    MaybeLocal<Value> GetKeyUsage(Environment* env,const BIOPointer& bio);
    MaybeLocal<Value> GetSerialNumber(Environment* env,const BIOPointer& bio);
    MaybeLocal<Value> GetRawDERCertificate(Environment* env,const BIOPointer& bio);
    void PEM_write_bio_X509(BIO*);
    int X509_check_ca();
    void X509_check_host(const char *chk, unsigned int flags,unsigned int chklen);
    void X509_check_email(const char *chk, unsigned int flags,unsigned int chklen);
    void X509_check_ip_asc(const char *chk, unsigned int flags,unsigned int chklen);

};