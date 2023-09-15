//graaljs:crypto_context.cc

void SecureContext::SetKey(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  BIOPointer bio(LoadBIO(env, args[0]));
  ByteSource passphrase;
  if (args[1]->IsString()){
      Local<String> str = args[1].As<String>();
      passphrase = ByteSource::FromString(env, str);
  }
  const ByteSource* pass_ptr = &passphrase;
  EVPKeyPointer key(PEM_read_bio_PrivateKey(bio.get(), nullptr,PasswordCallback,&pass_ptr));
  if (!sc->SSL_CTX_use_PrivateKey(key.get())){
    //exception handle
  }
}
void SecureContext::SetSigalgs(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  Environment* env = sc->env();
  CHECK(args[0]->IsString());

  const Utf8Value sigalgs(env->isolate(), args[0]);
  char* sig = *sigalgs;  
  if (!sc->SSL_CTX_set1_sigalgs_list(sig)){
      //exception handle
  }
}

void SecureContext::SetCert(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  BIOPointer bio(LoadBIO(env, args[0]));
  if (!bio) return;
  auto b = std::move(bio); 
  if (!sc->SSL_CTX_use_certificate_chain(b)) {
      //exception handle
  }
}
BIOP:  BIOPointer bio(LoadBIO(env, args[0]));
  if (!bio) return;
void SecureContext::SetSessionIdContext(
    const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  Environment* env = sc->env();
  CHECK(args[0]->IsString());
  const Utf8Value sessionIdContext(env->isolate(), args[0]);
  char* session = sessionIdContext

  if (sc->SSL_CTX_set_session_id_context(session) == 1){
      //exception handle
  }
}

void SecureContext::Close(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  sc->Reset();
}

void SecureContext::SetCipherSuites(const FunctionCallbackInfo<Value>& args) {
  // BoringSSL doesn't allow API config of TLS1.3 cipher suites.
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  Environment* env = sc->env();
  CHECK(args[0]->IsString());
  const Utf8Value ciphers(env->isolate(), args[0]);
  char* ci = *ciphers;
  if (!sc->SSL_CTX_set_ciphersuites(ci)){
      //exception handle
  }
}

void SecureContext::SetCiphers(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  Environment* env = sc->env();
  CHECK(args[0]->IsString());
  const Utf8Value ciphers(env->isolate(), args[0]);
  char* ci = *ciphers;  
  if (!sc->SSL_CTX_set_cipher_list(ci)){
      //exception handle
  }
}

void SecureContext::SetECDHCurve(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  Environment* env = sc->env();
  CHECK(args[0]->IsString());
  const Utf8Value curve(env->isolate(), args[0]);
  char* cur = *curve;  
  if (strcmp(*curve, "auto") != 0 && !sc->SSL_CTX_set1_curves_list(cur)){
      //exception handle
  }
}

void SecureContext::SetMinProto(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  CHECK(args[0]->IsInt32());
  int version = args[0].As<Int32>()->Value();
  CHECK(sc->SSL_CTX_set_min_proto_version(version));
}

void SecureContext::SetMaxProto(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  CHECK(args[0]->IsInt32());
  int version = args[0].As<Int32>()->Value();
  CHECK(SSL_CTX_set_max_proto_version(sc->ctx_.get(), version));
}
void SecureContext::GetMinProto(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  long version = sc->SSL_CTX_get_min_proto_version();
  unsigned int v = static_cast<uint32_t>(version)
  args.GetReturnValue().Set(v);
}

void SecureContext::GetMaxProto(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  long version = sc->SSL_CTX_get_max_proto_version();
  unsigned int v = static_cast<uint32_t>(version)
  args.GetReturnValue().Set(v);
}

void SecureContext::SetOptions(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  CHECK(args[0]->IsNumber());
  int64_t val = args[0]->IntegerValue(env->context()).FromMaybe(0);
  sc->SSL_CTX_set_options(static_cast<long>(val));
}

void SecureContext::AddCRL(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  X509_STORE* cert_store = sc->SSL_CTX_get_cert_store(env);
  //computation
}

void SecureContext::SetSessionTimeout(const FunctionCallbackInfo<Value>& args) {
  SecureContext* sc;
  ASSIGN_OR_RETURN_UNWRAP(&sc, args.Holder());
  CHECK(args[0]->IsInt32());
  int32_t sessionTimeout = args[0].As<Int32>()->Value();
  SSL_CTX_set_timeout(sc->ctx_.get(), sessionTimeout);
}

{
  //register code snippet
  Local<FunctionTemplate> tmpl = env->secure_context_constructor_template();
  if (tmpl.IsEmpty()) {
    tmpl = env->NewFunctionTemplate(New);
    tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
    tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), "SecureContext"));

    env->SetProtoMethod(tmpl, "setKey", SetKey);
    env->SetProtoMethod(tmpl, "setCert", SetCert);
    env->SetProtoMethod(tmpl, "addCRL", AddCRL);
    env->SetProtoMethod(tmpl, "setCipherSuites", SetCipherSuites);
    env->SetProtoMethod(tmpl, "setCiphers", SetCiphers);
    env->SetProtoMethod(tmpl, "setSigalgs", SetSigalgs);
    env->SetProtoMethod(tmpl, "setECDHCurve", SetECDHCurve);
    env->SetProtoMethod(tmpl, "setMaxProto", SetMaxProto);
    env->SetProtoMethod(tmpl, "setMinProto", SetMinProto);
    env->SetProtoMethod(tmpl, "getMaxProto", GetMaxProto);
    env->SetProtoMethod(tmpl, "getMinProto", GetMinProto);
    env->SetProtoMethod(tmpl, "setOptions", SetOptions);
    env->SetProtoMethod(tmpl, "setSessionIdContext", SetSessionIdContext);
    env->SetProtoMethod(tmpl, "setSessionTimeout", SetSessionTimeout);
    env->SetProtoMethod(tmpl, "close", Close);
  }
  return tmpl;
}