#include<iostream>
using namespace std;
// Function Overloading 
class Myclass
{
    public:
    
    // Same function name but argument different 
  void func(int data)
  {
      cout<<data;
  }
    
    void func()
    {
        cout<<"function called";
    }
};

int main()
{
    Myclass obj;
    obj.func(5);   // funciton call
    obj.func();    // function call
    
}