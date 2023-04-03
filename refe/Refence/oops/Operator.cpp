#include<iostream>
using namespace std;

int main()
{
    int a=15;
    int b=10;
    int c;
    bool d;
    // Operator 
    
    // Arithmetic Operator 
    
    cout<<"Addition: " <<a+b <<endl;
    cout<<"Subtraction: "<<a-b<<endl;
    cout<<"Multiplication: "<<a*b<<endl;
    cout<<"Division: "<<a/b<<endl;
    cout<<"Modulos:" <<a %b<<endl;
    
    // Assignment Operator 
    a=b;
    cout<<"Value of a: "<<a<<endl;
    a+=b;
    cout<<"Value of a for a+=b: "<<a<<endl;
    b-=a;
    cout<<"Value of b for b-=a: "<<b<<endl;
    a*=b;
    cout<<"Value of a for a*=b: "<<a<<endl;
    
    // Relational Operator 
    
    c= (a==b);
    d=(a==b);
    
    cout<<"Value of c for (a==b): "<<c<<endl;
    cout<<"Value of d fo r(a==b): "<<d<<endl;
   
     c= (a>=b);
    d=(a>=b);
    
    cout<<"Value of c for (a>=b): "<<c<<endl;
    cout<<"Value of d fo r(a>=b): "<<d<<endl;
    
     c= (a<=b);
    d=(a<=b);
    
    cout<<"Value of c for (a<=b): "<<c<<endl;
    cout<<"Value of d fo r(a<=b): "<<d<<endl;
    
    c= (a!=b);
    d=(a!=b);
    
    cout<<"Value of c for (a!=b): "<<c<<endl;
    cout<<"Value of d fo r(a!=b): "<<d<<endl;
        
    c= (a<b);
    d=(a<b);
    
    cout<<"Value of c for (a<b): "<<c<<endl;
    cout<<"Value of d fo r(a<b): "<<d<<endl;
    
     c= (a>b);
    d=(a>b);
    
    cout<<"Value of c for (a>b): "<<c<<endl;
    cout<<"Value of d fo r(a>b): "<<d<<endl;
    
    //Logical Operators
    a=10;
    b=6;
    // Logical AND
    c= (a>5)&&(b<5);
    cout<< "LOGICAL AND" <<endl;
    cout<<"Value of c for (a>5)&&(b<10): "<<c<<endl;
     c= (a>5)&&(b<10);
    cout<<"Value of c for (a>5)&&(b<10): "<<c<<endl;
    a=1;
    cout<<"Value of c for (a>5)&&(b<10): "<<c<<endl;
    
    // logical OR
    cout<< "LOGICAL OR" <<endl;
    
    a=10;
    b=6;
     c= (a>5)||(b<10);
    cout<<"Value of c for (a>5)||(b<10): "<<c<<endl;
     a=1;
    c= (a>5)||(b<5);
    cout<<"Value of c for (a>5)||(b<10): "<<c<<endl;
     b=15;
     c= (a>5)||(b<10);
    cout<<"Value of c for (a>5)||(b<10): "<<c<<endl;
    
    // LOGICAL NOT 
    cout<< "LOGICAL NOT" <<endl;
    a=5;
    b=5;
    c= !(a==b);
    cout<<"Value of c for !(a==b): "<<c<<endl;
    a=5;
    b=5;
     c= (a==b);
    cout<<"Value of c for (a==b): "<<c<<endl;
    
    
    // BITWISE OPERATOR 
    cout<< "LOGICAL Operator " <<endl;
    a=12;  // 00001100
    b=25;  // 00011001
    c= a&b;   // 00001000  (8)
    cout<<"Bitwise AND : "<<c<<endl;
    c= a|b;  // 00011101  (29)
    cout<<"Bitwise OR : "<<c<<endl;
     c= a^b;  // 00010101  (21)
    cout<<"Bitwise XOR : "<<c<<endl;
    
    c= ~(a);
    cout<<"Bitwise Compliment : "<<c<<endl;
    
    c= a<<1;
    cout<<"Bitwise left shit : "<<c<<endl;
    c= a>>1;
    cout<<"Bitwise right shit : "<<c<<endl;
    
    
    // Sizof Operator 
    
    cout<<"Value of integer :"<< sizeof(int)<<endl;
    cout<<"Value of Character :"<< sizeof(char)<<endl;
    cout<<"Value of double :"<< sizeof(double)<<endl;
    cout<<"Value of long :"<< sizeof(long)<<endl;
    
    // Ternary Operator 
    
    string result;
    int g= 5;
    result = (g>5)? "True" : "False";
    cout<< "Result: "<<result<<endl;
    
    // Post Increment Operator 
    
    g=6;
    cout<<"value of g when g=6 if g++ :" <<g++<<endl;
    g=10;
    cout<<"value of g when g=10 if g-- :" <<g--<<endl;
    g=10;
    int f = g++;
    cout<<"value of f when f = g++ :" <<f << "and value of g:"<<g<<endl;
      g=10;
    f = g--;
    cout<<"value of f when f = g-- :" <<f << "and value of g:"<<g<<endl;
    
    
      // Pre Increment Operator 
     g=6;
    cout<<"value of g when g=6 if ++g :" <<++g<<endl;
    g=10;
    cout<<"value of g when g=10 if --g :" <<--g<<endl;
    
    int k;
    g=5;
    k=++g;
    cout<<"value of k when k=++g :" <<k << "and value of g:"<<g<<endl;
    g=5;
    k=--g;
    cout<<"value of k when k=--g :" <<k << "and value of g:"<<g<<endl;
    
}