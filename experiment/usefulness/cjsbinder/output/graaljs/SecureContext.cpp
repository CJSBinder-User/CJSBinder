void SecureContext_SSL_CTX_use_PrivateKey_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->SSL_CTX_use_PrivateKey();
}
void SecureContext_SSL_CTX_set1_sigalgs_list_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = ptr->env();
    const Utf8Value str0(env->isolate(), args[0]);
    char* carg0 = str0;
    ptr->SSL_CTX_set1_sigalgs_list(carg0);
}
void SecureContext_SSL_CTX_use_certificate_chain_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    
    Environment* env = Environment::GetCurrent(args);
    BIOPointer bio0(LoadBIO(env, args[0]));
    if (!bio0) return;
    auto carg0 = std::move(bio0);
    ptr->SSL_CTX_use_certificate_chain(carg0);
}
void SecureContext_SSL_CTX_set_session_id_context_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = ptr->env();
    const Utf8Value str0(env->isolate(), args[0]);
    char* carg0 = str0;
    ptr->SSL_CTX_set_session_id_context(carg0);
}
void SecureContext_Reset_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Reset();
}
void SecureContext_SSL_CTX_set_ciphersuites_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = ptr->env();
    const Utf8Value str0(env->isolate(), args[0]);
    char* carg0 = str0;
    ptr->SSL_CTX_set_ciphersuites(carg0);
}
void SecureContext_SSL_CTX_set_cipher_list_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = ptr->env();
    const Utf8Value str0(env->isolate(), args[0]);
    char* carg0 = str0;
    ptr->SSL_CTX_set_cipher_list(carg0);
}
void SecureContext_SSL_CTX_set1_curves_list_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsString());
    Environment* env = ptr->env();
    const Utf8Value str0(env->isolate(), args[0]);
    char* carg0 = str0;
    ptr->SSL_CTX_set1_curves_list(carg0);
}
void SecureContext_SSL_CTX_set_min_proto_version_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    ptr->SSL_CTX_set_min_proto_version(carg0);
}
void SecureContext_SSL_CTX_set_max_proto_version_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    ptr->SSL_CTX_set_max_proto_version(carg0);
}
void SecureContext_SSL_CTX_get_min_proto_version_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->SSL_CTX_get_min_proto_version();
    Local<Int32> jsres = Int32::New(args.GetIsolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void SecureContext_SSL_CTX_get_max_proto_version_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    int cres = ptr->SSL_CTX_get_max_proto_version();
    Local<Int32> jsres = Int32::New(args.GetIsolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void SecureContext_SSL_CTX_set_options_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    ptr->SSL_CTX_set_options(carg0);
}
void SecureContext_SSL_CTX_get_cert_store_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    ptr->SSL_CTX_get_cert_store(env);
}
void SecureContext_SSL_CTX_set_timeout_glue(const FunctionCallbackInfo<Value>& args)
{
    SecureContext* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsInt32());
    int carg0 = args[0].As<Int32>()->Value();
    ptr->SSL_CTX_set_timeout(carg0);
}
{
    //register code snippet
    Local<FunctionTemplate> tmpl;
    if (tmpl.IsEmpty()) {
       tmpl = FunctionTemplate::New(env->isolate());
       tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
       tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), SecureContext));
       env->SetProtoMethod(tmpl, "SSL_CTX_use_PrivateKey", SecureContext_SSL_CTX_use_PrivateKey_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set1_sigalgs_list", SecureContext_SSL_CTX_set1_sigalgs_list_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_use_certificate_chain", SecureContext_SSL_CTX_use_certificate_chain_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set_session_id_context", SecureContext_SSL_CTX_set_session_id_context_glue);
       env->SetProtoMethod(tmpl, "Reset", SecureContext_Reset_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set_ciphersuites", SecureContext_SSL_CTX_set_ciphersuites_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set_cipher_list", SecureContext_SSL_CTX_set_cipher_list_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set1_curves_list", SecureContext_SSL_CTX_set1_curves_list_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set_min_proto_version", SecureContext_SSL_CTX_set_min_proto_version_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set_max_proto_version", SecureContext_SSL_CTX_set_max_proto_version_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_get_min_proto_version", SecureContext_SSL_CTX_get_min_proto_version_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_get_max_proto_version", SecureContext_SSL_CTX_get_max_proto_version_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set_options", SecureContext_SSL_CTX_set_options_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_get_cert_store", SecureContext_SSL_CTX_get_cert_store_glue);
       env->SetProtoMethod(tmpl, "SSL_CTX_set_timeout", SecureContext_SSL_CTX_set_timeout_glue);
    }
    return tmpl;
}
