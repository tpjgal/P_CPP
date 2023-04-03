#include <iostream>
using namespace std;
//parent class
class Parent{
   public:
   Parent(){
      cout << "Inside base class" << endl;
   }
};
//child class
class Child : public Parent{
   public:
   Child(){
      cout << "Inside sub class" << endl;
   }
};
int main() {
   Child obj;
   return 0;
}
