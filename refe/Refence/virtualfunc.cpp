#include<iostream>
using namespace std;
class Base
{

public:

virtual void function1() {cout<<"Base :: function1()\n";};

virtual void function2() {cout<<"Base :: function2()\n";};

virtual ~Base(){};

};

class D1: public Base
{

public:
~D1(){};
virtual void function1() { cout<<"D1 :: function1()\n";};

};

class D2: public Base
{

public:
~D2(){};
virtual void function2() { cout<< "D2 :: function2\n";};

};

int main()
{

D1 *d = new D1;;
Base *b = d;
b->function1();
b->function2();
delete (b);
return (0);

}

/*
D1 :: function1()
Base :: function2()
*/

