void HistogramBase_Count_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    long long cres = ptr->Count();
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Min_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    long long cres = ptr->Min();
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Max_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    long long cres = ptr->Max();
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Mean_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    double cres = ptr->Mean();
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Exceeds_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    long long cres = ptr->Exceeds();
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Stddev_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    double cres = ptr->Stddev();
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Percentile_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsNumber());
    double carg0 = args[0].As<Number>()->Value();
    long long cres = ptr->Percentile(carg0);
    args.GetReturnValue().Set(jsres);
}
void HistogramBase_Reset_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Reset();
}
void HistogramBase_RecordDelta_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    CHECK(args[0]->IsBigInt());
    long long carg0 = args[0].As<Integer>()->Value();
    ptr->RecordDelta(carg0);
}
void HistogramBase_Record_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    ptr->Record();
}
void HistogramBase_Add_glue(const FunctionCallbackInfo<Value>& args)
{
    HistogramBase* ptr;
    ASSIGN_OR_RETURN_UNWRAP(&ptr, args.Holder());
    Environment* env = Environment::GetCurrent(args);
    CHECK(GetConstructorTemplate(env)->HasInstance(args[0]));
    HistogramBase* carg0;
    ASSIGN_OR_RETURN_UNWRAP(&other, args[0]);
    double cres = ptr->Add(carg0);
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
