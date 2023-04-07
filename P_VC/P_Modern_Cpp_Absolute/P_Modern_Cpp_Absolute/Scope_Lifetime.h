#pragma once
#include <iostream>

void Block_scope()
{
	int x = 123; // first x' scope begins here
	{
		int x = 456; // redefinition of x, second x' scope begins here
	} // block ends, second x' scope ends here
	  // the first x resumes here
} // block ends, scope of first x's ends here


void operator_new_delete()
{
	int* p = new int;
	*p = 123;
	std::cout << "The pointed-to value is: " << *p;
	delete p;
}

void subscript_operator()
{
	int* p = new int[3];
	p[0] = 1;
	p[1] = 2;
	p[2] = 3;
	std::cout << "The values are: " << p[0] << ' ' << p[1] << ' ' << p[2];
	delete[] p;
}