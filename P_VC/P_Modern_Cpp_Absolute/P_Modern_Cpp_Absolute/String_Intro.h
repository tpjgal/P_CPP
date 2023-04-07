#pragma once
#include <iostream>
#include <string>

void string_basics()
{
	std::string s = "Hello World.";
	std::cout << s;
}

void string_concatenating()
{
	std::string s1 = "Hello ";
	std::string s2 = "World.";
	std::string s3 = s1 + s2;
	std::cout << s3;
}

void string_access()
{
	std::string s = "Hello World.";
	char c1 = s[0];		// 'H'
	char c2 = s.at(0);	// 'H';

	char c3 = s[6];		// 'W'
	char c4 = s.at(6);	// 'W';

	std::cout << "First character: " << c1 << ", sixth character: " << c3;
}

void string_compare()
{
	std::string s1 = "Hello";
	std::string s2 = "World.";
	if (s1 == s2)
	{
		std::cout << "The strings are equal.";
	}
	else
	{
		std::cout << "The strings are not equal.";
	}
}

void string_input()
{
	std::string s;
	std::cout << "Please enter a string: ";
	std::getline(std::cin, s);
	std::cout << "You entered: " << s;
}

void pointer_to_string()
{
	std::string s = "Hello World.";
	std::cout << s.c_str();
}

void substring()
{
	std::string s = "Hello World.";
	std::string mysubstring = s.substr(6, 5);
	std::cout << "The substring value is: " << mysubstring;
}

void finding_substring()
{
	std::string s = "This is a Hello World string.";
	std::string stringtofind = "Hello";
	std::string::size_type found = s.find(stringtofind);
	if (found != std::string::npos)
	{
		std::cout << "Substring found at position: " << found;
	}
	else
	{
		std::cout << "The substring is not found.";
	}
}

void finding_single_character()
{
	std::string s = "Hello C++ World.";
	char c = 'C';
	auto characterfound = s.find(c);
	if (characterfound != std::string::npos)
	{
		std::cout << "Character found at position: " << characterfound <<
			'\n';
	}
	else
	{
		std::cout << "Character was not found." << '\n';
	}
}
void string_ex1()
{
	std::string s = "Hello World.";
	std::cout << s;
}

void string_ex2()
{
	std::string s = "Hello ";
	s += "World.";
	std::cout << s;
}

void string_ex3()
{
	std::string s = "Hello";
	char c = '!';
	s += c;
	std::cout << s;
}

void string_ex4()
{
	std::string s1 = "Hello ";
	std::string s2 = "World.";
	std::string s3 = s1 + s2;
	std::cout << s3;
}

void string_ex5()
{
	std::string s = "Hello World.";
	char c1 = s[0];		// 'H'
	char c2 = s.at(0);	// 'H';

	char c3 = s[6];		// 'W'
	char c4 = s.at(6);	// 'W';
}

void string_ex6()
{
	std::string s1 = "Hello";
	if (s1 == "Hello")
	{
		std::cout << "The string is equal to \"Hello\"";
	}
}

void string_ex7()
{
	std::string s1 = "Hello";
	std::string s2 = "World.";
	if (s1 == s2)
	{
		std::cout << "The strings are equal.";
	}
	else
	{
		std::cout << "The strings are not equal.";
	}
}

void string_ex8()
{
	std::string s;
	std::cout << "Please enter a string: ";
	std::getline(std::cin, s);
	std::cout << "You entered: " << s;
}

void string_ex9()
{
	std::string s = "Hello World.";
	std::cout << s.c_str();
}