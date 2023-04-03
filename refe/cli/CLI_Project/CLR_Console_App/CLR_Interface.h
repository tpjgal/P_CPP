#pragma once
using namespace System;
interface class Sleeps
{
    void GoToSleep();
};
interface class Eats
{
    void Feed();
};
ref struct Cat : Eats, Sleeps
{
    virtual void GoToSleep()
    {
        Console::WriteLine("Cat is Catnapping");
    }
    virtual void Feed()
    {
        Console::WriteLine("Cat is Eating");
    }
};
ref struct Dog : Eats, Sleeps
{
    virtual void GoToSleep()
    {
        Console::WriteLine("Dog is Sleeping");
    }
    virtual void Feed()
    {
        Console::WriteLine("Dog is Eating");
    }
};
 ref struct RInterface : Cat
{
    static void Main()
    {
        Cat^ c = gcnew Cat();
        Dog^ d = gcnew Dog();
        c->Feed();
        c->GoToSleep();
        d->Feed();
        d->GoToSleep();
    }

};