#include<iostream>
using namespace std;
class MyClass
{
    public :
    
    int x;             // data member 
    
    MyClass(int a)    // Parametrized constructor 
    {
        x=a;
    }
    MyClass (MyClass &i)    // copy consturctor 
    {
     x= i.x;
    }
};

int main ()
{
    MyClass myobj(23);        // object created
    MyClass mysecobj(15);     // object created 
    cout<<myobj.x<<endl;
    cout<<mysecobj.x<<endl;
    
}