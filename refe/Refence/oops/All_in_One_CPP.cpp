#include<iostream>
#include <string.h>
using namespace std;

// Function Decleration. 
void func_a();
void func_b(int);
string func_c();
int func_d(int);
void func_e(int*);


void func_aArr(int [], int);
void func_bArr(int);
int main()
{
    // Data Types Decleration.
    int a;
    char b;
    float c;
    double d;
    bool e;
    string f;
    string name;
    // Data Type Intilization.
    a=5;
    b='c';
    c=1.44;
    d=1.33;
    e=true;
    f="test";
    string g= "hello program";
    
    
    // output.
    cout<< a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
    cout<<"your string is : "<<g<<endl;
    
    cout<<"enter you any number:";
    // input.
    cin >>a;
    cout<<"enter any character: ";
    cin>>b;
    cout<<"integer"<<a <<"character: "<<b <<endl;
    // Get Input String from User. 
    getline(cin,name); 
    std::cout << "Enter your name :" << std::endl;  
    getline(cin,name);
    
    
    // Type Casting 
    
    // Implicit 
      double dd;
      int aa= 6;
      dd= aa;
      cout<<"Implicit conversion: "<<dd<<endl;
      
    // Explicit 
       int aaa;
       double ddd=1.445;
      aaa = static_cast<int>(ddd);
      cout<<"Explict Conversion: "<<aaa<<endl;
   
   //Operator 
   int aaaa=15;
    int bbbb=10;
    int cccc;
    bool dddd;
   // Arithmetic Operator 
    
    cout<<"Addition: " <<aaaa+bbbb <<endl;     // 25
    cout<<"Subtraction: "<<aaaa-bbbb<<endl;    //5
    cout<<"Multiplication: "<<aaaa*bbbb<<endl;   //150
    cout<<"Division: "<<aaaa/bbbb<<endl;   // 1
    cout<<"Modulos:" <<aaaa %bbbb<<endl;   // 5
    
    // Assignment Operator 
    aaaa=bbbb;
    cout<<"Value of a: "<<aaaa<<endl;   // 10
    aaaa+=bbbb;
    cout<<"Value of a for a+=b: "<<aaaa<<endl;   // 20
    bbbb-=aaaa;
    cout<<"Value of b for b-=a: "<<bbbb<<endl;   //-10
    aaaa*=bbbb;
    cout<<"Value of a for a*=b: "<<aaaa<<endl;   //-200
    
    // Relational Operator 
    
    cccc= (aaaa==bbbb);
    dddd=(aaaa==bbbb);
    
    cout<<"Value of c for (a==b): "<<cccc<<endl;  // 0
    cout<<"Value of d fo r(a==b): "<<dddd<<endl;  // 0
   
     cccc= (aaaa>=bbbb);
    dddd=(aaaa>=bbbb);
    
    cout<<"Value of c for (a>=b): "<<cccc<<endl; // 0
    cout<<"Value of d fo r(a>=b): "<<dddd<<endl; // 0
    
     cccc= (aaaa<=bbbb);
    dddd=(aaaa<=bbbb);
    
    cout<<"Value of c for (a<=b): "<<cccc<<endl;  // 1
    cout<<"Value of d fo r(a<=b): "<<dddd<<endl;  // 1
    
    cccc= (aaaa!=bbbb);
    dddd=(aaaa!=bbbb);
    
    cout<<"Value of c for (a!=b): "<<cccc<<endl;  // 1
    cout<<"Value of d fo r(a!=b): "<<dddd<<endl;  // 1
        
    cccc= (aaaa<bbbb);
    dddd=(aaaa<bbbb);
    
    cout<<"Value of c for (a<b): "<<cccc<<endl;   // 1
    cout<<"Value of d fo r(a<b): "<<dddd<<endl;   // 1
    
     cccc= (aaaa>bbbb);
    dddd=(aaaa>bbbb);
    
    cout<<"Value of c for (a>b): "<<cccc<<endl;  // 0
    cout<<"Value of d fo r(a>b): "<<dddd<<endl;  // 0
    
    //Logical Operators
    aaaa=10;
    bbbb=6;
    // Logical AND
    cccc= (aaaa>5)&&(bbbb<5);
    cout<< "LOGICAL AND" <<endl;
    cout<<"Value of c for (a>5)&&(b<10): "<<cccc<<endl;  // 0
     cccc= (aaaa>5)&&(bbbb<10);
    cout<<"Value of c for (a>5)&&(b<10): "<<cccc<<endl;   // 1
    aaaa=1;
    cout<<"Value of c for (a>5)&&(b<10): "<<cccc<<endl;   // 1
    
    // logical OR
    cout<< "LOGICAL OR" <<endl;
    
    aaaa=10;
    bbbb=6;
     cccc= (aaaa>5)||(bbbb<10);
    cout<<"Value of c for (a>5)||(b<10): "<<cccc<<endl;   // 1
     aaaa=1;
    cccc= (aaaa>5)||(bbbb<5);
    cout<<"Value of c for (a>5)||(b<10): "<<cccc<<endl;   // 0
     bbbb=15;
     cccc= (aaaa>5)||(bbbb<10);
    cout<<"Value of c for (a>5)||(b<10): "<<cccc<<endl;   // 0
    
    // LOGICAL NOT 
    cout<< "LOGICAL NOT" <<endl;
    aaaa=5;
    bbbb=5;
    cccc= !(aaaa==bbbb);
    cout<<"Value of c for !(a==b): "<<cccc<<endl;   // 0
    aaaa=5;
    bbbb=5;
     cccc= (aaaa==bbbb);
    cout<<"Value of c for (a==b): "<<cccc<<endl;   // 1
    
    
    // BITWISE OPERATOR 
    cout<< "LOGICAL Operator " <<endl;
    aaaa=12;  // 00001100
    bbbb=25;  // 00011001
    cccc= a&b;   // 00001000  (8)
    cout<<"Bitwise AND : "<<cccc<<endl;       // 81
    cccc= aaaa|bbbb;  // 00011101  (29)
    cout<<"Bitwise OR : "<<cccc<<endl;       // 29
     cccc= aaaa^bbbb;  // 00010101  (21)
    cout<<"Bitwise XOR : "<<cccc<<endl;     // 21 
    
    cccc= ~(aaaa);
    cout<<"Bitwise Compliment : "<<cccc<<endl;   //-13
    
    cccc= aaaa<<1;
    cout<<"Bitwise left shit : "<<cccc<<endl;   //24
    cccc= aaaa>>1;
    cout<<"Bitwise right shit : "<<cccc<<endl;   //6
    
    
    // Sizof Operator 
    
    cout<<"Value of integer :"<< sizeof(int)<<endl;   //4
    cout<<"Value of Character :"<< sizeof(char)<<endl;  //1
    cout<<"Value of double :"<< sizeof(double)<<endl;  // 8
    cout<<"Value of long :"<< sizeof(long)<<endl;  // 8
    
    // Ternary Operator 
    
    string result;
    int gg= 5;
    result = (gg>5)? "True" : "False";   
    cout<< "Result: "<<result<<endl;   // False
    
    // Post Increment Operator 
    
    gg=6;
    cout<<"value of g when g=6 if g++ :" <<gg++<<endl;  //6  // 6
    gg=10;
    cout<<"value of g when g=10 if g-- :" <<gg--<<endl;  //10  // 10
    gg=10;
    int ff = gg++;
    cout<<"value of f when f = g++ :" <<ff << "and value of g:"<<gg<<endl;  //10 //11
      gg=10;
    ff = gg--;
    cout<<"value of f when f = g-- :" <<ff << "and value of g:"<<gg<<endl; // 10 // 9
    
    
      // Pre Increment Operator 
     gg=6;
    cout<<"value of g when g=6 if ++g :" <<++gg<<endl; //6 //7
    gg=10;
    cout<<"value of g when g=10 if --g :" <<--gg<<endl; //10  //9 
    
    int k;
    gg=5;
    k=++gg;
    cout<<"value of k when k=++g :" <<k << "and value of g:"<<gg<<endl;  //6  //6
    gg=5;
    k=--gg;
    cout<<"value of k when k=--g :" <<k << "and value of g:"<<gg<<endl;  //4   //4

    
    
    // Function 
    
    int aFn=5;
    string bFn;
    int cFn;
    
    func_a();      // Function call.
    func_b(aFn);   // Function call with argument.
 
    bFn=func_c();  // function call return type. 
    cout<<bFn<<endl;
    cFn= func_d(20);  // function call with argument and return type // pass by value.
    cout<<cFn<<endl;    // 20
    func_e(&aFn);    // passing reference. 
    cout<<endl;
   
   // Array 
   // 1D
   int aArr[10];     // Array Decleration.
   
   
   // Compile Intilization. 
   int bArr[3]={10,20,30};
   int cArr[]={40,80,120};
   int len; 
   len = sizeof (bArr)/sizeof(bArr[0]);       // Calculate the lenght of the array.
   
   int leng= sizeof(cArr)/sizeof(cArr[0]);
   cout<<"Array element: " <<bArr[2]<<endl;
   
   
   for(int iIn=0; iIn<len;iIn++)
   {
       cout<<"Array {"<<iIn<<"}:"<<bArr[iIn];
   }
   cout<<endl;
   
   // Run Time Intilization.
   cout<<"enter array:";
   for(int iIm=0;iIm<leng;iIm++)
   {
       cin>>aArr[iIm];                // Get Array Elements From User.
   }
   cout<<endl;
   
   for(int iIn=0;  iIn<leng;iIn++)
   {
       cout<<"Entered Array {"<<iIn<<"}:"<<aArr[iIn];
   }
   cout<<endl;
   
   // Passing Array to the function 
   
   func_aArr(cArr, leng);
   func_bArr(bArr[0]);
   
   
}

void func_a()      // Function withoutargument and not return type.
   {
        cout<<"Function Called without argument"<<endl; 
    }
   void func_b(int x)  // Function withargument and not return type.
   {
       cout<<"Argument :"<<x<<endl;
   }
   string func_c()  // Function withoutargument and return type.
   {
       return "funcion returning Thank you!!";
   }
   int func_d(int x)   // Function withargument and return type.
   {
       return x;
   }
   void func_e(int* x)  // Function reference Argument.
   {
       cout<<*x;   // 5
   }
   
   
   void func_aArr(int a[],int leng)
   {
       cout<<"Array passed to the function."<<endl;
       for(int iIn=0; iIn<leng;iIn++)
   {
       cout<<"Array {"<<iIn<<"}:"<<a[iIn];
       cout<<endl;
   }
   }
   
   void func_bArr(int a)
   {
    cout<< "Array element passed to the function:" << a<<endl;
   }
    