#pragma once

void const_qualifier()
{
	const int n = 5;
}

void const_int_arr()
{
	const int n = 5;
	int arr[n] = { 10, 20, 30, 40, 50 };
}

void const_noupdate()
{
	const int n = 5;
	n++; // error, can’t modify a read-only object
}

void const_without_initialize()
{
	const int n;		// error, no initializer
	const int m = 123; // OK
}

void const_compiletime_errors()
{
	constexpr int n = 123;			//OK, 123 is a compile-time constant expression
	constexpr double d = 456.78;	//OK, 456.78 is a compile-time constant expression
	constexpr double d2 = d;		//OK, d is a constant expression
	int x = 123;
	constexpr int n2 = x;			//compile-time error
	// the value of x is not known during compile-time
}

void compile_const()
{
	constexpr int n = 123;			//OK, 123 is a compile-time constant expression
	constexpr double d = 456.78;	//OK, 456.78 is a compile-time constant expression
	constexpr double d2 = d;		//OK, d is a constant expression
	int x = 123;
	constexpr int n2 = x;			//compile-time error
	// the value of x is not known during compile-time
}

