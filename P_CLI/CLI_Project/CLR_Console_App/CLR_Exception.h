#pragma once
using namespace System;
ref class MyException : Exception
{
public:
    MyException(String^ message) : Exception(message)
    {
    }
};
class RException
{
public:
    static void Main()
    {
        try
        {
            throw gcnew MyException("exception");
        }
        catch (MyException^ e)
        {
            Console::WriteLine("caught : {0}", e);
            return;
        }
        catch (...)
        {
        }
        finally
        {
            Console::WriteLine("in the finally block");
        }
    }
};

