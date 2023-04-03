#include<iostream>
#include<vector>
using namespace std;

class Myclass
{
    public: 
    
    Myclass()
    {
        
    }
    void fun()
    {
        cout<<"test";
    }
    
};

class Subclass
{
    public:
    
    static void abc(const Myclass& obj)    // static method.
    {
        cout<<"abc";
    }
};
int main()
{
    Myclass obj;
    obj.fun();
    Subclass::abc(obj);  // way to call another class method by passing object   // call another class method which is static method with out object called.
}