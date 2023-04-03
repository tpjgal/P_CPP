#include<iostream>
using namespace std;

class MyClass
{
    public:
        int a;
        int *p;
        
        MyClass()   
        {
            p = new int;
        }
     void setdata(int x)    // set method
     {
         a=x;
     }
     void show()            // show method
     {
         cout<<a<<endl;
     }
       
};

int main()
{
      // shallow copy 
    MyClass myobj;       // object created
    myobj.setdata(4);     //  value passed in set method
    MyClass mysecobj =myobj; // initilize object using another object. 
    mysecobj.show();    // show method called.
}