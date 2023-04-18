//graaljs:Histogram.cc

void HistogramBase::GetCountBigInt(
    const v8::FunctionCallbackInfo<v8::Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  int64_t value = (*histogram)->Count();
  auto res = BigInt::NewFromUnsigned(env->isolate(),value);
  args.GetReturnValue().Set(res);
}

void HistogramBase::GetMinBigInt(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  int64_t value = (*histogram)->Min();
  auto res = BigInt::New(env->isolate(), value);
  args.GetReturnValue().Set(res);
}

void HistogramBase::GetMaxBigInt(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  int64_t value = (*histogram)->Max();
  auto res = BigInt::New(env->isolate(), value);
  args.GetReturnValue().Set(res);
}

void HistogramBase::GetMean(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  double value = (*histogram)->Mean();
  auto res = Number::New(args.GetIsolate(), value);
  args.GetReturnValue().Set();
}

void HistogramBase::GetExceedsBigInt(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  int64_t value = (*histogram)->Exceeds();
  auto res = BigInt::New(env->isolate(), value);
  args.GetReturnValue().Set(res);
}

void HistogramBase::GetStddev(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  double value = (*histogram)->Mean();
  auto res = Number::New(args.GetIsolate(), value);
  args.GetReturnValue().Set();
}

void HistogramBase::GetPercentileBigInt(
    const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  CHECK(args[0]->IsNumber());
  double percentile = args[0].As<Number>()->Value();
  int64_t value = (*histogram)->Percentile(percentile);
  auto ret = BigInt::New(env->isolate(), value);
  args.GetReturnValue().Set(ret);
}

void HistogramBase::DoReset(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  (*histogram)->Reset();
}

void HistogramBase::RecordDelta(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  (*histogram)->RecordDelta();
}

void HistogramBase::Record(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  CHECK_IMPLIES(!args[0]->IsNumber(), args[0]->IsBigInt());
  bool lossless = true;
  int64_t value = args[0]->IsBigInt() ? args[0].As<BigInt>()->Int64Value(&lossless): static_cast<int64_t>(args[0].As<Number>()->Value());
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  (*histogram)->Record(value);
}

void HistogramBase::Add(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  CHECK(GetConstructorTemplate(env)->HasInstance(args[0]));
  HistogramBase* other;
  ASSIGN_OR_RETURN_UNWRAP(&other, args[0]);
  auto his = *(other->histogram());
  double count = (*histogram)->Add(his);
  auto res = Number::New(args.GetIsolate(), value);
  args.GetReturnValue().Set(res);
}






void HistogramBase::GetCountBigInt(
    const v8::FunctionCallbackInfo<v8::Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  int64_t value = (*histogram)->Count();
  args.GetReturnValue().Set(value);
}

void HistogramBase::GetMinBigInt(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  int64_t value = (*histogram)->Min();
  args.GetReturnValue().Set(value);
}

void HistogramBase::GetMaxBigInt(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  int64_t value = (*histogram)->Max();
  args.GetReturnValue().Set(value);
}

void HistogramBase::GetMean(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  double value = (*histogram)->Mean();
  args.GetReturnValue().Set(value);
}

void HistogramBase::GetExceedsBigInt(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  int64_t value = (*histogram)->Exceeds();
  args.GetReturnValue().Set(value);
}

void HistogramBase::GetStddev(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  double value = (*histogram)->Mean();
  args.GetReturnValue().Set(value);
}

void HistogramBase::GetPercentileBigInt(
    const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  CHECK(args[0]->IsNumber());
  double percentile = args[0].As<Number>()->Value();
  int64_t value = (*histogram)->Percentile(percentile);
  args.GetReturnValue().Set(value);
}

void HistogramBase::DoReset(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  (*histogram)->Reset();
}

void HistogramBase::RecordDelta(const FunctionCallbackInfo<Value>& args) {
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  (*histogram)->RecordDelta();
}

void HistogramBase::Record(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  CHECK_IMPLIES(!args[0]->IsNumber(), args[0]->IsBigInt());
  bool lossless = true;
  int64_t value = args[0]->IsBigInt() ? args[0].As<BigInt>()->Int64Value(&lossless): static_cast<int64_t>(args[0].As<Number>()->Value());
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  (*histogram)->Record(value);
}

void HistogramBase::Add(const FunctionCallbackInfo<Value>& args) {
  Environment* env = Environment::GetCurrent(args);
  HistogramBase* histogram;
  ASSIGN_OR_RETURN_UNWRAP(&histogram, args.Holder());
  CHECK(GetConstructorTemplate(env)->HasInstance(args[0]));
  HistogramBase* other;
  ASSIGN_OR_RETURN_UNWRAP(&other, args[0]);
  auto his = *(other->histogram());
  double count = (*histogram)->Add(his);
  args.GetReturnValue().Set(count);
}



{
  //register code snippet
  Local<FunctionTemplate> tmpl = env->histogram_ctor_template();
  if (tmpl.IsEmpty()) {
    tmpl = env->NewFunctionTemplate(New);
    Local<String> classname =FIXED_ONE_BYTE_STRING(env->isolate(), "Histogram");
    tmpl->SetClassName(classname);
    tmpl->InstanceTemplate()->SetInternalFieldCount(kInternalFieldCount);
    env->SetProtoMethodNoSideEffect(tmpl, "countBigInt", GetCountBigInt);
    env->SetProtoMethodNoSideEffect(tmpl, "exceedsBigInt", GetExceedsBigInt);
    env->SetProtoMethodNoSideEffect(tmpl, "minBigInt", GetMinBigInt);
    env->SetProtoMethodNoSideEffect(tmpl, "maxBigInt", GetMaxBigInt);
    env->SetProtoMethodNoSideEffect(tmpl, "mean", GetMean);
    env->SetProtoMethodNoSideEffect(tmpl, "stddev", GetStddev);
    env->SetProtoMethodNoSideEffect(tmpl, "percentileBigInt",GetPercentileBigInt);GetPercentilesBigInt);
    env->SetProtoMethod(tmpl, "reset", DoReset);
    env->SetProtoMethod(tmpl, "record", Record);
    env->SetProtoMethod(tmpl, "recordDelta", RecordDelta);
    env->SetProtoMethod(tmpl, "add", Add);
    env->set_histogram_ctor_template(tmpl);
  }
  return tmpl;
}
