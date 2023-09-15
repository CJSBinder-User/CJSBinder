void HistogramBase_Count_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    long long cres = (*ptr)->Count();
    Environment* env = Environment::GetCurrent(args);
    Local<Value> jsres = BigInt::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Min_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    long long cres = (*ptr)->Min();
    Environment* env = Environment::GetCurrent(args);
    Local<Value> jsres = BigInt::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Max_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    long long cres = (*ptr)->Max();
    Environment* env = Environment::GetCurrent(args);
    Local<Value> jsres = BigInt::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Mean_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    double cres = (*ptr)->Mean();
    Environment* env = Environment::GetCurrent(args);
    Local<Value> jsres = Number::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Exceeds_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    long long cres = (*ptr)->Exceeds();
    Environment* env = Environment::GetCurrent(args);
    Local<Value> jsres = BigInt::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Stddev_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    double cres = (*ptr)->Stddev();
    Environment* env = Environment::GetCurrent(args);
    Local<Value> jsres = Number::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Percentile_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsNumber());
    double carg0 = args[0].As<Number>()->Value();
    long long cres = (*ptr)->Percentile(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Value> jsres = BigInt::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Reset_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    (*ptr)->Reset();
}
void HistogramBase_RecordDelta_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    (*ptr)->RecordDelta();
}
void HistogramBase_Record_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsBigInt());
    bool lossless0;
    long long carg0 = args[0].As<BigInt>()->Int64Value(&lossless0);
    (*ptr)->Record(carg0);
}
void HistogramBase_Add_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    CHECK(GetConstructorTemplate(env)->HasInstance(args[0]));
    HistogramBase* carg0;
    ASSIGN_OR_RETURN_UNWRAP(&other, args[0]);
    double cres = (*ptr)->Add(carg0);
    Environment* env = Environment::GetCurrent(args);
    Local<Value> jsres = Number::New(env->isolate(), cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    Local<FunctionTemplate> tmpl;
    if (tmpl.IsEmpty()) {
       tmpl = FunctionTemplate::New(env->isolate());
       tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
       tmpl->SetClassName(FIXED_ONE_BYTE_STRING(env->isolate(), HistogramBase));
       env->SetProtoMethod(tmpl, "Count", HistogramBase_Count_glue);
       env->SetProtoMethod(tmpl, "Min", HistogramBase_Min_glue);
       env->SetProtoMethod(tmpl, "Max", HistogramBase_Max_glue);
       env->SetProtoMethod(tmpl, "Mean", HistogramBase_Mean_glue);
       env->SetProtoMethod(tmpl, "Exceeds", HistogramBase_Exceeds_glue);
       env->SetProtoMethod(tmpl, "Stddev", HistogramBase_Stddev_glue);
       env->SetProtoMethod(tmpl, "Percentile", HistogramBase_Percentile_glue);
       env->SetProtoMethod(tmpl, "Reset", HistogramBase_Reset_glue);
       env->SetProtoMethod(tmpl, "RecordDelta", HistogramBase_RecordDelta_glue);
       env->SetProtoMethod(tmpl, "Record", HistogramBase_Record_glue);
       env->SetProtoMethod(tmpl, "Add", HistogramBase_Add_glue);
    }
    return tmpl;
}
