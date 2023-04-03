#pragma once
using namespace System;
class Animal
{
public:
    Animal()
    {
        Console::WriteLine("Animal");
    }
};
class Horse : virtual Animal
{
};
class Donkey : virtual Animal
{
};
class Mule : Horse, Donkey
{
};
class Food
{
public:
    Food()
    {
        Console::WriteLine("Food");
    }
};
class Apple : Food
{
};
class Carrot : Food
{
};
class Lunch : Apple, Carrot
{
};

 class RPolymorphsim 
{
public: 
    static void Main()
    {
        Mule m;
    }
};