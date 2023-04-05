#pragma once
class Base
{
public:
    int f(int i)
    {
        return i;
    }
};
class Derived : public Base
{
};
class Hello : Derived
{
    void test()
    {
        f(3);
    }
};
ref struct ROverload
{
    static void Main()
    {

    }
};