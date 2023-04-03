#include<iostream>
using namespace std;

class Baseclass              // Baseclass
{
  public:
  
  virtual~Baseclass()=0;    // pure virtual function decleartion
};

Baseclass::~Baseclass()      // virtual function destructor
{
    cout<<"Base Class destructor"<<endl;
}
class Derivedclass : public Baseclass   // Derivedclass 
{
    public:
    
    Derivedclass()        // Derivedclass Constructor 
    {
        cout<<"Derivedclass"<<endl;
    }
    ~Derivedclass()      // Derivedclass destructor
    {
        cout<<"Derivedclass destructor"<<endl;
    }
};


int main()
{
    Derivedclass *d =new Derivedclass();    // object created 
    Baseclass *b=d;             // object inilized
    delete b;                 // delete 
}