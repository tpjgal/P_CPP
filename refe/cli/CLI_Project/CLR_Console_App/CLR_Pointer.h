#pragma once
ref struct RefPointer
{
public:    
   static void Main()
    {
        int i;
        int* ptr = &i;
        *ptr = 3;
        System::Console::WriteLine(i);
    }
};

