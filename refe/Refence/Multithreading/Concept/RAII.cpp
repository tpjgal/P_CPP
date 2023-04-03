#include <iostream>
#include <thread>

using namespace std;

void foo(int i) 
{
	cout << "foo(" << i << ")\n";
}

struct task_struct
{
	int& i;
	task_struct(int& ii):i(ii){ "task_struct constructor\n";}
	void operator()()
	{
		cout << "task_struct::operator()\n";
		for(unsigned j = 0; j < 10; ++j)
		{
			foo(i);
		}
	}
};

class thread_RAII
{
	thread& t;
public:
	thread_RAII(thread& th):t(th)
	{
		cout << "thread_RAII constructor\n";
	}

	~thread_RAII()
	{
		if(t.joinable()) 
		{
			cout << "if joinable(), then t.join()\n";
			t.join();
		}
		cout << "thread_RAII destructor\n";
	}

private:
	// copy constructor
	thread_RAII(const thread_RAII& thr) ;

	// copy-assignment operator
	thread_RAII& operator=(const thread_RAII& thr);
};

void current_thread_task()
{
	cout << "do something in current_thread_task()\n";
};

void A_function_creating_a_thread_within()
{
	int state = 99;
	task_struct task(state);
	cout << "launching a thread\n";
	thread t(task);
	cout << "make an instance of thead_RAII\n";
	thread_RAII raii(t);
	cout << "call current_thread_task()\n";
	current_thread_task();
}

int main()
{
	A_function_creating_a_thread_within();
	return 0;
}

/*

launching a thread
make an instance of thead_RAII
thread_RAII constructor
call current_thread_task()
do something in current_thread_task()
if joinable(), then t.join()
task_struct::operator()
foo(99)
foo(99)
foo(99)
foo(99)
foo(99)
foo(99)
foo(99)
foo(99)
foo(99)
foo(99)
thread_RAII destructor

*/