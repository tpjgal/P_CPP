#pragma once
#include <iostream>

void myfunction()
{
    static int x = 0; // defined only the first time, skipped every other // time
    x++;
    std::cout << "Function ran: " << x << " time(s)." << '\n';
}

void static_specifier()
{
    myfunction(); // x == 1
    myfunction(); // x == 2
    myfunction(); // x == 3
}

class MyClass
{
public:
    static int x; // declare a static data member
};

int MyClass::x = 123; // define a static data member

void static_data_member()
{
    MyClass::x = 456; // access a static data member
    std::cout << "Static data member value is: " << MyClass::x;
}

class MyClassmemfun
{
public:
    static void myfunction(); // declare a static member function
};

// define a static member function
void MyClassmemfun::myfunction()
{
    std::cout << "Hello World from a static member function.";
}

void static_member_function()
{
    MyClassmemfun::myfunction(); // call a static member function
}