#pragma once
using namespace System;
ref struct R
{
private:
    static property DateTime Time
    {
    public:
        DateTime get()
        {
            return DateTime::Now;
        }
    }
};
ref struct RProtection
{
    static void Main()
    {
        Console::WriteLine(R::Time);
    }
};