#pragma once
#include <iostream>



//namespace MyNameSpace1
//{
//	namespace MyNameSpace2
//	{
//		namespace MyNameSpace3
//		{
//			// some code
//		}
//	}
//}
//
//namespace MyNameSpace1::MyNameSpace2::MyNameSpace3
//{
//	// some code
//}

void constexpr_ex()
{
	constexpr auto mylambda = [](int x, int y) { return x + y; };
	static_assert(mylambda(10, 20) == 30, "The lambda condition is not true.");
}

void constexpr_ex_1()
{
	auto mylambda = [](int x, int y) constexpr { return x + y; };
	static_assert(mylambda(10, 20) == 30, "The lambda condition is not true.");
}

void structured_bindings_1()
{
	int arr[] = { 1, 2, 3 };
	auto [myvar1, myvar2, myvar3] = arr;
}

void structured_binding_array()
{
	int arr[] = { 1, 2, 3 };
	auto [myvar1, myvar2, myvar3] = arr;
	myvar1 = 10;
	myvar2 = 20;
	myvar3 = 30;
	for (auto el : arr)
	{
		std::cout << el << ' ';
	}
}

void structred_binding_array_elements()
{
	int arr[] = { 1, 2, 3 };
	auto& [myvar1, myvar2, myvar3] = arr;
	myvar1 = 10;
	myvar2 = 20;
	myvar3 = 30;
	for (auto el : arr)
	{
		std::cout << el << ' ';
	}
}

// Filesystem 

#include <filesystem>

void filesystem_1()
{
	std::filesystem::path folderpath = "C:\\MyFolder\\";
	if (std::filesystem::exists(folderpath))
	{
		std::cout << "The path: " << folderpath << " exists.";
	}
	else
	{
		std::cout << "The path: " << folderpath << " does not exist.";
	}
}

void filesystem2()
{
	std::filesystem::path folderpath = "C:\\MyFolder\\myfile.txt";
	if (std::filesystem::exists(folderpath))
	{
		std::cout << "The file: " << folderpath << " exists.";
	}
	else
	{
		std::cout << "The file: " << folderpath << " does not exist.";
	}
}

void filesystem3()

{
	auto myfolder = "C:\\MyFolder\\";
	for (auto el : std::filesystem::directory_iterator(myfolder))
	{
		std::cout << el.path() << '\n';
	}
}

void filesystem4()
{
	auto myfolder = "MyFolder/";
	for (auto el : std::filesystem::directory_iterator(myfolder))
	{
		std::cout << el.path() << '\n';
	}
}

void filesystem5()
{
	auto myfolder = "C:\\MyFolder\\";
	for (auto el : std::filesystem::recursive_directory_iterator(myfolder))
	{
		std::cout << el.path() << '\n';
	}
}

void filesystem6()
{
	auto myfolder = "MyFolder/";
	for (auto el : std::filesystem::recursive_directory_iterator(myfolder))
	{
		std::cout << el.path() << '\n';
	}
}

#include <string_view>

void string_view_ex()
{
	std::string s = "Hello World.";
	std::string_view sw(s);
	std::cout << sw;
}

void string_view_constructor()
{
	std::string s = "Hello World.";
	std::string_view sw(s.c_str(), 5);
	std::cout << sw;
}

void string_view_mem_fun()
{
	std::string s = "Hello World";
	std::string_view sw(s);
	std::cout << sw.substr(0, 5);
}

#include <any>

void any_ex()
{
	std::any a = 345.678;
	std::any b = true;
	std::any c = 123;
}

void any_cast_ex()
{
	std::any a = 123;
	std::cout << "Any accessed as an integer: " << std::any_cast<int>(a) << '\n';
	a = 456.789;
	std::cout << "Any accessed as a double: " << std::any_cast<double>(a) << '\n';
	a = true;
	std::cout << "Any accessed as a boolean: " << std::any_cast<bool>(a) << '\n';
}


void has_value_ex()
{
	std::any a = 123;
	if (a.has_value())
	{
		std::cout << "Object a contains a value." << '\n';
	}

	std::any b{};
	if (b.has_value())
	{
		std::cout << "Object b contains a value." << '\n';
	}
	else
	{
		std::cout << "Object b does not contain a value." << '\n';
	}
}


union MyUnion
{
	char c;		// one byte
	int x;		// four bytes
	double d;	// eight bytes
};

void variant_union()
{
	MyUnion o;
	o.c = 'A';
	std::cout << o.c << '\n';
	// accessing o.x or o.d is undefined behavior at this point
	o.x = 123;
	std::cout << o.c;
	// accessing o.c or o.d is undefined behavior at this point
	o.d = 456.789;
	std::cout << o.c;
	// accessing o.c or o.x is undefined behavior at this point
}

#include <variant>

void variant_ex()
{
	std::variant<char, int, double> myvariant;
}

void variant_access_mem()
{
	std::variant<char, int, double> myvariant{ 'a' }; // variant now holds a char

	std::cout << std::get<0>(myvariant) << '\n'; // obtain a data member by index
	std::cout << std::get<char>(myvariant) << '\n'; // obtain a data member by type

	myvariant = 1024; // variant now holds an int
	std::cout << std::get<1>(myvariant) << '\n'; // by index
	std::cout << std::get<int>(myvariant) << '\n'; // by type

	myvariant = 123.456; // variant now holds a double
}

void variant_exception()
{
	std::variant<int, double> myvariant{ 123 }; // variant now holds an int
	std::cout << "Current variant: " << std::get<int>(myvariant) << '\n';

	try
	{
		std::cout << std::get<double>(myvariant) << '\n'; // exception is raised
	}
	catch (const std::bad_variant_access& ex)
	{
		std::cout << "Exception raised. Description: " << ex.what();
	}
}

