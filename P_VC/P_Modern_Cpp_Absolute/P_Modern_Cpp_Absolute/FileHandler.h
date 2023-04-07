#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

void filestream()
{
	std::fstream fs{ "myfile.txt" };
}


void filestreamfs()
{
	std::fstream fs{ "myfile.txt" };
	std::string s;
	while (fs)
	{
		std::getline(fs, s); // read each line into a string
		std::cout << s << '\n';
	}
}

void readfromfile()
{
	std::fstream fs{ "myfile.txt" };
	char c;
	while (fs >> c)
	{
		std::cout << c;
	}
}

void nokipws()
{
	std::fstream fs{ "myfile.txt" };
	char c;
	while (fs >> std::noskipws >> c)
	{
		std::cout << c;
	}
}

void leftoperator()
{
	std::fstream fs{ "myoutputfile.txt", std::ios::out };
	fs << "First line of text." << '\n';
	fs << "Second line of text" << '\n';
	fs << "Third line of text" << '\n';
}

void iosapp()
{
	std::fstream fs{ "myoutputfile.txt", std::ios::app };
	fs << "This is appended text" << '\n';
	fs << "This is also an appended text." << '\n';
}

void filestreamleftoperator()
{
	std::fstream fs{ "myoutputfile.txt", std::ios::out };
	std::string s1 = "The first string.\n";
	std::string s2 = "The second string.\n";
	fs << s1 << s2;
}

//#include <sstream>
void stringstream()
{
	std::stringstream ss;
}

void stringstreamintialize()
{
	std::stringstream ss{ "Hello world." };
	std::cout << ss.str();
}

void stringstreamliteral()
{
	std::stringstream ss;
	ss << "Hello World.";
	std::cout << ss.str();
}

void stringstreammemeberfun()
{
	std::stringstream ss{ "Hello World from a string stream." };
	std::string s = ss.str();
	std::cout << s;
}

void insertdatastring()
{
	std::string s = "Hello World.";
	std::stringstream ss{ s };
	std::cout << ss.str();
}

void insertvalue()
{
	char c = 'A';
	int x = 123;
	double d = 456.78;
	std::stringstream ss;
	ss << c << x << d;
	std::cout << ss.str();
}

void inserttext()
{
	char c = 'A';
	int x = 123;
	double d = 456.78;
	std::stringstream ss;
	ss << "The char is: " << c << ", int is: " << x << " and double is: " << d;
	std::cout << ss.str();
}

void streamtoobject()
{
	std::string s = "A 123 456.78";
	std::stringstream ss{ s };
	char c;
	int x;
	double d;
	ss >> c >> x >> d;
	std::cout << c << ' ' << x << ' ' << d << ' ';
}
