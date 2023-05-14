#include<iostream>
using namespace std;


#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>


class Box
{
public:
    Box()
    {
        cout << "constructor called" << endl;

    }
    ~Box()
    {
        cout << "Destructor is called" << endl;
    }
};

class Car
{
public:
    Car()
    {
        cout << "constructor called" << endl;

    }
    ~Car()
    {
        cout << "Destructor is called" << endl;

    }
};

int main()
{
	char c ='b';
    const char* variable;
    auto testing = new Car;
   // Car* obj=nullptr;
   // cout << static_cast<void*>(obj) << endl;
	std::cout << "test" << std::endl;

    Box* myBoxArray = new Box[4];

    //Car* mycar = new Car[5];
    std::cout << "Address" << endl;
   // cout <<hex<< &myBoxArray << endl;
    cout << "Car Address" << endl;
    //cout <<hex<< &mycar << endl;
   // cout << static_cast<void*>(mycar) << endl;
    cout << "Variable address:" << endl;
    cout << static_cast<void*>(myBoxArray) << endl;
    cout << static_cast<void*>(testing) << endl;
   // cout <<hex<< &variable << endl;
    variable = "testing";
   // cout << static_cast<void*>(obj) << endl;
 //  delete[] mycar;
   delete[] myBoxArray;
   delete testing;
   //delete[] variable;  // crash 
   //delete variable;   // crash 
   variable = nullptr;
   testing = nullptr;
   //cout << variable;
  // variable = "welocome";
  // cout << variable;
   cout << &variable << endl;
 //  cout << static_cast<void*>(obj) << endl;
//   cout <<"after delete mycar" << static_cast<void*>(mycar) << endl;
  // cout << static_cast<void*>(myBoxArray) << endl;
  // cout <<  (void*)c<< endl;
  // cout << (void*)variable << endl;
 //  cout << static_cast<void*>(obj) << endl;
   cout<<_CrtSetReportMode(_CRT_WARN, _CRTDBG_MODE_DEBUG)<<endl;
   cout << _CrtDumpMemoryLeaks() << endl;
   _CrtMemState s1;
   _CrtMemCheckpoint(&s1);
	std::cin >> c ;
}

