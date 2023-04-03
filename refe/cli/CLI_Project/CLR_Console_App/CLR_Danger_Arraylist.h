#pragma once
using namespace System;
using namespace System::Collections;
ref struct RDangerArray
{
    static void Main()
    {
        ArrayList^ a = gcnew ArrayList();
        int i = 3;
        double d = 4.0;
        a->Add(i);
        a->Add(d);
        /*for each (int j in a)
        {
            Console::WriteLine(j);
        }*/
    }
};