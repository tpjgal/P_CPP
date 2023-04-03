#include<iostream>
using namespace std;

class Myclass           // Class Name 
{
      int a;             // by default private 
    public:             // Access Specifier
           int x, y;    // Data Member or field
           int c;
    Myclass()             // Constructor 
    {
        
        
    }
    
    ~Myclass()           // Destructor 
    {
        
    }
    
    void MyMethod()       // Member Function 
    {
        cout<<"MyMethod" <<endl;
    }
    
    void MyGetFun(int x)    // member function definition
    {
        cout<<x<<endl;
    }
    void MysecondMethod();      // member function decleration
    int GetFun(int x);          // member function decleration
};

void Myclass::MysecondMethod()               // member function definition in outside of the class
{
    cout<<"MysecondMethod from outside of the class" <<endl;
}
int Myclass::GetFun(int x)            // member function definition in outside of the class
{
    return x;
}
int main()
{
    Myclass myobj;           // Object created
    myobj.MyMethod();        // member called using object
    Myclass mysecobj;        // Multiple object created
    mysecobj.MysecondMethod();  // method called
    myobj.c=12;               // Initialize public variable 
   // myobj.a=10;              // error , Cannot Initialize private variable
    cout<<myobj.c;            // print the member value 
    cout<<endl;
    cout<<mysecobj.GetFun(15);  // passing value to function and function called 
    cout<<endl;
    myobj.MyGetFun(4);     // passing value to the function and function called
}
    

