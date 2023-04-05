#pragma once

using namespace System;
private value class S
{
public:
    int i;
    S(int a)
    {
        i = a;
    }
};
private ref class R
{
public:
    int a;
    static void Main()
    {
        R^ r = gcnew R();
        r->a = 10;
        Console::WriteLine(r->a);
        S s = S(20);
        Console::WriteLine(s.i);
    }
};