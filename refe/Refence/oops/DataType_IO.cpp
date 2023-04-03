#include<iostream>
using namespace std;

// Fundamentals
int main()
{
     // data types
     
     int a;
     char b;
     float c=13.5f;
     double d =1.42d;
     bool e;
     string f;
     char g[20];
     string h;
     
     // Input and output 
     
    cout<<"Enter any integer value:";      // Print 
    cin>>a;                               // Get input from user 
    cout<<"Enter any character: ";
    cin>>b;
    cout<<"Enter your name:";
    cin>>f;
    cout<< "value of c is " <<c <<"and d is " <<d <<endl;
    cout<<"integer: "<<a <<endl<<"character :"<<b <<endl<<"name:"<<f<<endl;
    cout<<"enter string:"<<endl;
    // getline(cin,h);     //not working   // get string from user 
    cout<<"enter other string"<<endl;
    cin.getline(g,20);                    // get input string from user 
    cout<<"your string :";
    cout<<g;
    
}