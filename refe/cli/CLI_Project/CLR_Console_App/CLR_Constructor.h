#pragma once
#include "pch.h"

private ref class CLR_Constructor
{
private:
    /// <summary>
    /// Data Member.
    /// </summary>
    int i;

    /// <summary>
    /// Constructor. 
    /// </summary>
    /// <param name="number"></param>
    CLR_Constructor(int number)
    {
        i = number;
    }
public:
    static void Main()
    {
        /// <summary>
        ///  Creating a object for Class.
        /// </summary>
        CLR_Constructor^ h = gcnew CLR_Constructor(1);
        CLR_Constructor^ j = gcnew CLR_Constructor(2);
        j = h;


        /// <summary>
        /// Accessing the data members. 
        /// </summary>
        System::Console::WriteLine("Value of i for 'j' instance:  ");
        System::Console::WriteLine(j->i);

        /// <summary>
        /// Initialize the data members.
        /// </summary>
        h->i = 3;
        System::Console::WriteLine("updated Value of i for 'j' instance:  ");
        System::Console::WriteLine(j->i);
    }
};