#include <iostream>

using namespace std;
/// Mutable Storage Class.
class Myclass
{
    public:
    int x=0;
    static int z;         // static variable
    
    const int u= 12;          // constant variable 
    mutable int y;        // Mutable storage Class.
    
    //Myclass (int a=5, int b=6) : x(a),y(b){}
    Myclass()
    {
        
    }
};

int Myclass::z =13;
int main()
{
    const Myclass obj;     // Constant Object. 
    
    obj.y=78;             // Intizlization.
    //obj.x=75;           // Unable to Initilize. 
    cout<<obj.y<<endl;
    cout<<obj.x<<endl;
    cout<<obj.u<<endl;
   // cout<<obj.z<<endl;    // unable to prind static variable.
    // obj.z=56;         // unable to Initilize because static variable. 
   //  obj.u=34;          // unable to Initilize constant variable. 
  obj.y=68;
  cout<<obj.y<<endl;
    cout<<obj.x<<endl;
    cout<<obj.u<<endl;
    cout<<obj.z<<endl;
    return 0;
}
