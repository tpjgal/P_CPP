#pragma once
#include <iostream>
#include <vector>

void VectorCapcity()
{
	std::vector<int>myvec = { 1,1,2,3,5,8 };

	std::cout << "Vector Size:" << myvec.size();
}


void Vector_Resize()
{
	std::vector<int> myvec = { 10,30,40,50 };

	for (auto i = myvec.begin(); i != myvec.end(); i++)
	{
		std::cout << *i;
	}


	myvec.resize(4);

	for (auto i = myvec.begin(); i != myvec.end(); ++i)
		std::cout << *i << "";

}