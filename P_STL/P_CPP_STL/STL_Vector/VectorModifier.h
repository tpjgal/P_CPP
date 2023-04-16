#pragma once
#include <iostream>
#include <vector>

void VectorModifier()
{
	std::vector<int> myvec;

	myvec.assign(5, 10);

	for (int i = 0; i < myvec.size(); i++)
		std::cout << myvec[i] << "";

}


void ErasingVector()
{
	std::vector<int> myvec;

	for (int i = 0; i < myvec.size(); i++)
		std::cout << myvec[i];

	myvec.erase(myvec.begin());

	std::cout << "Vector size after erase: " << myvec.size();

	for (int i = 0; i < myvec.size(); i++)
		std::cout << myvec[i] << "";

}