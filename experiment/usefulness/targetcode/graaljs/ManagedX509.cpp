//graaljs:crypto_x509.cc

void X509Certificate::Subject(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  BIOPointer bio(BIO_new(BIO_s_mem()));
  CHECK(bio);
  Local<Value> ret;
  if (cert->GetSubject(env, bio).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::Issuer(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  BIOPointer bio(BIO_new(BIO_s_mem()));
  CHECK(bio);
  Local<Value> ret;
  if (cert->GetIssuerString(env, bio).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::SubjectAltName(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  BIOPointer bio(BIO_new(BIO_s_mem()));
  CHECK(bio);
  Local<Value> ret;
  if (cert->GetSubjectAltNameString(env, bio).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::InfoAccess(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  BIOPointer bio(BIO_new(BIO_s_mem()));
  CHECK(bio);
  Local<Value> ret;
  if (cert->GetInfoAccessString(env, bio).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::ValidFrom(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  BIOPointer bio(BIO_new(BIO_s_mem()));
  CHECK(bio);
  Local<Value> ret;
  if (cert->GetValidFrom(env,bio).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::ValidTo(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  BIOPointer bio(BIO_new(BIO_s_mem()));
  CHECK(bio);
  Local<Value> ret;
  if (cert->GetValidTo(env,bio).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}
void X509Certificate::Fingerprint(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  Local<Value> ret;
  if (cert->GetFingerprintDigest(env, EVP_sha1()).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::KeyUsage(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  Local<Value> ret;
  if (cert->GetKeyUsage(env).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::SerialNumber(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  Local<Value> ret;
  if (cert->GetSerialNumber(env).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::Raw(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  Local<Value> ret;
  if (cert->GetRawDERCertificate(env).ToLocal(&ret))
    args.GetReturnValue().Set(ret);
}

void X509Certificate::Pem(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  BIOPointer bio(BIO_new(BIO_s_mem()));
  CHECK(bio);
  auto b = bio.get();
  if (cert->PEM_write_bio_X509(b))
    args.GetReturnValue().Set(ToV8Value(env, bio));
}

void X509Certificate::CheckCA(const FunctionCallbackInfo<Value>& args) {
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  int ret = cert->X509_check_ca();
  args.GetReturnValue().Set(ret == 1);
}

void X509Certificate::CheckHost(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  CHECK(args[0]->IsString());  // name
  CHECK(args[1]->IsUint32());  // flags
  Utf8Value nm(env->isolate(), args[0]);
  uint32_t flags = args[1].As<Uint32>()->Value();
  const char* name = *nm;
  char* peername;
  switch (cert->X509_check_host(name,flags,nm.length(),&peername)) {
    //unrelated logic
  }
}

void X509Certificate::CheckEmail(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  CHECK(args[0]->IsString());  
  CHECK(args[1]->IsUint32());  
  Utf8Value nm(env->isolate(), args[0]);
  const char name = *nm;
  uint32_t flags = args[1].As<Uint32>()->Value();
  switch (cert->X509_check_email(name,flags,nm.length())) {
    //unrelated logic
  }
}

void X509Certificate::CheckIP(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  X509Certificate* cert;
  ASSIGN_OR_RETURN_UNWRAP(&cert, args.Holder());
  CHECK(args[0]->IsString());  
  CHECK(args[1]->IsUint32());  
  Utf8Value nm(env->isolate(), args[0]);
  const char* name = *nm;
  uint32_t flags = args[1].As<Uint32>()->Value();
  unsigned int l = nm.length();
  cert->X509_check_ip_asc(name, flags,l);
}

{
  //register code snippet
  Local<FunctionTemplate> tmpl = env->x509_constructor_template();
  if (tmpl.IsEmpty()) {
    tmpl = FunctionTemplate::New(env->isolate());
    tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
    tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), "X509Certificate"));
    env->SetProtoMethod(tmpl, "subject", Subject);
    env->SetProtoMethod(tmpl, "subjectAltName", SubjectAltName);
    env->SetProtoMethod(tmpl, "infoAccess", InfoAccess);
    env->SetProtoMethod(tmpl, "issuer", Issuer);
    env->SetProtoMethod(tmpl, "validTo", ValidTo);
    env->SetProtoMethod(tmpl, "validFrom", ValidFrom);
    env->SetProtoMethod(tmpl, "fingerprint", Fingerprint);
    env->SetProtoMethod(tmpl, "keyUsage", KeyUsage);
    env->SetProtoMethod(tmpl, "serialNumber", SerialNumber);
    env->SetProtoMethod(tmpl, "pem", Pem);
    env->SetProtoMethod(tmpl, "raw", Raw);
    env->SetProtoMethod(tmpl, "checkCA", CheckCA);
    env->SetProtoMethod(tmpl, "checkHost", CheckHost);
    env->SetProtoMethod(tmpl, "checkEmail", CheckEmail);
    env->SetProtoMethod(tmpl, "checkIP", CheckIP);
    env->set_x509_constructor_template(tmpl);
  }
  return tmpl;

}