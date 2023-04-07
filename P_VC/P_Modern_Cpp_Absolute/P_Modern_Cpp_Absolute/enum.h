#pragma once
#include <iostream>

enum MyEnum
{
	myfirstvalue,
	mysecondvalue,
	mythirdvalue
};

void enum_type()
{
	MyEnum myenum = myfirstvalue;
	myenum = mysecondvalue; // we can change the value of our enum object
}

enum class MyEnum
{
	myfirstvalue,
	mysecondvalue,
	mythirdvalue
};

void enum_class()
{
	MyEnum myenum = MyEnum::myfirstvalue;
}