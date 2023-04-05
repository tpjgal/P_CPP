#pragma once
using namespace System;
ref struct RIndex
{
    String^ m_Key;
    int m_Value;
    property int Hash[String^]
    {
        int get(String ^ Key)
        {
            if (Key == m_Key)
            {
                return m_Value;
            }
 else
{
    return -1;
}
}
void set(String ^ Key, int Value)
{
    m_Key = Key;
    m_Value = Value;
}
    }
        RIndex()
    {
        Hash["dog"] = 3;
    }
    static void Main()
    {
        RIndex^ r = gcnew RIndex();
        r->Hash["first"] = 42;
        Console::WriteLine(r->Hash["first"]);
        Console::WriteLine(r->Hash["second"]);
    }
};
