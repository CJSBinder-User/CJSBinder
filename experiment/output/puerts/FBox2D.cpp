void FBox2D_Equality_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_Equality] Attempt to access a NULL self pointer");
       return;}
    FBox2D carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FBox2D>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FBox2D* fb0 = *puerts::DataTransfer::GetPointerFast<FBox2D>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->Equality(carg0);
    auto jsres = Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_Inequality_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_Inequality] Attempt to access a NULL self pointer");
       return;}
    FBox2D carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FBox2D>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FBox2D* fb0 = *puerts::DataTransfer::GetPointerFast<FBox2D>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->Inequality(carg0);
    auto jsres = Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_Addition_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_Addition] Attempt to access a NULL self pointer");
       return;}
    FVector2D carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector2D>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector2D* fb0 = *puerts::DataTransfer::GetPointerFast<FVector2D>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FBox2D cres = Self->Addition(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FBox2D>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_set_Item_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_set_Item] Attempt to access a NULL self pointer");
       return;}
    int carg0;
    if(args[0]->IsInt32()){
       carg0 = args[0]->ToInteger(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    Self->set_Item(carg0);
}
void FBox2D_ComputeSquaredDistanceToPoint_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_ComputeSquaredDistanceToPoint] Attempt to access a NULL self pointer");
       return;}
    FVector2D carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector2D>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector2D* fb0 = *puerts::DataTransfer::GetPointerFast<FVector2D>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    float cres = Self->ComputeSquaredDistanceToPoint(carg0);
    float jsres = Number::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_ExpandBy_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_ExpandBy] Attempt to access a NULL self pointer");
       return;}
    float carg0;
    if(args[0]->IsNumber()){
       carg0 = args[0]->ToNumber(context).ToLocalChecked()->Value();}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FBox2D cres = Self->ExpandBy(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FBox2D>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_GetArea_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_GetArea] Attempt to access a NULL self pointer");
       return;}
    float cres = Self->GetArea();
    float jsres = Number::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_GetCenter_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_GetCenter] Attempt to access a NULL self pointer");
       return;}
    FVector2D cres = Self->GetCenter();
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector2D>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_GetCenterAndExtents_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_GetCenterAndExtents] Attempt to access a NULL self pointer");
       return;}
    FVector2D carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector2D>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector2D* fb0 = *puerts::DataTransfer::GetPointerFast<FVector2D>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector2D carg1;
    if(args[1]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector2D>(isolate, args[1]->ToObject(context).ToLocalChecked())){
       FVector2D* fb1 = *puerts::DataTransfer::GetPointerFast<FVector2D>(args[1]->ToObject(context).ToLocalChecked());
       carg1 = *fb1;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    Self->GetCenterAndExtents(carg0,carg1);
}
void FBox2D_GetClosestPointTo_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_GetClosestPointTo] Attempt to access a NULL self pointer");
       return;}
    FVector2D carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector2D>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector2D* fb0 = *puerts::DataTransfer::GetPointerFast<FVector2D>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    FVector2D cres = Self->GetClosestPointTo(carg0);
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector2D>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_GetExtent_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_GetExtent] Attempt to access a NULL self pointer");
       return;}
    FVector2D cres = Self->GetExtent();
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector2D>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_GetSize_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_GetSize] Attempt to access a NULL self pointer");
       return;}
    FVector2D cres = Self->GetSize();
    void* Ptr = new FBox2D(cres);
    auto jsres = puerts::DataTransfer::FindOrAddStruct<FVector2D>(isolate, context, Ptr, false);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_Init_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_Init] Attempt to access a NULL self pointer");
       return;}
    Self->Init();
}
void FBox2D_Intersect_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_Intersect] Attempt to access a NULL self pointer");
       return;}
    FBox2D carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FBox2D>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FBox2D* fb0 = *puerts::DataTransfer::GetPointerFast<FBox2D>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->Intersect(carg0);
    auto jsres = Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
void FBox2D_IsInside_glue(const FunctionCallbackInfo<Value>& args)
{
    Isolate* isolate = args.GetIsolate();
    Local<Context> context = isolate->GetCurrentContext();
    auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(args.Holder());
    if(!Self){
       puerts::DataTransfer::ThrowException(isolate, "[FBox2D::M_IsInside] Attempt to access a NULL self pointer");
       return;}
    FVector2D carg0;
    if(args[0]->IsObject() && puerts::DataTransfer::IsInstanceOf<FVector2D>(isolate, args[0]->ToObject(context).ToLocalChecked())){
       FVector2D* fb0 = *puerts::DataTransfer::GetPointerFast<FVector2D>(args[0]->ToObject(context).ToLocalChecked());
       carg0 = *fb0;}
    else{  puerts::DataTransfer::ThrowException(isolate, "Invalid argument!");
       return;}
    bool cres = Self->IsInside(carg0);
    auto jsres = Boolean::New(isolate, cres);
    args.GetReturnValue().Set(jsres);
}
{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;
    static puerts::JSFunctionInfo Methods[] = {
    {"Equality", FBox2D_Equality_glue},
    {"Inequality", FBox2D_Inequality_glue},
    {"Addition", FBox2D_Addition_glue},
    {"set_Item", FBox2D_set_Item_glue},
    {"ComputeSquaredDistanceToPoint", FBox2D_ComputeSquaredDistanceToPoint_glue},
    {"ExpandBy", FBox2D_ExpandBy_glue},
    {"GetArea", FBox2D_GetArea_glue},
    {"GetCenter", FBox2D_GetCenter_glue},
    {"GetCenterAndExtents", FBox2D_GetCenterAndExtents_glue},
    {"GetClosestPointTo", FBox2D_GetClosestPointTo_glue},
    {"GetExtent", FBox2D_GetExtent_glue},
    {"GetSize", FBox2D_GetSize_glue},
    {"Init", FBox2D_Init_glue},
    {"Intersect", FBox2D_Intersect_glue},
    {"IsInside", FBox2D_IsInside_glue},
    {0, 0}};
    Def.UETypeName = "FBox2D";
    Def.Methods = Methods;
    puerts::RegisterJSClass(Def);
}
