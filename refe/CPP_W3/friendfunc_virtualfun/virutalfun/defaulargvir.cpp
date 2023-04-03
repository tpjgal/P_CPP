#include<iostream>
using namespace std;
class B {
   public:
      virtual void s(int a = 0) {
         cout<<" In Base \n";
      }
};
class D: public B {
   public:
      virtual void s(int a) {
         cout<<"In Derived, a="<<a;
      }
};
int main(void) {
   D d; // An object of class D
   B *b= &d;// A pointer of type B* pointing to d
   b->s();// prints"D::s() called"
   return 0;
}
