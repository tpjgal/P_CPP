#pragma once
#include <iostream>

void standard_io()
{
	std::cout << "Please enter two numbers separated by a space and press enter: ";
	int x = 0;
	int y = 0;
	std::cin >> x >> y;
	std::cout << "You entered: " << x << " and " << y;
}


void multiple_Input()
{
	std::cout << "Please enter a char, an int and a double: ";
	char c;
	int x;
	double d;
	std::cin >> c >> x >> d;
	std::cout << "You entered: " << c << ", " << x << ", and " << d;
}