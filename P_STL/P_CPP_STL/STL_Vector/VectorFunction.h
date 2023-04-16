#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

void vector_fun()
{
	std::vector<int> myvec = { 10,30,40,50 };

	for (auto i = myvec.begin(); i < myvec.end(); i++)
	{
		std::cout << *i;
	}

	sort(myvec.begin(), myvec.end());

	for (auto i = myvec.begin(); i < myvec.end(); ++i)
	{
		std::cout << *i;
	}
}


void print_vector_elements()
{
	std::vector<int> v1;

	for (int i = 1; i <= 5; i++)
		v1.push_back(i + 2);

	for (auto i = v1.begin(); i != v1.end(); ++i)
		std::cout << *i << "";
}