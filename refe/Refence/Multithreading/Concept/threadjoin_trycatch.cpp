#include <iostream>
#include <thread>

using namespace std;

void foo(int i) { cout << "foo() i = " << i << endl; }

struct task_struct
{
	int& i;

	task_struct(int& ii):i(ii){ 
		cout << "task_struct constructor i = " << i << endl;
	}

	void operator()()
	{
		for(unsigned j = 0; j < INT_MAX; ++j)
		{
			cout << j << ": foo()\n";
			foo(i);
		}
	}
};

void current_thread_task() 
{ 
	cout << "try: current_thread_task()\n"; 
}


void A_function_creating_a_thread_within()
{
	int state = 99;
	task_struct task(state);

	std::thread t(task);

	try
	{
		current_thread_task();
	}
	catch(...)
	{
		cout << "catch(...)\n";
                t.join();
		throw;
	}
	t.join();
}

int main()
{
	A_function_creating_a_thread_within();
	cout << "END OF PROGRAM\n";
	return 0;
}

/*

task_struct constructor i = 99
try: current_thread_task()
0: foo()
foo() i = 99
1: foo()
foo() i = 99
2: foo()
foo() i = 99
3: foo()
foo() i = 99
4: foo()
foo() i = 99
5: foo()
foo() i = 99
END OF PROGRAM

*/
