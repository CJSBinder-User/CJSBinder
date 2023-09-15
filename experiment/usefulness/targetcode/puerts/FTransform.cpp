//puerts:FTransform_Wrap.cpp

static void FTransformM_GetRelativeTransformReverse(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FTransform>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FTransform* ft = puerts::DataTransfer::GetPointerFast<FTransform>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_GetRelativeTransformReverse] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *ft;
            auto MethodResult = Self->GetRelativeTransformReverse(Arg0);
            void* Ptr = new FTransform(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FTransform>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_SetToRelativeTransform(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FTransform>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FTransform* ft = puerts::DataTransfer::GetPointerFast<FTransform>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_SetToRelativeTransform] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *ft;
            Self->SetToRelativeTransform(Arg0);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_TransformFVector4(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector4>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector4* fv4 = puerts::DataTransfer::GetPointerFast<FVector4>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_TransformFVector4] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv4;
            auto MethodResult = Self->TransformFVector4(Arg0);
            void* Ptr = new FVector4(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector4>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_TransformFVector4NoScale(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector4>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector4* fv4 = puerts::DataTransfer::GetPointerFast<FVector4>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_TransformFVector4NoScale] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv4;
            auto MethodResult = Self->TransformFVector4NoScale(Arg0);
            void* Ptr = new FVector4(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector4>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_TransformPosition(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector* fv = puerts::DataTransfer::GetPointerFast<FVector>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_TransformPosition] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->TransformPosition(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_TransformPositionNoScale(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector* fv = puerts::DataTransfer::GetPointerFast<FVector>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_TransformPositionNoScale] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->TransformPositionNoScale(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_TransformRotation(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FQuat>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FQuat* fq = puerts::DataTransfer::GetPointerFast<FQuat>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_TransformRotation] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fq;
            auto MethodResult = Self->TransformRotation(Arg0);
            void* Ptr = new FQuat(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FQuat>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_InverseTransformRotation(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FQuat>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FQuat* fq = puerts::DataTransfer::GetPointerFast<FQuat>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_InverseTransformRotation] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fq;
            auto MethodResult = Self->InverseTransformRotation(Arg0);
            void* Ptr = new FQuat(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FQuat>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_GetScaledAxis(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            EAxis::Type Arg0 = EAxis::Type(Info[0]->ToInt32(Context).ToLocalChecked()->Value());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FTransform::M_GetScaledAxis] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->GetScaledAxis(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_GetUnitAxis(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            EAxis::Type Arg0 = EAxis::Type(Info[0]->ToInt32(Context).ToLocalChecked()->Value());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FTransform::M_GetUnitAxis] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->GetUnitAxis(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_Mirror(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 2)
    {
        if (Info[0]->IsNumber() && Info[1]->IsNumber())
        {
            EAxis::Type Arg0 = EAxis::Type(Info[0]->ToInt32(Context).ToLocalChecked()->Value());
            EAxis::Type Arg1 = EAxis::Type(Info[1]->ToInt32(Context).ToLocalChecked()->Value());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FTransform::M_Mirror] Attempt to access a NULL self pointer");
                return;
            }
            Self->Mirror(Arg0, Arg1);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_GetLocation(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FTransform::M_GetLocation] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetLocation();
        void* Ptr = new FVector(MethodResult);

        auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_Rotator(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FTransform::M_Rotator] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->Rotator();
        void* Ptr = new FRotator(MethodResult);

        auto V8Result = puerts::DataTransfer::FindOrAddStruct<FRotator>(Isolate, Context, Ptr, false);

        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_GetDeterminant(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(
                Isolate, "[FTransform::M_GetDeterminant] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetDeterminant();
        auto V8Result = v8::Number::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FTransformM_SetLocation(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector* fv = puerts::DataTransfer::GetPointerFast<FVector>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FTransform>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FTransform::M_SetLocation] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv
            Self->SetLocation(Arg0);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;

    static puerts::JSFunctionInfo Methods[] = {
        {"GetRelativeTransformReverse", FTransformM_GetRelativeTransformReverse},
        {"SetToRelativeTransform", FTransformM_SetToRelativeTransform}, {"TransformFVector4", FTransformM_TransformFVector4},
        {"TransformFVector4NoScale", FTransformM_TransformFVector4NoScale},
        {"TransformPosition", FTransformM_TransformPosition},
        {"TransformPositionNoScale", FTransformM_TransformPositionNoScale},
        {"TransformRotation", FTransformM_TransformRotation},
        {"InverseTransformRotation", FTransformM_InverseTransformRotation}, 
        {"GetScaledAxis", FTransformM_GetScaledAxis}, {"GetUnitAxis", FTransformM_GetUnitAxis}, {"Mirror", FTransformM_Mirror},
        {"GetLocation", FTransformM_GetLocation}, {"Rotator", FTransformM_Rotator},
        {"GetDeterminant", FTransformM_GetDeterminant}, {"SetLocation", FTransformM_SetLocation},
        {0, 0}};

    Def.UETypeName = "FTransform";

    Def.Methods = Methods;

    puerts::RegisterJSClass(Def);
}