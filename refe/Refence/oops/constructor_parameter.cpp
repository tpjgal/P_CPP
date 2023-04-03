#include<iostream>
using namespace std;

class MyClass         // Class Name 
{
    public:
        int x, y,z;     // Memeber 
        
        
    MyClass(int a, int b)   // Constructor parameter
    {
        x=a;
        y=b;
    }
    
  /*  MyClass ()       // Default Constructor 
        {
            
        }*/
MyClass (): z(5)        // constuctor intilization   // Multiple Constructor 
    {
        
    }
      void Mymethod()       // Member function definition
      {
           cout<< x+y <<endl;
      }
      
};

int main()
{
    MyClass myobj(4,5);      // object created and pass the value to the consturtor 
    MyClass mysecobj;
    myobj.Mymethod();        // member function called
    cout<<mysecobj.z<<endl;  // print the value for z 
}