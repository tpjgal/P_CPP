#pragma once
#include <iostream>
#include <vector>

// Initiliazlie Vector 

void init()
{
	std::vector<int> myvec = { 1,2,3,3,5 };
	
}

void push_back_fun()
{
	std::vector<int> v1;
	for (int i = 1; i <= 5; i++)
		v1.push_back(i + 1);

	/// <summary>
	/// Begin and End 
	/// </summary>
	for (auto i = v1.begin(); i != v1.end(); ++i)
		std::cout << *i << "";
	/// <summary>
	/// rbegin() and rend()
	/// </summary>
	for (auto itr = v1.rbegin(); itr != v1.rend(); ++itr)
		std::cout << *itr << "";
	/// <summary>
	/// cbegin() and cend()
	/// </summary>
	for (auto itc = v1.cbegin(); itc != v1.cend(); ++itc)
		std::cout << *itc << "";
	/// <summary>
	/// crbegin() and crend()
	/// </summary>
	for (auto icr = v1.crbegin(); icr != v1.crend(); ++icr)
		std::cout << *icr << "";
}