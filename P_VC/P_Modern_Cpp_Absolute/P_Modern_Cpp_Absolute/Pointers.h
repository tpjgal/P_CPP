#pragma once

#include <iostream>

void pointers()
{
	int x = 123;
	int* p = &x;
	*p = 456; // change the value of pointed-to object
	std::cout << "The value of x is: " << x;
}

void ptr_to_obj()
{
	double d = 3.14;
	double* p = &d;
	std::cout << "The value of the pointed-to object is: " << *p;
}
