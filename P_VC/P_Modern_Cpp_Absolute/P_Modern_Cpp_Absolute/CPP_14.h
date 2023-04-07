#pragma once
#include <iostream>



void binary_literals()
{
	int x = 10;
	int y = 0xA;
	int z = 012;
}

void binary_form()
{
	int x = 0b101010;
}
void binaryform()
{
	int x = 0b1010;
}


void digit_separators()
{
	int x = 100'000'000;
}

auto myintfn() // integer
{
	return 123;
}

auto mydoublefn() // double
{
	return 3.14;
}

void auto_fun()
{
	auto x = myintfn(); // int
	auto d = mydoublefn(); // double
}

void generic_lambdas()
{
	auto mylambda = [](auto p) {std::cout << "Lambda parameter: " << p << '\n'; };
	mylambda(123);
	mylambda(3.14);
}


#include <memory>

class MyClass
{
private:
	int x;
	double d;
public:
	MyClass(int xx, double dd)
		: x{ xx }, d{ dd } {}
	void printdata() { std::cout << "x: " << x << ", d: " << d; }
};

void make_unique_ex()
{
	auto p = std::make_unique<MyClass>(123, 456.789);
	p->printdata();
}