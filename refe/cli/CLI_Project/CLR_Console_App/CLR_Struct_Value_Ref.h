#pragma once
using namespace System;

value struct V
{
    V(int i)
    {
        Console::WriteLine(i);
    }
};
 private ref class StructR
{
    static  void Main()
    {
        V v1;
        V v2(1);
        V v3 = V(2);
    }
};


