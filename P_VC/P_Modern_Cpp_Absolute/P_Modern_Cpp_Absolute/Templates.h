#pragma once
#include <iostream>

template <typename T>
void myfunction(T param)
{
	std::cout << "The value of a parameter is: " << param;
}

void functiontemplates()
{
	myfunction<int>(123);
	myfunction<double>(123.456);
	myfunction<char>('A');
}



template <typename T, typename U>
void myfunction(T t, U u)
{
	std::cout << "The first parameter is: " << t << '\n';
	std::cout << "The second parameter is: " << u << '\n';
}

void templates_parameters()
{
	int x = 123;
	double d = 456.789;
	myfunction<int, double>(x, d);
}

template <typename T>
class MyClass {
private:
	T x;
public:
	MyClass(T xx)
		:x{ xx }
	{
	}

	T getvalue()
	{
		return x;
	}
};

void template_class()
{
	MyClass<int> o{ 123 };
	std::cout << "The value of x is: " << o.getvalue() << '\n';

	MyClass<double> o2{ 456.789 };
	std::cout << "The value of x is: " << o2.getvalue() << '\n';
}

template <typename T>
class MyClass {
private:
	T x;
public:
	MyClass(T xx);
};

template <typename T>
MyClass<T>::MyClass(T xx)
	: x{ xx }
{
	std::cout << "Constructor invoked. The value of x is: " << x << '\n';
}

void template_argument()
{
	MyClass<int> o{ 123 };
	MyClass<double> o2{ 456.789 };
}


template <typename T>
void myfunction(T arg)
{
	std::cout << "The value of an argument is: " << arg << '\n';
}

template <>
// the template specialization code follows
void myfunction(int arg)
{
	std::cout << "This is a specialization for an int. The value is: " << arg << '\n';
}

void template_specialization()
{
	myfunction<char>('A');
	myfunction<double>(345.678);
	myfunction<int>(123); // invokes specialization
}

