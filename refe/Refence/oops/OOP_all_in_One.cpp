#include<iostream>
using namespace std;

/// Inheritance 
class BaseClass                   // Base class   
{
    private :
    friend void myfriend();       // Friend function Decleration. 
    
    public:
        
        int ba=55;
    protected:
        int bb=66;
    /*private:
	    int bc= 77; */
	    public:
    void bfunc()
    {
        cout<<"BaseClass " <<endl;
    }
    
    BaseClass() 
    {
        cout<<"BaseClass Constructor"<<endl;
    }
    ~BaseClass()
    {
        cout<<"Baseclass Destructor "<<endl;
    }
    
};
class SecondBaseclass
{
    public:
    SecondBaseclass()
    {
        cout<<"Second Base class Constructor." <<endl;
    }
    
    ~SecondBaseclass()
    {
        cout<<"Second Base class Destructor." <<endl;
    }
};




class MyClass  : public BaseClass       // Derived class 
{
    private:
    
  friend void myfriendfun(BaseClass);   // Friend Function Decleration.
    public:
        int x, y,z;     // Data Memeber 
        int *p;         // pointer memebr. 
    /// Constructor. 
    MyClass(int a, int b)   // Constructor parameter  // Constructor intilization.
    {
        x=a;
        y=b;
    }
    
   /* MyClass( int a, int b) : x(a), y(b)     // Constructor intilization.
    {
        
    }*/
    
   /* MyClass ()       // Default Constructor 
        {
            
        }*/
    MyClass (): z(5)        // constuctor intilization   // Multiple Constructor 
    {
        
    }
    
    void Mymethod()       // Member function definition
    {
           cout<< x+y <<endl;
          
    }
    
    MyClass (MyClass &i)    // copy consturctor    // Deep Copy 
    {
     x= i.x;
     p = new int;       // pointer decleration. 
     *p=*(i.p);         // pointer intilization. 
    }
    
    ~MyClass ()         // Destructor. 
    {
        cout<<"Destructor called"<<endl;
    }
  
    void myfunc();          // Function Decleration.
    MyClass( int a);        // Constrcutor Decleration.
   
};


MyClass::MyClass(int a)    // Constructor outside of the class. // Parametrized Constructor. 
{
    cout<<"Constructor Outside"<<endl;
    this->x=a;     // this pointer.
}

void MyClass::myfunc()         // Function definition outside of the class. 
{
    cout<< "Baseclass Members: "<< ba <<" and " <<bb<<endl;
}

void myfriend()              // Friend Function definition. 
{
    cout<<"Friend Function called" <<endl;
}
void myfriendfun(BaseClass b)
{
    cout<<"Friend function access data Member: " <<b.ba<<endl;
}

/// Friend class
class Friendclass;

/// Multiple Inheritance. 
class childclass: public BaseClass, public SecondBaseclass
{
    private:
    int numA;
    friend class Friendclass;    // Friend Class Decleration.
    public:
   childclass() : numA(22)
   {
       cout<<"Multiple Inheritance. Constructor " <<endl;
   }
   ~childclass()
   {
       cout<<"Multiple Inheritance. Destructor" <<endl;
   }
};


class Friendclass
{
    private:
      int numB;
    public:
        Friendclass() : numB(11)
        {     
            childclass objA;
            
            cout<<"Friendclass: "<<objA.numA+numB<<endl;
        }
    
};
// Multilevel Inheritance.
class Mysubclass : public MyClass  
{
    public:
    Mysubclass()
    
    {
        cout<<"Multilevel Inheritance Constructor"<<endl;
    }
    ~Mysubclass()
    
    {
        cout<<"Multilevel Inheritance Destructor"<<endl;
    }
    
    
};

class Polymor
{
    public:
    
    // Same function name but argument different 
  void func(int data)
  {
      cout<<data<<endl;
  }
    
    void func()
    {
        cout<<"function called"<<endl;
    }
};


class VDBaseClass                // Base Class
{
    public:
    
      VDBaseClass()             // Base Class constructor
      {
       cout<<"base class constructor - virtual destructor concept"<<endl;   
      }

   virtual ~ VDBaseClass()     // Base Class virtual Destructor 
   {
       cout<<"base class Virtual destructor"<<endl;
   }
};

class VDDerivedClass : public VDBaseClass    // Derived class inherits base class
{
  public:
      
      VDDerivedClass()            // DerivedClass constructor
      {
          cout<<"Derived class constructor - Virtual concept"<<endl;
      }
       ~VDDerivedClass()          // Derived class destructor
      {
          cout<<"Derived class destructor - Virtual concept" <<endl;
      }
};
int main ()
{
    MyClass myobj(23);        // object created
    cout<<"============================"<<endl;
    MyClass mysecobj(15);     // object created 
    
    cout<<myobj.x<<endl;
    cout<<mysecobj.x<<endl;
  cout<<"============================"<<endl;
    MyClass myobj1(4,5);      // object created and pass the value to the consturtor 
    myobj1.Mymethod();        // member function called
    MyClass mysecobj1;
        cout<<"Friend Function :"<<endl;
         cout<<"---------------------------"<<endl;
    
     myfriend();             // friend Function called. 
     myfriendfun(mysecobj1);  // friend function called and acceess data memeber.
   cout<<"============================"<<endl;
    cout<<mysecobj1.z<<endl;  // print the value for z 
   cout<<"============================"<<endl;
    myobj1.myfunc();
   /// Copy constuctor. 
   /// Note: Destructor not working for copy constructor. 
   
   /*
    MyClass mysecobj2 =mysecobj1;    // copy constuctor object intilization.
    mysecobj2.x=33;
    int j=44;
    mysecobj2.p=&j;
    cout<<"Invoke Copy Constrcutor value of x:"<<mysecobj2.x << " value of p : "<<*mysecobj2.p;
    */
        cout<<"Inheritance :"<<endl;
   cout<<"---------------------------"<<endl;
    childclass childobj;     // Multiple Inheritance Object. 
    cout<<"============================"<<endl;
    Mysubclass subobj;       // Multilevel Inheritance Object. 
    cout<<"============================"<<endl;
        cout<<"Friendclass :"<<endl;
     cout<<"---------------------------"<<endl;
    Friendclass friendobj;   // Friend Class Object.
    cout<<"============================"<<endl;
    /// Dynamic Memory Allocation. 
    MyClass *dynobj = new MyClass(100);   // Dynamic Object. 
    cout<<"Dynamic Memory Allocation :"<<endl;
    cout<<"---------------------------"<<endl;
    dynobj->myfunc();
    
    delete dynobj;               // Memory Released. 
    cout<<"============================"<<endl;
    
     Polymor pobj;
     cout<<"Function Overloading :"<<endl;
    cout<<"---------------------------"<<endl;
   
    pobj.func(5);   // funciton call
    pobj.func();    // function call
    cout<<"============================"<<endl;
    
    VDDerivedClass *d = new VDDerivedClass();     // objected created by using DerivedClass
                                  // delete 
    cout<<"Function Overloading :"<<endl;
    cout<<"---------------------------"<<endl;
    VDBaseClass *b = d;                        // base class pointer initilization.
    delete d; 
    cout<<"============================"<<endl;
    
    
}