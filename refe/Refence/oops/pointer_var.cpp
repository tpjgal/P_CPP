#include <iostream>
using namespace std;


int main()
{
  int *p;
  int c =5;
  p=&c;
  
  int d;
  d=*p+1;
  cout<<d<<endl;
  *p=*p+10;
  cout<<*p<<endl;
  cout<<"Address: "<<p<<endl;
  *p+=2;
   cout<<*p<<endl;
   ++*p;
   cout<<*p<<endl;
   (*p)++;
    cout<<*p<<endl;
    
    
    int y;
    int *x = &y;
    
   // y =x+1;
     cout<<"add1"<<y<<endl;
    x=x+10;
     cout<<"add2"<<x<<endl;
    x+=2;
     cout<<"add3"<<x<<endl;
    ++x;
    cout<<"add4"<<x<<endl;
    x++;
     cout<<"add5"<<x<<endl;
  
}

