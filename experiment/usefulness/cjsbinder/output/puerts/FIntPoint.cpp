void FIntPoint_Equality_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_Equality] Attempt to access a NULL self pointer");
       return;}
    FIntPoint carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FIntPoint>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FIntPoint* fb0 = *puerts::DataTransfer::GetPointerFast<FIntPoint>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->Equality(carg0);
    auto jsres = v8::Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_Inequality_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_Inequality] Attempt to access a NULL self pointer");
       return;}
    FIntPoint carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FIntPoint>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FIntPoint* fb0 = *puerts::DataTransfer::GetPointerFast<FIntPoint>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->Inequality(carg0);
    auto jsres = v8::Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_Multiply_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_Multiply] Attempt to access a NULL self pointer");
       return;}
    int carg0;
    if(args[0]->IsInt32()){
       carg0 = args[0]->ToInteger(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FIntPoint cres = Self->Multiply(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_Division_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_Division] Attempt to access a NULL self pointer");
       return;}
    int carg0;
    if(args[0]->IsInt32()){
       carg0 = args[0]->ToInteger(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FIntPoint cres = Self->Division(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_Addition_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_Addition] Attempt to access a NULL self pointer");
       return;}
    FIntPoint carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FIntPoint>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FIntPoint* fb0 = *puerts::DataTransfer::GetPointerFast<FIntPoint>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FIntPoint cres = Self->Addition(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_Substraction_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_Substraction] Attempt to access a NULL self pointer");
       return;}
    FIntPoint carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FIntPoint>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FIntPoint* fb0 = *puerts::DataTransfer::GetPointerFast<FIntPoint>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FIntPoint cres = Self->Substraction(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_set_Item_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_set_Item] Attempt to access a NULL self pointer");
       return;}
    int carg0;
    if(args[0]->IsInt32()){
       carg0 = args[0]->ToInteger(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    Self->set_Item(carg0);
}
void FIntPoint_get_Item_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_get_Item] Attempt to access a NULL self pointer");
       return;}
    int carg0;
    if(args[0]->IsInt32()){
       carg0 = args[0]->ToInteger(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    int cres = Self->get_Item(carg0);
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_ComponentMin_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_ComponentMin] Attempt to access a NULL self pointer");
       return;}
    FIntPoint carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FIntPoint>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FIntPoint* fb0 = *puerts::DataTransfer::GetPointerFast<FIntPoint>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FIntPoint cres = Self->ComponentMin(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_ComponentMax_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_ComponentMax] Attempt to access a NULL self pointer");
       return;}
    FIntPoint carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FIntPoint>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FIntPoint* fb0 = *puerts::DataTransfer::GetPointerFast<FIntPoint>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FIntPoint cres = Self->ComponentMax(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_GetMax_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_GetMax] Attempt to access a NULL self pointer");
       return;}
    int cres = Self->GetMax();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_GetMin_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_GetMin] Attempt to access a NULL self pointer");
       return;}
    int cres = Self->GetMin();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_Size_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_Size] Attempt to access a NULL self pointer");
       return;}
    int cres = Self->Size();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_SizeSquared_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_SizeSquared] Attempt to access a NULL self pointer");
       return;}
    int cres = Self->SizeSquared();
    auto jsres = v8::Integer::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FIntPoint_ToString_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FIntPoint::M_ToString] Attempt to access a NULL self pointer");
       return;}
    FString cres = Self->ToString();
    auto jsres = v8::String::NewFromUtf8(isolate, TCHAR_TO_UTF8(*cres), v8::NewStringType::kNormal).ToLocalChecked();
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;
    static puerts::JSFunctionInfo Methods[] = {
    {"Equality", FIntPoint_Equality_glue},
    {"Inequality", FIntPoint_Inequality_glue},
    {"Multiply", FIntPoint_Multiply_glue},
    {"Division", FIntPoint_Division_glue},
    {"Addition", FIntPoint_Addition_glue},
    {"Substraction", FIntPoint_Substraction_glue},
    {"set_Item", FIntPoint_set_Item_glue},
    {"get_Item", FIntPoint_get_Item_glue},
    {"ComponentMin", FIntPoint_ComponentMin_glue},
    {"ComponentMax", FIntPoint_ComponentMax_glue},
    {"GetMax", FIntPoint_GetMax_glue},
    {"GetMin", FIntPoint_GetMin_glue},
    {"Size", FIntPoint_Size_glue},
    {"SizeSquared", FIntPoint_SizeSquared_glue},
    {"ToString", FIntPoint_ToString_glue},
    {0, 0}};
    Def.UETypeName = "FIntPoint";
    Def.Methods = Methods;
    puerts::RegisterJSClass(Def);
}
