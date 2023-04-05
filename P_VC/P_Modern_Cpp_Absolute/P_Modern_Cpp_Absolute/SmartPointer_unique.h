#pragma once
#include <iostream>
#include <memory>

void unique_ptr()
{
	std::unique_ptr<int> p(new int{ 123 });
	std::cout << *p;
}

void unique_Ptr_make_unique()
{
	std::unique_ptr<int> p = std::make_unique<int>(123);
	std::cout << *p;
}

class MyClass
{
public:
	void printmessage()
	{
		std::cout << "Hello from a class.";
	}
};

void class_unique_ptr()
{
	std::unique_ptr<MyClass> p = std::make_unique<MyClass>();
	p->printmessage();
}

class MyBaseClass
{
public:
	virtual void printmessage()
	{
		std::cout << "Hello from a base class.";
	}
};

class MyderivedClass : public MyBaseClass
{
public:
	void printmessage()
	{
		std::cout << "Hello from a derived class.";
	}
};

void derived_unique_ptr()
{
	std::unique_ptr<MyBaseClass> p = std::make_unique<MyderivedClass>();
	p->printmessage();
}