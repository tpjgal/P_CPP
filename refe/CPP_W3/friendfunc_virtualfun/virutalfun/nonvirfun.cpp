#include <iostream>
using namespace std;
class BaseClass {
public:
   void display(){
      cout << "Print function from the base class" << endl;
   }
   void call_disp(){
      cout << "Calling display() from the base class " << endl;
      this -> display();
   }
};
class DerivedClass: public BaseClass {
public:
   void display() {
      cout << "Print function from the derived class" << endl;
   }
   void call_disp() {
      cout << "Calling display() from derived" << endl ;
      this -> display();
   }
};
int main() {
   BaseClass *bp = new DerivedClass;
   bp->call_disp();
}
