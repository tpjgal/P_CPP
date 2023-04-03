#include <iostream>
#include <thread>

void foo() { std::cout << "foo()\n"; }
void bar() { std::cout << "bar()\n"; }

int main()
{
	std::thread t([]{
		        foo();
			     bar();						 
	                }
	             );
	return 0;
}

/*

terminate called without an active exception
*/