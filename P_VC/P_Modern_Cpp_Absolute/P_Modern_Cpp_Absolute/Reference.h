#pragma once
#include <iostream>

void simple_reference()
{
	int x = 123;
	int& y = x;
	x = 456;
	// both x and y now hold the value of 456
	y = 789;
	// both x and y now hold the value of 789
}


void reference_type_ex()
{
	double mydouble = 3.14;
	double& myreference = mydouble;
	myreference = 6.28;
	std::cout << "The values are: " << mydouble << " and " << myreference
		<< '\n';
	mydouble = 9.45;
	std::cout << "The values are: " << mydouble << " and " << myreference
		<< '\n';
}