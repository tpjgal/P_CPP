// gcroot_and_auto_gcroot.cpp

#include <msclr/gcroot.h>
#include <msclr/auto_gcroot.h>
using namespace System;
using namespace msclr;

// managed class R
ref class R
{
   public:
     void f()
     {
        Console::WriteLine("managed member function");
     }

     ~R()
     {
        Console::WriteLine("destructor");
     }

};

// native class N
class N
{
   gcroot<R^> r_gcroot;
   auto_gcroot<R^> r_auto_gcroot;

   public:
      N()
      {
          r_gcroot = gcnew R();
          r_gcroot->f();
          r_auto_gcroot = gcnew R();
          r_auto_gcroot->f();
      }

};

int main()
{
   N n;
   // when n goes out of scope, the destructor for the auto_gcroot object
   // will be executed, but not the gcroot object
}
