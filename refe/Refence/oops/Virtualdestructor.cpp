#include<iostream>
using namespace std;

class BaseClass                // Base Class
{
    public:
    
      BaseClass()             // Base Class constructor
      {
       cout<<"base class constructor"<<endl;   
      }

   virtual ~ BaseClass()     // Base Class virtual Destructor 
   {
       cout<<"base class destructor"<<endl;
   }
};

class DerivedClass : public BaseClass    // Derived class inherits base class
{
  public:
      
      DerivedClass()            // DerivedClass constructor
      {
          cout<<"Derived class constructor"<<endl;
      }
       ~DerivedClass()          // Derived class destructor
      {
          cout<<"Derived class destructor" <<endl;
      }
};

int main()
{
    DerivedClass *d = new DerivedClass();     // objected created by using DerivedClass
    BaseClass *b = d;                        // base class pointer initilization.
    delete d;                               // delete 
 
}
