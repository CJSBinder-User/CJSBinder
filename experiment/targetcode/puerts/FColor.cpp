//puerts:FColor_Wrap.cpp

static void FColorM_DWColor(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_DWColor] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->DWColor();
        auto V8Result = v8::Integer::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_Equality(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FColor>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FColor* fc = puerts::DataTransfer::GetPointerFast<FColor>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_Equality] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg = *fc;
            auto MethodResult = Self->Equality(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_Inequality(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FColor>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FColor* fc = puerts::DataTransfer::GetPointerFast<FColor>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_Inequality] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg = *fc;
            auto MethodResult = Self->Inequality(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_FromRGBE(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_FromRGBE] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->FromRGBE();
        void* Ptr = new FLinearColor(MethodResult);

        auto V8Result = puerts::DataTransfer::FindOrAddStruct<FLinearColor>(Isolate, Context, Ptr, false);

        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_WithAlpha(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            uint8 Arg0 = Info[0]->ToInteger(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_WithAlpha] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->WithAlpha(Arg0);
            void* Ptr = new FColor(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FColor>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_ReinterpretAsLinear(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(
                Isolate, "[FColor::M_ReinterpretAsLinear] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->ReinterpretAsLinear();
        void* Ptr = new FLinearColor(MethodResult);

        auto V8Result = puerts::DataTransfer::FindOrAddStruct<FLinearColor>(Isolate, Context, Ptr, false);

        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_ToHex(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_ToHex] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->ToHex();
        auto V8Result = v8::String::NewFromUtf8(Isolate, TCHAR_TO_UTF8(*MethodResult), v8::NewStringType::kNormal).ToLocalChecked();
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_ToString(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_ToString] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->ToString();
        auto V8Result =
            v8::String::NewFromUtf8(Isolate, TCHAR_TO_UTF8(*MethodResult), v8::NewStringType::kNormal).ToLocalChecked();
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_InitFromString(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsString())
        {
            const FString Arg0 = UTF8_TO_TCHAR(*(v8::String::Utf8Value(Isolate, Info[0])));
            auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_InitFromString] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->InitFromString(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_ToPackedARGB(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_ToPackedARGB] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->ToPackedARGB();
        auto V8Result = v8::Integer::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_ToPackedABGR(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_ToPackedABGR] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->ToPackedABGR();
        auto V8Result = v8::Integer::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_ToPackedRGBA(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
            auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_ToPackedRGBA] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->ToPackedRGBA();
            auto V8Result = v8::Integer::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FColorM_ToPackedBGRA(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FColor>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FColor::M_ToPackedBGRA] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->ToPackedBGRA();
        auto V8Result = v8::Integer::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;

    static puerts::JSFunctionInfo Methods[] = {{"DWColor", FColorM_DWColor}, {"Equality", FColorM_Equality},
        {"Inequality", FColorM_Inequality}, {"FromRGBE", FColorM_FromRGBE}, {"WithAlpha", FColorM_WithAlpha},
        {"ReinterpretAsLinear", FColorM_ReinterpretAsLinear}, {"ToHex", FColorM_ToHex}, {"ToString", FColorM_ToString},
        {"InitFromString", FColorM_InitFromString}, {"ToPackedARGB", FColorM_ToPackedARGB},
        {"ToPackedABGR", FColorM_ToPackedABGR}, {"ToPackedRGBA", FColorM_ToPackedRGBA}, {"ToPackedBGRA", FColorM_ToPackedBGRA},
        {0, 0}};

    Def.UETypeName = "FColor";

    Def.Methods = Methods;

    puerts::RegisterJSClass(Def);
}