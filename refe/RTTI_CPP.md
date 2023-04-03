# RTTI (Run-Time Type Information) in C++

In C++, RTTI (Run-time type information) is a mechanism that exposes information about an object’s data type at runtime and is available only for the classes which have at least one virtual function. It allows the type of an object to be determined during program execution.

Runtime Casts

The runtime cast, which checks that the cast is valid, is the simplest approach to ascertain the runtime type of an object using a pointer or reference. This is especially beneficial when we need to cast a pointer from a base class to a derived type. When dealing with the inheritance hierarchy of classes, the casting of an object is usually required. There are two types of casting: 

Upcasting: When a pointer or a reference of a derived class object is treated as a base class pointer.
Downcasting: When a base class pointer or reference is converted to a derived class pointer.
Using ‘dynamic_cast‘: In an inheritance hierarchy, it is used for downcasting a base class pointer to a child class. On successful casting, it returns a pointer of the converted type and, however, it fails if we try to cast an invalid type such as an object pointer that is not of the type of the desired subclass.


For example, dynamic_cast uses RTTI and the following program fails with the error “cannot dynamic_cast `b’ (of type `class B*’) to type `class D*’ (source type is not polymorphic) ” because there is no virtual function in the base class B.

```
// C++ program to demonstrate
// Run Time Type Identification(RTTI)
// but without virtual function

#include <iostream>
using namespace std;

// initialization of base class
class B {};

// initialization of derived class
class D : public B {};

// Driver Code
int main()
{
	B* b = new D; // Base class pointer
	D* d = dynamic_cast<D*>(b); // Derived class pointer
	if (d != NULL)
		cout << "works";
	else
		cout << "cannot cast B* to D*";
	getchar(); // to get the next character
	return 0;
}

```

Adding a virtual function to the base class B makes it work.

```
// C++ program to demonstrate
// Run Time Type Identification successfully
// With virtual function

#include <iostream>
using namespace std;

// Initialization of base class
class B {
	virtual void fun() {}
};

// Initialization of Derived class
class D : public B {
};

// Driver Code
int main()
{
	B* b = new D; // Base class pointer
	D* d = dynamic_cast<D*>(b); // Derived class pointer
	if (d != NULL)
		cout << "works";
	else
		cout << "cannot cast B* to D*";
	getchar();
	return 0;
}

```