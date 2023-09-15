//puerts:FIntPoint_Wrap.cpp

static void FIntPointM_Equality(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FIntPoint>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FIntPoint* fp = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info[0]->ToObject(Context).ToLocalChecked());
            
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_Equality] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fp;
            auto MethodResult = Self->Equality(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_Inequality(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FIntPoint>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FIntPoint* fp = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_Inequality] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fp
            auto MethodResult = Self->Inequality(Arg0);
            auto V8Result = v8::Boolean::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_Multiply(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            int32 Arg0 = Info[0]->ToInteger(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_Multiply] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->Multiply(Arg0);
            void* Ptr = new FIntPoint(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_Division(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            int32 Arg0 = Info[0]->ToInteger(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_Division] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->Division(Arg0);
            void* Ptr = new FIntPoint(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_Addition(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FIntPoint>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FIntPoint* fp = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_Addition] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fp;
            auto MethodResult = Self->Addition(Arg0);
            void* Ptr = new FIntPoint(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_Subtraction(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FIntPoint>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FIntPoint* fp = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(
                    Isolate, "[FIntPoint::M_Subtraction] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fp;
            auto MethodResult = Self->Subtraction(Arg0);
            void* Ptr = new FIntPoint(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_set_Item(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            int32 Arg0 = Info[0]->ToInteger(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_set_Item] Attempt to access a NULL self pointer");
                return;
            }
            Self->set_Item(Arg0);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_get_Item(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsNumber())
        {
            int32 Arg0 = Info[0]->ToInteger(Context).ToLocalChecked()->Value();
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_get_Item] Attempt to access a NULL self pointer");
                return;
            }
            auto MethodResult = Self->get_Item(Arg0);
            auto V8Result = v8::Integer::New(Isolate, MethodResult);
            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_ComponentMin(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FIntPoint>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FIntPoint* fp = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_ComponentMin] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fp
            auto MethodResult = Self->ComponentMin(Arg0);
            void* Ptr = new FIntPoint(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_ComponentMax(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 1)
    {
        if (Info[0]->IsObject() &&

            puerts::DataTransfer::IsInstanceOf<FIntPoint>(Isolate, Info[0]->ToObject(Context).ToLocalChecked()))
        {
            const FIntPoint* fp = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info[0]->ToObject(Context).ToLocalChecked());
            auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
            if (!Self)
            {
                puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_ComponentMax] Attempt to access a NULL self pointer");
                return;
            }
            auto Arg0 = *fp
            auto MethodResult = Self->ComponentMax(Arg0);
            void* Ptr = new FIntPoint(MethodResult);

            auto V8Result = puerts::DataTransfer::FindOrAddStruct<FIntPoint>(Isolate, Context, Ptr, false);

            Info.GetReturnValue().Set(V8Result);

            return;
        }
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_GetMax(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_GetMax] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetMax();
        auto V8Result = v8::Integer::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_GetMin(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_GetMin] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->GetMin();
        auto V8Result = v8::Integer::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_Size(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_Size] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->Size();
        auto V8Result = v8::Integer::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_SizeSquared(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_SizeSquared] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->SizeSquared();
        auto V8Result = v8::Integer::New(Isolate, MethodResult);
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

static void FIntPointM_ToString(const v8::FunctionCallbackInfo<v8::Value>& Info)
{
    v8::Isolate* Isolate = Info.GetIsolate();
    v8::Local<v8::Context> Context = Isolate->GetCurrentContext();
    if (Info.Length() == 0)
    {
        auto Self = puerts::DataTransfer::GetPointerFast<FIntPoint>(Info.Holder());
        if (!Self)
        {
            puerts::DataTransfer::ThrowException(Isolate, "[FIntPoint::M_ToString] Attempt to access a NULL self pointer");
            return;
        }
        auto MethodResult = Self->ToString();
        auto V8Result = v8::String::NewFromUtf8(Isolate, TCHAR_TO_UTF8(*MethodResult), v8::NewStringType::kNormal).ToLocalChecked();
        Info.GetReturnValue().Set(V8Result);

        return;
    }
    puerts::DataTransfer::ThrowException(Isolate, "Invalid argument!");
}

{
    //register code snippet
    puerts::JSClassDefinition Def = JSClassEmptyDefinition;

    static puerts::JSFunctionInfo Methods[] = {{"Equality", FIntPointM_Equality},
        {"Inequality", FIntPointM_Inequality}, {"Multiply", FIntPointM_Multiply},
        {"Division", FIntPointM_Division}, {"Addition", FIntPointM_Addition},
        {"Subtraction", FIntPointM_Subtraction}, {"set_Item", FIntPointM_set_Item}, {"get_Item", FIntPointM_get_Item},
        {"ComponentMin", FIntPointM_ComponentMin}, {"ComponentMax", FIntPointM_ComponentMax}, {"GetMax", FIntPointM_GetMax},
        {"GetMin", FIntPointM_GetMin}, {"Size", FIntPointM_Size}, {"SizeSquared", FIntPointM_SizeSquared},
        {"ToString", FIntPointM_ToString}, {0, 0}};

    Def.UETypeName = "FIntPoint";

    Def.Methods = Methods;

    puerts::RegisterJSClass(Def);
}