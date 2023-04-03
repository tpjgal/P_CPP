#include <iostream>
using namespace std;
void func(int);    // pass by value decleartion.
void funcref(int &y);  // pass by reference decleartion.
void myfuc(int *z);  // pass by reference decleartion. - pointer 

int main()
{
    int a= 10;
    func(a);   // function call. 
    int b=45;
    
    funcref(b);  // function call.
    
    int c=78;
    myfuc(&c);  // function call , rerference. 
    
    int *d;     // pointer variable.
    int f=77;   // local variable. 
    d= &f;     // assign local variable to pointer variable. 
    myfuc(d);     // passing pointer variable. 
}

void func(int x)       // pass by value definition. 
{
    cout<< "value of a is :"<<x<<endl;
}

void funcref(int &y)    // pass by reference definition. 
{
    cout<< "value of b is :"<<y<<endl;
}


void myfuc(int *z)    // pass by reference definition.    // pass pointer variable 
{
    cout<< "value of c is :"<<*z<<endl;
}