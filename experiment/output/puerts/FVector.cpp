void FVector_BitwiseOr_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_BitwiseOr] Attempt to access a NULL self pointer");
       return;}
    FVector carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector* fb0 = *puerts::DataTransfer::GetPointerFast<FVector>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    float cres = Self->BitwiseOr(carg0);
    auto jsres = v8::Number::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FVector_Addition_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_Addition] Attempt to access a NULL self pointer");
       return;}
    FVector carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector* fb0 = *puerts::DataTransfer::GetPointerFast<FVector>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->Addition(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_Subtraction_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_Subtraction] Attempt to access a NULL self pointer");
       return;}
    FVector carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector* fb0 = *puerts::DataTransfer::GetPointerFast<FVector>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->Subtraction(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_Multiply_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_Multiply] Attempt to access a NULL self pointer");
       return;}
    float carg0;
    if(args[0]->IsNumber()){
       carg0 = args[0]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->Multiply(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_Division_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_Division] Attempt to access a NULL self pointer");
       return;}
    float carg0;
    if(args[0]->IsNumber()){
       carg0 = args[0]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->Division(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_Equality_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_Equality] Attempt to access a NULL self pointer");
       return;}
    float carg0;
    if(args[0]->IsNumber()){
       carg0 = args[0]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->Equality(carg0);
    auto jsres = v8::Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FVector_GetMax_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_GetMax] Attempt to access a NULL self pointer");
       return;}
    float cres = Self->GetMax();
    auto jsres = v8::Number::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FVector_GetMin_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_GetMin] Attempt to access a NULL self pointer");
       return;}
    float cres = Self->GetMin();
    auto jsres = v8::Number::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FVector_GetAbsMin_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_GetAbsMin] Attempt to access a NULL self pointer");
       return;}
    float cres = Self->GetAbsMin();
    auto jsres = v8::Number::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FVector_GridSnap_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_GridSnap] Attempt to access a NULL self pointer");
       return;}
    float carg0;
    if(args[0]->IsNumber()){
       carg0 = args[0]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->GridSnap(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_BoundToCube_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_BoundToCube] Attempt to access a NULL self pointer");
       return;}
    float carg0;
    if(args[0]->IsNumber()){
       carg0 = args[0]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->BoundToCube(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_GetClampedToSize_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_GetClampedToSize] Attempt to access a NULL self pointer");
       return;}
    float carg0;
    if(args[0]->IsNumber()){
       carg0 = args[0]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    float carg1;
    if(args[1]->IsNumber()){
       carg1 = args[1]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->GetClampedToSize(carg0,carg1);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_GetClampedToSize2D_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_GetClampedToSize2D] Attempt to access a NULL self pointer");
       return;}
    float carg0;
    if(args[0]->IsNumber()){
       carg0 = args[0]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    float carg1;
    if(args[1]->IsNumber()){
       carg1 = args[1]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->GetClampedToSize2D(carg0,carg1);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_MirrorByVector_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_MirrorByVector] Attempt to access a NULL self pointer");
       return;}
    FVector carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector* fb0 = *puerts::DataTransfer::GetPointerFast<FVector>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->MirrorByVector(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FVector_MirrorByPlane_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FVector>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FVector::M_MirrorByPlane] Attempt to access a NULL self pointer");
       return;}
    FPlane carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FPlane>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FPlane* fb0 = *puerts::DataTransfer::GetPointerFast<FPlane>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->MirrorByPlane(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;
    static puerts::JSFunctionInfo Methods[] = {
    {"BitwiseOr", FVector_BitwiseOr_glue},
    {"Addition", FVector_Addition_glue},
    {"Subtraction", FVector_Subtraction_glue},
    {"Multiply", FVector_Multiply_glue},
    {"Division", FVector_Division_glue},
    {"Equality", FVector_Equality_glue},
    {"GetMax", FVector_GetMax_glue},
    {"GetMin", FVector_GetMin_glue},
    {"GetAbsMin", FVector_GetAbsMin_glue},
    {"GridSnap", FVector_GridSnap_glue},
    {"BoundToCube", FVector_BoundToCube_glue},
    {"GetClampedToSize", FVector_GetClampedToSize_glue},
    {"GetClampedToSize2D", FVector_GetClampedToSize2D_glue},
    {"MirrorByVector", FVector_MirrorByVector_glue},
    {"MirrorByPlane", FVector_MirrorByPlane_glue},
    {0, 0}};
    Def.UETypeName = "FVector";
    Def.Methods = Methods;
    puerts::RegisterJSClass(Def);
}
