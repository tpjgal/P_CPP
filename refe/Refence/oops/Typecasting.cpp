#include<iostream>
using namespace std;
// Type Casting 
int main()
{
    int a=6;            // Initilization  : integer 
    char b='c';         // Initilization  : character
    float c=3.22f;
    double d=1.44;
    
    // Implicit conversion 
    
      d= a +1;
      c= b+1;       // ascii value of c is 99 
      cout<<"value of d: "<<d<< " value of c: "<<c<<endl;
      
    // Explicit conversion
    
   // a=(int)d + 5;
    //b=(char)c +3;
    a=static_cast<int>(c);      
    b=static_cast<char>(d)+90;   // now d = 7
    cout<<"value of a: "<<a<<" value of b: "<<b<<endl;
   
}