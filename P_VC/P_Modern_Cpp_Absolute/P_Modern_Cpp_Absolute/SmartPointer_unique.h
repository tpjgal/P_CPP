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

void simple_unique_ptr()
{
	std::unique_ptr<int> p = std::make_unique<int>(123);
	std::cout << "The value of a pointed-to object is: " << *p << '\n';
}



// #include <memory>

class MyClass
{
private:
	int x;
	double d;
public:
	MyClass(int xx, double dd)
		: x{ xx }, d{ dd }
	{}
	void printdata()
	{
		std::cout << "Data members values are: " << x << " and: " << d;
	}
};

void unique_ptr_obj_class()
{
	std::unique_ptr<MyClass> p = std::make_unique<MyClass>(123, 456.789);
	p->printdata();
}

class BaseClass
{
public:
	virtual void dowork() = 0;
	virtual ~BaseClass() {}
};

class DerivedClass : public BaseClass
{
public:
	void dowork() override
	{
		std::cout << "Do work from a DerivedClass." << '\n';
	}
};

void simple_polymorphism()
{
	std::unique_ptr<BaseClass> p = std::make_unique<DerivedClass>();
	p->dowork();
} // p1 goes out of scope here


class BaseClass
{
public:
	virtual void dowork() = 0;
	virtual ~BaseClass() {}
};

class DerivedClass : public BaseClass
{
public:
	void dowork() override
	{
		std::cout << "Do work from a DerivedClass." << '\n';
	}
};

class SecondDerivedClass : public BaseClass
{
public:
	void dowork() override
	{
		std::cout << "Do work from a SecondDerivedClass." << '\n';
	}
};

void polymorphism_II()
{
	std::unique_ptr<BaseClass> p = std::make_unique<DerivedClass>();
	p->dowork();

	std::unique_ptr<BaseClass> p2 = std::make_unique<SecondDerivedClass>();
	p2->dowork();
} // p1 and p2 go out of scope here