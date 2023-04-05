#pragma once
#include <iostream>

void exception()
{
	try
	{
		// your code here
		// throw an exception if there is an error
	}
	catch (type_of_the_exception e)
	{
		// catch and handle the exception
	}



}


void exception_trycatch()
{
	try
	{
		std::cout << "Let's assume some error occurred in our program." << '\n';
		std::cout << "We throw an exception of type int, for example." << '\n';
		std::cout << "This signals that something went wrong." << '\n';
		throw 123;	// throw an exception if there is an error
	}
	catch (int e)
	{
		// catch and handle the exception
		std::cout << "Exception raised!." << '\n';
		std::cout << "The exception has a value of " << e << '\n';
	}
}

void exception_string()
{
	try
	{
		std::cout << "Let's assume some error occured in our program." << '\n';
		std::cout << "We throw an exception of type string, for example." << '\n';
		std::cout << "This signals that something went wrong." << '\n';
		throw std::string{ "Some string error" };	// throw an exception if there is an error
	}
	catch (const std::string& e)
	{
		// catch and handle the exception
		std::cout << "String exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}
}

void multiple_exception()
{
	try
	{
		throw 123;
		// the following will not execute as
		// the control has been transferred to a catch clause
		throw std::string{ "Some string error" };
	}
	catch (int e)
	{
		std::cout << "Integer exception raised! The value is " << e << '\n';
	}
	catch (const std::string& e)
	{
		// catch and handle the exception
		std::cout << "String exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}
}

void multiple_exception_tryblock()
{
	try
	{
		bool someflag = true;
		bool someotherflag = true;
		std::cout << "We can have multiple throw exceptions." << '\n';
		if (someflag)
		{
			std::cout << "Throwing an int exception." << '\n';
			throw 123;
		}
		if (someotherflag)
		{
			std::cout << "Throwing a string exception." << '\n';
			throw std::string{ "Some string error" };
		}
	}
	catch (int e)
	{
		// catch and handle the exception
		std::cout << "Integer exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}

	catch (const std::string& e)
	{
		// catch and handle the exception
		std::cout << "String exception raised!." << '\n';
		std::cout << "The exception has a value of: " << e << '\n';
	}
}

