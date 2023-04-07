#pragma once

import mymodule;

void mymodule1()
{
	int x = myfunction();
}


// main.cpp

import mymodule2;

void mymodule2()
{
	int x = MyModule::myfunction();
}

export module mymodule;

export int myfunction() { return 123; }


// mymodule2.cpp:
export module mymodule2;

namespace MyModule
{
	export int myfunction() { return 123; }
}


// concepts 

#include <concepts>

template <typename T>
concept MustBeIncrementable = requires (T x) { x++; };

template<MustBeIncrementable T>
void myfunction(T x)
{
	x++;
	std::cout << x << '\n';
}

void concepts_ex()
{
	myfunction<char>(42); // OK
	myfunction<int>(123); // OK
	myfunction<double>(345.678); // OK
}



template <typename T>
concept MustBeIncrementable = requires (T x) { x++; };

template <typename T>
concept SupportsModulo = requires (T x) { x % 2; };

template<typename T> requires MustBeIncrementable<T>&& SupportsModulo<T>
void myfunction(T x)
{
	std::cout << "The value conforms to both conditions: " << x << '\n';
}

void concepts_ex_2()
{
	myfunction<char>(123); // OK
	myfunction<int>(124); // OK
	myfunction<double>(345); // Error, a floating point number is not even nor odd
}

//#include <iostream>
//#include <vector>
#include <typeinfo>
#include <iostream>

void lambda_template()
{
	auto mylambda = []<typename T>(T param)
	{
		std::cout << typeid(T).name() << '\n';
	};
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	mylambda(v); // integer
	std::vector<double> v2 = { 3.14, 123.456, 7.13 };
	mylambda(v2); // double
}



void mychoice(int i)
{
	switch (i)
	{
	[[likely]] case 1:
		std::cout << "Likely to be executed.";
		break;
	[[unlikely]] case 2:
		std::cout << "Unlikely to be executed.";
		break;
	default:
		break;
	}
}

void likely_unlikely_attribute()
{
	mychoice(1);
}


void likely_unlikely_condition()
{
	bool choice = true;
	if (choice) [[likely]]
	{
		std::cout << "This statement is likely to be executed.";
	}
	else [[unlikely]]
	{
		std::cout << "This statement is unlikely to be executed.";
	}
}


// Ranges


#include <vector>
#include <algorithm>

void ranges_ex()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::sort(v.begin(), v.end());

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}

#include <ranges>


void ranges_without_iterators()
{
	std::vector<int> v = { 3, 5, 2, 1, 4 };
	std::ranges::sort(v);

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}

#include <algorithm>

void range_odd_range()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	auto oddnumbersview = v | std::views::filter([](int x) { return x % 2 == 1; });
	for (auto el : oddnumbersview)
	{
		std::cout << el << '\n';
	}
}

void range_filter()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	auto greaterthan2view = v | std::views::filter([](int x) { return x > 2; });
	for (auto el : greaterthan2view)
	{
		std::cout << el << '\n';
	}
}

void range_multiple_pipe()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };

	auto oddandgreaterthan2 = v | std::views::filter([](int x) { return x % 2 == 1; })
		| std::views::filter([](int x) { return x > 2; });
	for (auto el : oddandgreaterthan2)
	{
		std::cout << el << '\n';
	}
}

void range_reverse()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	std::ranges::reverse(v);
	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}

#include <span>

void span_ex()
{
	std::vector<int> v = { 1, 2, 3 };
	std::span<int> myintspan = v;
	myintspan[2] = 256;

	for (auto el : v)
	{
		std::cout << el << '\n';
	}
}

void span_ex_1()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	std::span<int, 5> myintspan = arr;
	myintspan[4] = 10;

	for (auto el : arr)
	{
		std::cout << el << '\n';
	}
}

#include <numbers>

void mathematical_constant()
{
	std::cout << "Pi: " << std::numbers::pi << '\n';
	std::cout << "e: " << std::numbers::e << '\n';
	std::cout << "log2(e): " << std::numbers::log2e << '\n';
	std::cout << "log10(e): " << std::numbers::log10e << '\n';
	std::cout << "ln(2): " << std::numbers::ln2 << '\n';
	std::cout << "ln(10): " << std::numbers::ln10 << '\n';
	std::cout << "sqrt(2): " << std::numbers::sqrt2 << '\n';
	std::cout << "sqrt(3): " << std::numbers::sqrt3 << '\n';
}


#warning "User-defined warning message."
#warning "Some diagnostics message."

void custom_warnnings()
{
	std::cout << "Custom warning messages issued without interrupting the compilation.";
}

void string_contains()
{
	std::string s = "Hello World!";
	if (s.contains("World"))
	{
		std::cout << "The string contains the given substring." << '\n';
	}
	else
	{
		std::cout << "The string does not contain the given substring." << '\n';
	}
}

#include <print>

void print_ex()
{
	std::print("Hello World.");
}

void print_ex_1()
{
	int x = 123;
	std::print("The value of x is {}.", x);
}

void print_ex_2()
{
	int x = 123;
	int y = 456;
	std::print("The x is {}, and the y is {}.", x, y);
}

