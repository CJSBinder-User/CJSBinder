//puerts:PBox2D_Wrap.cpp

static void FBox2DM_Equality(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&
            puerts::DataTransfer::IsInstanceOf<FBox2D>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FBox2D* fb = puerts::DataTransfer::GetPointerFast<FBox2D>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_Equality] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fb;
            auto MethodResult = Self->Equality(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);
            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_Inequality(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FBox2D>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FBox2D* fb = puerts::DataTransfer::GetPointerFast<FBox2D>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_Inequality] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fb;
            auto MethodResult = Self->Inequality(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_Addition(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector2D>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector2D* fv = puerts::DataTransfer::GetPointerFast<FVector2D>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_Addition] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->Addition(Arg0);
            void* Ptr = new FBox2D(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FBox2D>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
}

static void FBox2DM_set_Item(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            int32 Arg0 = Info[0]->ToInteger(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_set_Item] Attempt to access a NULL self pointer");
                return;
            }
            Self->set_Item(Arg0);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_ComputeSquaredDistanceToPoint(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector2D>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector2D* fv = puerts::DataTransfer::GetPointerFast<FVector2D>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FBox2D::M_ComputeSquaredDistanceToPoint] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->ComputeSquaredDistanceToPoint(Arg0);
            auto V8Result = v8::Number::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_ExpandBy(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            const float Arg0 = Info[0]->ToNumber(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_ExpandBy] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->ExpandBy(Arg0);
            void* Ptr = new FBox2D(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FBox2D>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_GetArea(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_GetArea] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetArea();
        auto V8Result = v8::Number::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_GetCenter(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_GetCenter] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetCenter();
        void* Ptr = new FVector2D(MethodResult);

        auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector2D>(Isolate, Context, Ptr, false);

        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_GetCenterAndExtents(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 2)
    {
        if (Info[0]->IsObject() && puerts::DataTransfer::UnRef(Isolate, Info[0])->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector2D>(
                Isolate, puerts::DataTransfer::UnRef(Isolate, Info[0])->ToObject(Context).ToLocalChecked()) &&
            Info[1]->IsObject() && puerts::DataTransfer::UnRef(Isolate, Info[1])->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector2D>(
                Isolate, puerts::DataTransfer::UnRef(Isolate, Info[1])->ToObject(Context).ToLocalChecked()))
        {
            FVector2D* fv0 = puerts::DataTransfer::GetPointerFast<FVector2D>(
                puerts::DataTransfer::UnRef(Isolate, Info[0])->ToObject(Context).ToLocalChecked());
            FVector2D* fv1 = puerts::DataTransfer::GetPointerFast<FVector2D>(
                puerts::DataTransfer::UnRef(Isolate, Info[1])->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FBox2D::M_GetCenterAndExtents] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv0;
            auto Arg1 = *fv1;
            Self->GetCenterAndExtents(Arg0, Arg1);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_GetClosestPointTo(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector2D>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector2D* fv = puerts::DataTransfer::GetPointerFast<FVector2D>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FBox2D::M_GetClosestPointTo] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->GetClosestPointTo(Arg0);
            void* Ptr = new FVector2D(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector2D>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_GetExtent(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_GetExtent] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetExtent();
        void* Ptr = new FVector2D(MethodResult);

        auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector2D>(Isolate, Context, Ptr, false);

        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_GetSize(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_GetSize] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetSize();
        void* Ptr = new FVector2D(MethodResult);

        auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector2D>(Isolate, Context, Ptr, false);

        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_Init(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_Init] Attempt to access a NULL self pointer");
            return;
        }
        Self->Init();

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_Intersect(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FBox2D>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FBox2D* fb = puerts::DataTransfer::GetPointerFast<FBox2D>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_Intersect] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fb;
            auto MethodResult = Self->Intersect(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FBox2DM_IsInside(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector2D>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector2D* fv = puerts::DataTransfer::GetPointerFast<FVector2D>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FBox2D>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FBox2D::M_IsInside] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->IsInside(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;
    static puerts::JSFunctionInfo Methods[] = {{"Equality", FBox2DM_Equality}, {"Inequality", FBox2DM_Inequality},
        {"Addition", FBox2DM_Addition}, {"set_Item", FBox2DM_set_Item},
        {"ComputeSquaredDistanceToPoint", FBox2DM_ComputeSquaredDistanceToPoint}, {"ExpandBy", FBox2DM_ExpandBy},
        {"GetArea", FBox2DM_GetArea}, {"GetCenter", FBox2DM_GetCenter}, {"GetCenterAndExtents", FBox2DM_GetCenterAndExtents},
        {"GetClosestPointTo", FBox2DM_GetClosestPointTo}, {"GetExtent", FBox2DM_GetExtent}, {"GetSize", FBox2DM_GetSize},
        {"Init", FBox2DM_Init}, {"Intersect", FBox2DM_Intersect}, {"IsInside", FBox2DM_IsInside}, {0, 0}};
    Def.UETypeName = "FBox2D";
    Def.Methods = Methods;
    puerts::RegisterJSClass(Def);
}