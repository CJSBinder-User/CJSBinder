void FColor_DWColor_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_DWColor] Attempt to access a NULL self pointer");
       return;}
    int cres = Self->DWColor();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FColor_Equality_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_Equality] Attempt to access a NULL self pointer");
       return;}
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FColor>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FColor* fb0 = *puerts::DataTransfer::GetPointerFast<FColor>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->Equality(carg0);
    auto jsres = v8::Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FColor_Inequality_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_Inequality] Attempt to access a NULL self pointer");
       return;}
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FColor>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FColor* fb0 = *puerts::DataTransfer::GetPointerFast<FColor>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->Inequality(carg0);
    auto jsres = v8::Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FColor_FromRGBE_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_FromRGBE] Attempt to access a NULL self pointer");
       return;}
    FLinearColor cres = Self->FromRGBE();
    '$cargtype carg0;
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FLinearColor>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FColor_WithAlpha_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_WithAlpha] Attempt to access a NULL self pointer");
       return;}
    FColor cres = Self->WithAlpha();
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FColor>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FColor_ReinterpretAsLinear_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_ReinterpretAsLinear] Attempt to access a NULL self pointer");
       return;}
    FLinearColor cres = Self->ReinterpretAsLinear();
    '$cargtype carg0;
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FLinearColor>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FColor_ToHex_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_ToHex] Attempt to access a NULL self pointer");
       return;}
    FString cres = Self->ToHex();
    auto jsres = v8::String::NewFromUtf8(isolate, TCHAR_TO_UTF8(*cres), v8::NewStringType::kNormal).ToLocalChecked();
    args.GetReturnValue().Set(jsres);
}
void FColor_ToString_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_ToString] Attempt to access a NULL self pointer");
       return;}
    FString cres = Self->ToString();
    auto jsres = v8::String::NewFromUtf8(isolate, TCHAR_TO_UTF8(*cres), v8::NewStringType::kNormal).ToLocalChecked();
    args.GetReturnValue().Set(jsres);
}
void FColor_InitFromString_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_InitFromString] Attempt to access a NULL self pointer");
       return;}
    if(args[0]->IsString()){
       carg0 = UTF8_TO_TCHAR(*(v8::String::Utf8Value(isolate, args[0])));}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->InitFromString(carg0);
    auto jsres = v8::Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FColor_ToPackedARGB_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_ToPackedARGB] Attempt to access a NULL self pointer");
       return;}
    unsigned int cres = Self->ToPackedARGB();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FColor_intToPackedABGR_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_intToPackedABGR] Attempt to access a NULL self pointer");
       return;}
    unsigned int cres = Self->intToPackedABGR();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FColor_ToPackedRGBA_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_ToPackedRGBA] Attempt to access a NULL self pointer");
       return;}
    unsigned int cres = Self->ToPackedRGBA();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FColor_ToPackedBGRA_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FColor>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FColor::M_ToPackedBGRA] Attempt to access a NULL self pointer");
       return;}
    unsigned int cres = Self->ToPackedBGRA();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;
    static puerts::JSFunctionInfo Methods[] = {
    {"DWColor", FColor_DWColor_glue},
    {"Equality", FColor_Equality_glue},
    {"Inequality", FColor_Inequality_glue},
    {"FromRGBE", FColor_FromRGBE_glue},
    {"WithAlpha", FColor_WithAlpha_glue},
    {"ReinterpretAsLinear", FColor_ReinterpretAsLinear_glue},
    {"ToHex", FColor_ToHex_glue},
    {"ToString", FColor_ToString_glue},
    {"InitFromString", FColor_InitFromString_glue},
    {"ToPackedARGB", FColor_ToPackedARGB_glue},
    {"intToPackedABGR", FColor_intToPackedABGR_glue},
    {"ToPackedRGBA", FColor_ToPackedRGBA_glue},
    {"ToPackedBGRA", FColor_ToPackedBGRA_glue},
    {0, 0}};
    Def.UETypeName = "FColor";
    Def.Methods = Methods;
    puerts::RegisterJSClass(Def);
}
