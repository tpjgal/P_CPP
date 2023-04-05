#pragma once
using namespace System;
ref struct RStaticConstructor
{
    static RStaticConstructor()
    {
        Console::WriteLine("Static Constructor");
    }
    RStaticConstructor()
    {
        Console::WriteLine("Constructor");
    }
};
//int main()
//{
//    RStaticConstructor^ r;
//    Console::WriteLine("in main()");
//    r = gcnew RStaticConstructor();
//}