#pragma once
#include <iostream>


void booleantype()
{
	bool b = true;
}

void char_type()
{
	char c = 'a';
	std::cout << "The value of variable c is: " << c;
}

void int_type()
{
	int x = 123;
	int y = -256;
	std::cout << "The value of x is: " << x << ", the value of y is: " << y;
}

void double_type()
{
	double d = 3.14;
	std::cout << "The value of d is: " << d;
}

void long_type()
{
	unsigned long int x = 4294967295;
	std::cout << "The value of an unsigned long integer variable is: " << x;
}


void decleartion()
{
	char mychar;
	int myint;
	double mydouble;
}

void initialization()
{
	char mychar = 'a';
	int myint = 123;
	double mydouble = 456.78;
}

void new_initialization()
{
	char mychar{ 'a' };
	int myint{ 123 };
	double mydouble{ 456.78 };
	std::cout << "The value of a char variable is: " << mychar << '\n';
	std::cout << "The value of an int variable is: " << myint << '\n';
	std::cout << "The value of a double variable is: " << mydouble << '\n';
}

