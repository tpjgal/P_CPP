#pragma once
#include <iostream>
#include <memory>

void implicit_Conversion()
{
	char mychar = 64;
	int myint = 123;
	double mydouble = 456.789;
	bool myboolean = true;

	myint = mychar;
	mydouble = myint;
	mychar = myboolean;
}

void narrow_Conversion()
{
	int myint = 123;
	double mydouble = 456.789;

	myint = mydouble; // the decimal part is lost
}

void arithmetic_expression()
{
	char c1 = 10;
	char c2 = 20;

	auto result = c1 + c2; // result is of type int
}

void builtintype_boolean()
{
	char mychar = 64;
	int myint = 0;
	double mydouble = 3.14;
	bool myboolean = true;

	myboolean = mychar;	// true
	myboolean = myint;		// false
	myboolean = mydouble;	// true
}

void intptr_vptr()
{
	int x = 123;
	int* pint = &x;
	void* pvoid = pint;
}

void staticCast()
{
	int x = 123;
	int* pint = &x;
	void* pvoid = pint; // convert from int pointer
	int* pint2 = static_cast<int*>(pvoid); // cast a void pointer to int pointer
	std::cout << *pint2; // dereference a pointer
}

void array_ptr()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int* p = arr; // pointer to the first array element
	std::cout << *p;
}

void myfunction(int arg[])
{
	std::cout << arg;
}

void decay_ptr()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	myfunction(arr);
}

void myfunctiondptr(int arg[])
{
	std::cout << *arg;
}

void deref_ptr()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	myfunctiondptr(arr);
}

void explicit_conversion()
{
	auto myinteger = static_cast<int>(123.456);
}

//class MyBaseClass {
//public:
//	virtual ~MyBaseClass() {}
//};
//class MyDerivedClass : public MyBaseClass {};
//
//void explicit_dynamic_cast()
//{
//	MyBaseClass* base = new MyDerivedClass;
//	MyDerivedClass* derived = new MyDerivedClass;
//
//	// base to derived
//	if (dynamic_cast<MyDerivedClass*>(base))
//	{
//		std::cout << "OK. Convertible.\n";
//	}
//	else
//	{
//		std::cout << "Not convertible.\n";
//	}
//	// derived to base
//	if (dynamic_cast<MyBaseClass*>(derived))
//	{
//		std::cout << "OK. Convertible.\n";
//	}
//	else
//	{
//		std::cout << "Not convertible.\n";
//	}
//
//	delete base;
//	delete derived;
//}


class MyBaseClassre {
public:
	virtual ~MyBaseClassre() {}
};
class MyDerivedClass : public MyBaseClassre {};
class MyUnrelatedClass {};

void explicit_dynamic_cast_re()
{
	MyBaseClassre* base = new MyDerivedClass;
	MyDerivedClass* derived = new MyDerivedClass;
	MyUnrelatedClass* unrelated = new MyUnrelatedClass;

	// base to derived
	if (dynamic_cast<MyUnrelatedClass*>(base))
	{
		std::cout << "OK.\n";
	}
	else
	{
		std::cout << "Not convertible.\n";
	}
	// derived to base
	if (dynamic_cast<MyUnrelatedClass*>(derived))
	{
		std::cout << "OK.\n";
	}
	else
	{
		std::cout << "Not convertible.\n";
	}

	delete base;
	delete derived;
	delete unrelated;
}

void satic_cast_conv_ex()
{
	int x = 123;
	double d = 456.789;
	bool b = true;

	double doubleresult = static_cast<double>(x);
	std::cout << "Int to double: " << doubleresult << '\n';

	int intresult = static_cast<int>(d); // double to int
	std::cout << "Double to int: " << intresult << '\n';

	bool boolresult = static_cast<bool>(x); // int to bool
	std::cout << "Int to bool: " << boolresult << '\n';
}

