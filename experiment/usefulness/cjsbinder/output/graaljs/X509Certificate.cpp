void X509Certificate_GetSubject_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetSubject(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetIssuerString_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetIssuerString(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetSubjectAltNameString_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetSubjectAltNameString(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetInfoAccessString_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetInfoAccessString(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetValidFrom_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetValidFrom(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetValidTo_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetValidTo(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetFingerprintDigest_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    MaybeLocal<Value> cres = ptr->GetFingerprintDigest(env);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetKeyUsage_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetKeyUsage(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetSerialNumber_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetSerialNumber(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_GetRawDERCertificate_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    MaybeLocal<Value> cres = ptr->GetRawDERCertificate(env,bio);
    Local<Value> jsres;
    if (cres.ToLocal(jsres))
       args.GetReturnValue().Set(jsres);
}
void X509Certificate_PEM_write_bio_X509_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio(BIO_new(BIO_s_mem()));
    CHECK(bio);
    auto b = bio.get();
    ptr->PEM_write_bio_X509(b);
}
void X509Certificate_X509_check_ca_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->X509_check_ca();
    Local<Int32> jsres = Int32::New(args.GetIsolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void X509Certificate_X509_check_host_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = ptr->env();
    const Utf8Value str0(env->isolate(), args[0]);
    char* carg0 = str0;
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    CHECK(args[2]->IsUint32());
    unsigned int carg2 = args[2].As<Uint32>()->Value();
    ptr->X509_check_host(carg0,carg1,carg2);
}
void X509Certificate_X509_check_email_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = ptr->env();
    const Utf8Value str0(env->isolate(), args[0]);
    char* carg0 = str0;
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    CHECK(args[2]->IsUint32());
    unsigned int carg2 = args[2].As<Uint32>()->Value();
    ptr->X509_check_email(carg0,carg1,carg2);
}
void X509Certificate_X509_check_ip_asc_glue(const FunctionCallbackInfo<Value>& args)
{
    X509Certificate* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = ptr->env();
    const Utf8Value str0(env->isolate(), args[0]);
    char* carg0 = str0;
    CHECK(args[1]->IsUint32());
    unsigned int carg1 = args[1].As<Uint32>()->Value();
    CHECK(args[2]->IsUint32());
    unsigned int carg2 = args[2].As<Uint32>()->Value();
    ptr->X509_check_ip_asc(carg0,carg1,carg2);
}
{
    //register code snippet
    Local<FunctionTemplate> tmpl;
    if (tmpl.IsEmpty()) {
       tmpl = FunctionTemplate::New(env->isolate());
       tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
       tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), X509Certificate));
       env->SetProtoMethod(tmpl, "GetSubject", X509Certificate_GetSubject_glue);
       env->SetProtoMethod(tmpl, "GetIssuerString", X509Certificate_GetIssuerString_glue);
       env->SetProtoMethod(tmpl, "GetSubjectAltNameString", X509Certificate_GetSubjectAltNameString_glue);
       env->SetProtoMethod(tmpl, "GetInfoAccessString", X509Certificate_GetInfoAccessString_glue);
       env->SetProtoMethod(tmpl, "GetValidFrom", X509Certificate_GetValidFrom_glue);
       env->SetProtoMethod(tmpl, "GetValidTo", X509Certificate_GetValidTo_glue);
       env->SetProtoMethod(tmpl, "GetFingerprintDigest", X509Certificate_GetFingerprintDigest_glue);
       env->SetProtoMethod(tmpl, "GetKeyUsage", X509Certificate_GetKeyUsage_glue);
       env->SetProtoMethod(tmpl, "GetSerialNumber", X509Certificate_GetSerialNumber_glue);
       env->SetProtoMethod(tmpl, "GetRawDERCertificate", X509Certificate_GetRawDERCertificate_glue);
       env->SetProtoMethod(tmpl, "PEM_write_bio_X509", X509Certificate_PEM_write_bio_X509_glue);
       env->SetProtoMethod(tmpl, "X509_check_ca", X509Certificate_X509_check_ca_glue);
       env->SetProtoMethod(tmpl, "X509_check_host", X509Certificate_X509_check_host_glue);
       env->SetProtoMethod(tmpl, "X509_check_email", X509Certificate_X509_check_email_glue);
       env->SetProtoMethod(tmpl, "X509_check_ip_asc", X509Certificate_X509_check_ip_asc_glue);
    }
    return tmpl;
}
