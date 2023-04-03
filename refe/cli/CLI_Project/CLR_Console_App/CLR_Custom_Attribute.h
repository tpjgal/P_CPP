#pragma once
using namespace System::Runtime::InteropServices;
ref class RCustomeAttribute
{
    [returnvalue:MarshalAs(UnmanagedType::Bool)] short Hello(wchar_t ch)
    {
        return(short)true;
    }
public:
    static void LoadMe() {}
};