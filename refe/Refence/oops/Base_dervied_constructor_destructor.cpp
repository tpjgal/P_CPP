#include<iostream>
using namespace std;


class BaseClass                // Base Class Name 
{
    public:
        BaseClass()           // Base class constructor 
        {
            cout<<"Base Class Constructor called"<<endl;  
        }
        ~BaseClass()        // Base class destructor 
        {
            cout<<"Base Destrutor called"<<endl;
        }
};
class MyClass : BaseClass      // Derived Class 
{
    public:
    
    
    MyClass()                   // Derived Class constructor 
    {
        cout<<"constructor called"<<endl;
    }
    
    ~MyClass()                   // Derived class destructor 
    {
        cout<<"destructor called"<<endl;
    }
};

int main ()
{
     MyClass myObj;                  // object created 
     
}