#pragma once
using namespace System;
value struct VBoxing
{
};
ref struct RBoxing
{
    static void Main()
    {
        VBoxing v;
        Object^ o = v;
        Console::WriteLine(o);
        v = (VBoxing)o;
        Console::WriteLine(v);
    }
};