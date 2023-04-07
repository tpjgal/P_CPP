#pragma once
#include <iostream>


void assignement_operators()
{
	char mychar = 'c';	// define a char variable mychar
	mychar = 'd';		// assign a new value to mychar

	int x = 123;		// define an integer variable x
	x = 456;			// assign a new value to x
	int y = 789;		// define a new integer variable y
	y = x;				// assing a value of x to it
}

void arithmetic_operators()
{
    int x = 123;
    int y = 456;
    int result = x + y; // addition
    result = x - y; // subtraction
    result = x * y; // multiplication
    result = x / y; // division
    std::cout << "The result is: " << result << '\n';
}

void compound_assigned_operators()
{
	int x = 123;
	x += 10;	// the same as x = x + 10
	x -= 10;	// the same as x = x - 10
	x *= 2;		// the same as x = x * 2
	x /= 3;		// the same as x = x / 3
	std::cout << "The value of x is: " << x;
}

void increment_decrement_operator()
{
	int x = 123;
	x++;	// add 1 to the value of x
	++x;	// add 1 to the value of x
	--x;	// decrement the value of x by 1
	x--;	// decrement the value of x by 1
	std::cout << "The value of x is: " << x;
}

