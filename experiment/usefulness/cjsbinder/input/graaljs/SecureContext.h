class X509Pointer;
class BIOPointer;
class Environment;
class SecureContext{
public:
void SSL_CTX_use_PrivateKey();
void SSL_CTX_set1_sigalgs_list(const char*);
void SSL_CTX_use_certificate_chain(BIOPointer&&);
void SSL_CTX_set_session_id_context(const char*);
void Reset();
void SSL_CTX_set_ciphersuites(const char*);
void SSL_CTX_set_cipher_list(const char*);
void SSL_CTX_set1_curves_list(const char*);
void SSL_CTX_set_min_proto_version(int);
void SSL_CTX_set_max_proto_version(int);
int SSL_CTX_get_min_proto_version();
int SSL_CTX_get_max_proto_version();
void SSL_CTX_set_options(int);
void SSL_CTX_get_cert_store(Environment*);
void SSL_CTX_set_timeout(int);
};