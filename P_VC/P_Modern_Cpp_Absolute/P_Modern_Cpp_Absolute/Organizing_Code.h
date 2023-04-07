#pragma once
#include <iostream>


#ifndef MY_HEADER_H
#define MY_HEADER_H

// header file source code
// goes here

#endif

namespace MyNameSpace
{
	int x;
	double d;
}

void namespace_one()
{
	MyNameSpace::x = 123;
	MyNameSpace::d = 456.789;
}

namespace MyNameSpace
{
	int x;
	double d;
}

using namespace MyNameSpace;

void namespace_two()
{
	x = 123;
	d = 456.789;
}

namespace MyNameSpace
{
	int x;
	double d;
}

namespace MyNameSpace
{
	char c;
	bool b;
}


void namespace_three()
{
	MyNameSpace::x = 123;
	MyNameSpace::d = 456.789;
	MyNameSpace::c = 'a';
	MyNameSpace::b = true;
}

namespace MyNameSpace
{
	int x;
}

namespace MySecondNameSpace
{
	int x;
}

void namespace_four()
{
	MyNameSpace::x = 123;
	MySecondNameSpace::x = 456;
	std::cout << "The 1st x is: " << MyNameSpace::x << ", the 2nd x is: " << MySecondNameSpace::x;
}

