#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>
#include <unordered_set>
#include <unordered_map>
#include <utility>
#include <tuple>




void automatictype()
{
	auto mychar = 'A';
	auto myint = 123 + 456;
	auto mydouble = 456.789;
}

void initilizer_list()
{
	int x{ 123 };
	int y = { 456 };
	double d{ 3.14 };
}

void narrowing_conversion()
{
	int x = { 123.45 }; // Error, does not allowing narrowing
}

// #include <vector>

void contatiner_initiliazer_list()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
}

//#include <iostream>
//#include <vector>
//#include <algorithm>

void lambda_expression()
{
	std::vector<int> v = { 1, 2, 3, 4, 5 };
	auto counteven = std::count_if(std::begin(v), std::end(v),
		[](int x) {return x % 2 == 0; }); // lambda expression
	std::cout << "The number of even vector elements is: " << counteven;
}

void constexpr_specifier()
{
	constexpr int n = 123;			//OK, 123 is a compile-time constant expression
	constexpr double d = 456.78;	//OK, 456.78 is a compile-time constant expression
	constexpr double d2 = d;		//OK, d is a constant expression
	int x = 123;
	constexpr int n2 = x;			//compile-time error
	// the value of x is not known during compile-time
}

enum class MyEnum
{
	myfirstvalue,
	mysecondvalue,
	mythirdvalue
};

void scoped_enumerators()
{
	MyEnum myenum = MyEnum::myfirstvalue;
}


//#include <iostream>
//#include <memory>

void smart_pointers()
{
	std::unique_ptr<int> p(new int{ 123 });
	std::cout << *p;
} // p goes out of scope here, the memory gets deallocated, the object gets destroyed

void shared_ptr()
{
	std::shared_ptr<int> p1(new int{ 123 });
	std::shared_ptr<int> p2 = p1;
	std::shared_ptr<int> p3 = p1;
} // when the last shared pointer goes out of scope, the memory gets deallocated


//#include <iostream>
//#include <unordered_set>

void unordered_set()
{
	std::unordered_set<int> myunorderedset = { 1, 2, 5, -4, 7, 10 };
	for (auto el : myunorderedset)
	{
		std::cout << el << '\n';
	}
}

//#include <iostream>
//#include <unordered_set>

void unorderset_mem_fun()
{
	std::unordered_set<int> myunorderedset = { 1, 2, 5, -4, 7, 10 };
	myunorderedset.insert(6); // insert a single value
	myunorderedset.insert({ 8, 15, 20 }); // insert multiple values
	for (auto el : myunorderedset)
	{
		std::cout << el << '\n';
	}
}


void delete_unorder_set()
{
	std::unordered_set<int> myunorderedset = { 1, 2, 5, -4, 7, 10 };
	myunorderedset.erase(-4); // erase a single value
	for (auto el : myunorderedset)
	{
		std::cout << el << '\n';
	}
}


//#include <iostream>
//#include <unordered_map>

void unordered_map()
{
	std::unordered_map<char, int> myunorderedmap = { {'a', 1}, {'b', 2}, {'c', 5} };
	for (auto el : myunorderedmap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}

//#include <iostream>
//#include <unordered_map>

void unorder_map_mem_fun()
{
	std::unordered_map<char, int> myunorderedmap = { {'a', 1}, {'b', 2}, {'c', 5} };
	myunorderedmap.insert({ 'd', 10 });

	for (auto el : myunorderedmap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}

//#include <iostream>
//#include <unordered_map>

void unorder_map_access_element()
{
	std::unordered_map<char, int> myunorderedmap = { {'a', 1}, {'b', 2}, {'c', 5} };
	myunorderedmap['b'] = 4; // key exists, change the value
	myunorderedmap['d'] = 10; // key does not exist, insert the new element
	for (auto el : myunorderedmap)
	{
		std::cout << el.first << ' ' << el.second << '\n';
	}
}

//#include <iostream>
//#include <utility>
//#include <tuple>

void tuple()
{
	std::tuple<char, int, double> mytuple = { 'a', 123, 3.14 };
	std::cout << "The first element is: " << std::get<0>(mytuple) << '\n';
	std::cout << "The second element is: " << std::get<1>(mytuple) << '\n';
	std::cout << "The third element is: " << std::get<2>(mytuple) << '\n';
}

void maketuple()
{
	auto mytuple = std::make_tuple<int, double, std::string>(123, 3.14, "Hello World.");
	std::cout << "The first tuple element is: " << std::get<0>(mytuple) << '\n';
	std::cout << "The second tuple element is: " << std::get<1>(mytuple) << '\n';
	std::cout << "The third tuple element is: " << std::get<2>(mytuple) << '\n';
}

void static_assert_ex()
{
	constexpr int x = 123;
	static_assert(x == 456, "The constexpr value is not 456.");
}



// Introduction to COncurrency


#include <thread>

void function1()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function1." << '\n';
	}
}

void thread_ex()
{
	std::thread t1{ function1 }; // create and start a thread
	t1.join(); // wait for the t1 thread to finish
}

void function2(const std::string& param)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function1, " << param << '\n';
	}
}

void thread_Object()
{
	std::thread t1{ function2, "Hello World from a thread." };
	t1.join();
}

void function3()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function1." << '\n';
	}
}

void function4()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function2." << '\n';
	}
}

// two threads executing two different functions concurrently / simultaneously
void two_diff_fun_concurrently()
{
	std::thread t1{ function3 };
	std::thread t2{ function4 };

	t1.join();
	t2.join();
}

void myfunction(const std::string& param)
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Executing function from a " << param << '\n';
	}
}

void multiple_thread_same_fun()
{
	std::thread t1{ myfunction, "Thread 1" };
	std::thread t2{ myfunction, "Thread 2" };

	t1.join();
	t2.join();
}

//#include <thread>
//#include <string>
#include <mutex>

std::mutex m; // will guard std::cout

void myfunction2(const std::string& param)
{
	for (int i = 0; i < 10; i++)
	{
		m.lock();
		std::cout << "Executing function from a " << param << '\n';
		m.unlock();
	}
}

void mutex_ex()
{
	std::thread t1{ myfunction2, "Thread 1" };
	std::thread t2{ myfunction2, "Thread 2" };

	t1.join();
	t2.join();
}

std::mutex m; // will guard std::cout

void myfunction3(const std::string& param)
{
	for (int i = 0; i < 10; i++)
	{
		std::lock_guard<std::mutex> lg(m);
		std::cout << "Executing function from a " << param << '\n';
	} // lock_guard goes out of scope here and unlocks the mutex
}

void mutex_guard()
{
	std::thread t1{ myfunction3, "Thread 1" };
	std::thread t2{ myfunction3, "Thread 2" };

	t1.join();
	t2.join();
}

// Deleted and defaulted functions 

class MyClass
{

};

void default_constrcutor()
{
	MyClass o; // OK, there is an implicitly defined default constructor
}

class MyClass1
{
public:
	MyClass1(const MyClass1& other)
	{
		std::cout << "Copy constructor invoked.";
	}
};

void copy_constructor()
{
	MyClass1 o; // Error, there is no default constructor
}


class MyClass2
{
public:
	MyClass2() = default; // defaulted member function
	MyClass2(const MyClass2& other)
	{
		std::cout << "Copy constructor invoked.";
	}
};

void default_mem_fun()
{
	MyClass2 o; // Now OK, the defaulted default constructor is there
	MyClass2 o2 = o; // Invoking the copy constructor
}


class MyClass3
{
public:
	MyClass3()
	{
		std::cout << "Default constructor invoked.";
	}
	MyClass3(const MyClass3& other) = delete; // delete the copy constructor
	MyClass3& operator=(const MyClass3& other) = delete; // delete the copy assignment operator
};

void default_constructor_invoked()
{
	MyClass3 o; // OK
	MyClass3 o2 = o; // Error, a call to deleted copy constructor
	MyClass3 o3;
	o3 = o; // Error, a call to deleted copy assignment operator
}


// Type Aliases 

//#include <string>
//#include <vector>

using MyInt = int;
using MyString = std::string;
using MyVector = std::vector<int>;

void typealiases()
{
	MyInt x = 123;
	MyString s = "Hello World";
	MyVector v = { 1, 2, 3, 4, 5 };
}