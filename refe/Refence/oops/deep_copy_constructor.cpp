#include<iostream>
using namespace std;

class MyClass             // class name 
{
    public:
    
        int *p;            // pointer variable 
        
        MyClass()              // default constructor 
        {
            p= new int;
        }
        MyClass(MyClass &d)      // Deep Copy 
        {
            p= new int;
            *p= *(d.p);
        }
         
        void setdata( int z)     // set data method
        {
            *p=z;
        }
        void getdata()      // get data method
        {
            cout<<*p<<endl;
        }
};

int main()
{
    MyClass myobj;         // object created. 
    myobj.setdata(5);      // passing value to set data method
    MyClass mysecobj=myobj;  // initilize object by another object.
    mysecobj.getdata();    // get data method called.
    
}