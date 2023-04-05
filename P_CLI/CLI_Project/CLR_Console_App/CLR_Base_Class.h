using namespace System;
ref struct Base
{
    int i;
};
ref struct Derived : Base
{
    int i;
    void Access()
    {
        Base::i = 3;
        i = 4;
        Console::WriteLine("Base i = {0}, Derived i = {1}", Base::i, i);
    }
   static void MainMethod()
    {
       Console::WriteLine("Methed called");
    }
};

ref struct RBaseClass : Derived
{
     void Main()
    {
        Derived^ d = gcnew Derived();
        d->Access();
        d->MainMethod();
    }
};