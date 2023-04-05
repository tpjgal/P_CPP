#pragma once
using namespace System;
ref struct RArray
{
    static int Sum(... array<int>^ Arr)
    {
        int r = 0;
        for each (int i in Arr)
        {
            r += i;
        }
        return r;
    }
public:
    static void Main()
    {
        array<int>^ Arr2 = { 1,2,3,4,5 };
        System::Console::WriteLine(Sum(Arr2));
        System::Console::WriteLine(Sum(1, 2, 3, 4));
    }
};
