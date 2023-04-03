#include<iostream>
using namespace std;

class MyClass    // class name 
{
    public:       // access specifier required  otherwise by default private
    MyClass()    // Constructor 
    {
        cout<<"constructor called"<<endl;
    }
    
    ~MyClass()   // destructor 
    { 
         cout<<"destructor called"<<endl;
    
    }
};

int main()
{
     MyClass myObj;   // object created
     
}