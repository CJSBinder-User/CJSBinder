void FTransform_GetRelativeTransformReverse_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_GetRelativeTransformReverse] Attempt to access a NULL self pointer");
       return;}
    FTransform carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FTransform>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FTransform* fb0 = *puerts::DataTransfer::GetPointerFast<FTransform>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FTransform cres = Self->GetRelativeTransformReverse(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FTransform>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_SetToRelativeTransform_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_SetToRelativeTransform] Attempt to access a NULL self pointer");
       return;}
    FTransform carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FTransform>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FTransform* fb0 = *puerts::DataTransfer::GetPointerFast<FTransform>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    Self->SetToRelativeTransform(carg0);
}
void FTransform_TransformFVector4_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_TransformFVector4] Attempt to access a NULL self pointer");
       return;}
    FVector4 carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector4>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector4* fb0 = *puerts::DataTransfer::GetPointerFast<FVector4>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector4 cres = Self->TransformFVector4(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector4>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_TransformFVector4NoScale_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_TransformFVector4NoScale] Attempt to access a NULL self pointer");
       return;}
    FVector4 carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector4>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector4* fb0 = *puerts::DataTransfer::GetPointerFast<FVector4>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector4 cres = Self->TransformFVector4NoScale(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector4>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_TransformPosition_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_TransformPosition] Attempt to access a NULL self pointer");
       return;}
    FVector carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector* fb0 = *puerts::DataTransfer::GetPointerFast<FVector>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->TransformPosition(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_TransformPositionNoScale_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_TransformPositionNoScale] Attempt to access a NULL self pointer");
       return;}
    FVector carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector* fb0 = *puerts::DataTransfer::GetPointerFast<FVector>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->TransformPositionNoScale(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_TransformRotation_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_TransformRotation] Attempt to access a NULL self pointer");
       return;}
    FQuat carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FQuat>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FQuat* fb0 = *puerts::DataTransfer::GetPointerFast<FQuat>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FQuat cres = Self->TransformRotation(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FQuat>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_InverseTransformRotation_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_InverseTransformRotation] Attempt to access a NULL self pointer");
       return;}
    FQuat carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FQuat>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FQuat* fb0 = *puerts::DataTransfer::GetPointerFast<FQuat>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FQuat cres = Self->InverseTransformRotation(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FQuat>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_GetScaledAxis_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_GetScaledAxis] Attempt to access a NULL self pointer");
       return;}
    EAxis::Type carg0;
    if(args[0]->IsNumber()){
       EAxis::Type carg0 = EAxis::Type(args[0]->ToInt32(context).ToLocalChecked()->Value());}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->GetScaledAxis(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_GetUnitAxis_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_GetUnitAxis] Attempt to access a NULL self pointer");
       return;}
    EAxis::Type carg0;
    if(args[0]->IsNumber()){
       EAxis::Type carg0 = EAxis::Type(args[0]->ToInt32(context).ToLocalChecked()->Value());}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector cres = Self->GetUnitAxis(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_Mirror_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_Mirror] Attempt to access a NULL self pointer");
       return;}
    EAxis::Type carg0;
    if(args[0]->IsNumber()){
       EAxis::Type carg0 = EAxis::Type(args[0]->ToInt32(context).ToLocalChecked()->Value());}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    EAxis::Type carg1;
    if(args[1]->IsNumber()){
       EAxis::Type carg1 = EAxis::Type(args[1]->ToInt32(context).ToLocalChecked()->Value());}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    Self->Mirror(carg0,carg1);
}
void FTransform_GetLocation_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_GetLocation] Attempt to access a NULL self pointer");
       return;}
    FVector cres = Self->GetLocation();
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_Rotator_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_Rotator] Attempt to access a NULL self pointer");
       return;}
    FTransform carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FTransform>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FTransform* fb0 = *puerts::DataTransfer::GetPointerFast<FTransform>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FRotator cres = Self->Rotator(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FRotator>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FTransform_GetDeterminant_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_GetDeterminant] Attempt to access a NULL self pointer");
       return;}
    float cres = Self->GetDeterminant();
    auto jsres = v8::Number::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FTransform_SetLocation_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FTransform::M_SetLocation] Attempt to access a NULL self pointer");
       return;}
    FVector carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector* fb0 = *puerts::DataTransfer::GetPointerFast<FVector>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    Self->SetLocation(carg0);
}
{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;
    static puerts::JSFunctionInfo Methods[] = {
    {"GetRelativeTransformReverse", FTransform_GetRelativeTransformReverse_glue},
    {"SetToRelativeTransform", FTransform_SetToRelativeTransform_glue},
    {"TransformFVector4", FTransform_TransformFVector4_glue},
    {"TransformFVector4NoScale", FTransform_TransformFVector4NoScale_glue},
    {"TransformPosition", FTransform_TransformPosition_glue},
    {"TransformPositionNoScale", FTransform_TransformPositionNoScale_glue},
    {"TransformRotation", FTransform_TransformRotation_glue},
    {"InverseTransformRotation", FTransform_InverseTransformRotation_glue},
    {"GetScaledAxis", FTransform_GetScaledAxis_glue},
    {"GetUnitAxis", FTransform_GetUnitAxis_glue},
    {"Mirror", FTransform_Mirror_glue},
    {"GetLocation", FTransform_GetLocation_glue},
    {"Rotator", FTransform_Rotator_glue},
    {"GetDeterminant", FTransform_GetDeterminant_glue},
    {"SetLocation", FTransform_SetLocation_glue},
    {0, 0}};
    Def.UETypeName = "FTransform";
    Def.Methods = Methods;
    puerts::RegisterJSClass(Def);
}
