//puerts:FVector_Wrap.cpp

static void FVectorM_BitwiseOr(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector* fv = puerts::DataTransfer::GetPointerFast<FVector>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_BitwiseOr] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->BitwiseOr(Arg0);
            auto V8Result = v8::Number::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_Addition(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector* fv = puerts::DataTransfer::GetPointerFast<FVector>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_Addition] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->Addition(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_Subtraction(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector* fv = puerts::DataTransfer::GetPointerFast<FVector>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_Subtraction] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->Subtraction(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_Multiply(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            float Arg0 = Info[0]->ToNumber(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_Multiply] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->Multiply(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_Division(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            float Arg0 = Info[0]->ToNumber(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_Division] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->Division(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_Equality(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector* fv = puerts::DataTransfer::GetPointerFast<FVector>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_Equality] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->Equality(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_GetMax(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_GetMax] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetMax();
        auto V8Result = v8::Number::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_GetMin(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_GetMin] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetMin();
        auto V8Result = v8::Number::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_GetAbsMin(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_GetAbsMin] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetAbsMin();
        auto V8Result = v8::Number::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_GridSnap(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            float Arg0 = Info[0]->ToNumber(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_GridSnap] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->GridSnap(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_BoundToCube(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            float Arg0 = Info[0]->ToNumber(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_BoundToCube] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->BoundToCube(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_GetClampedToSize(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 2)
    {
        if (Info[0]->IsNumber() && Info[1]->IsNumber())
        {
            float Arg0 = Info[0]->ToNumber(Context).ToLocalChecked()->Value();
            float Arg1 = Info[1]->ToNumber(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FVector::M_GetClampedToSize] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->GetClampedToSize(Arg0, Arg1);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_GetClampedToSize2D(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 2)
    {
        if (Info[0]->IsNumber() && Info[1]->IsNumber())
        {
            float Arg0 = Info[0]->ToNumber(Context).ToLocalChecked()->Value();
            float Arg1 = Info[1]->ToNumber(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FVector::M_GetClampedToSize2D] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->GetClampedToSize2D(Arg0, Arg1);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_MirrorByVector(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FVector>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FVector* fv = puerts::DataTransfer::GetPointerFast<FVector>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_MirrorByVector] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fv;
            auto MethodResult = Self->MirrorByVector(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FVectorM_MirrorByPlane(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FPlane>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FPlane* fp = puerts::DataTransfer::GetPointerFast<FPlane>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FVector>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FVector::M_MirrorByPlane] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fp;
            auto MethodResult = Self->MirrorByPlane(Arg0);
            void* Ptr = new FVector(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FVector>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}