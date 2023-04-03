# Virtual Function in C++

A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. 

Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
They are mainly used to achieve Runtime polymorphism
Functions are declared with a virtual keyword in base class.
The resolving of function call is done at runtime.

Rules for Virtual Functions

    Virtual functions cannot be static.
    A virtual function can be a friend function of another class.
    Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
    The prototype of virtual functions should be the same in the base as well as derived class.
    They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
    A class may have virtual destructor but it cannot have a virtual constructor.
    Compile time (early binding) VS runtime (late binding) behavior of Virtual Functions



```
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

```



```
// CPP program to illustrate
// concept of Virtual Functions

#include<iostream>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class\n";
	}

	void show()
	{
		cout << "show base class\n";
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class\n";
	}

	void show()
	{
		cout << "show derived class\n";
	}
};

int main()
{
	base *bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at runtime
	bptr->print();

	// Non-virtual function, binded at compile time
	bptr->show();
	
	return 0;
}

/*
print derived class
show base class
*/

```

Limitations of Virtual Functions:

    Slower: The function call takes slightly longer due to the virtual mechanism and makes it more difficult for the compiler to optimize because it does not know exactly which function is going to be called at compile time.

    Difficult to Debug: In a complex system, virtual functions can make it a little more difficult to figure out where a function is being called from.

Working of virtual functions (concept of VTABLE and VPTR)

As discussed here, if a class contains a virtual function then compiler itself does two things.

If object of that class is created then a virtual pointer (VPTR) is inserted as a data member of the class to point to VTABLE of that class. For each new object created, a new virtual pointer is inserted as a data member of that class.

Irrespective of object is created or not, class contains as a member a static array of function pointers called VTABLE. Cells of this table store the address of each virtual function contained in that class.


```
// CPP program to illustrate
// working of Virtual Functions
#include<iostream>
using namespace std;

class base {
public:
	void fun_1() { cout << "base-1\n"; }
	virtual void fun_2() { cout << "base-2\n"; }
	virtual void fun_3() { cout << "base-3\n"; }
	virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base {
public:
	void fun_1() { cout << "derived-1\n"; }
	void fun_2() { cout << "derived-2\n"; }
	void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
	base *p;
	derived obj1;
	p = &obj1;

	// Early binding because fun1() is non-virtual
	// in base
	p->fun_1();

	// Late binding (RTP)
	p->fun_2();

	// Late binding (RTP)
	p->fun_3();

	// Late binding (RTP)
	p->fun_4();

	// Early binding but this function call is
	// illegal (produces error) because pointer
	// is of base type and function is of
	// derived class
	// p->fun_4(5);
	
	return 0;
}
/*
base-1
derived-2
base-3
base-4
*/

```