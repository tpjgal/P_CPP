# Function Chaining in C++ (Call more than one function in a sequence )


1) This Simple program explain one of the use of this pointer in C++.
2) With the help of "this" pointer you can call as many as functions in a sequence.
3) This procedure is called function chaining

```
#include<iostream.h>
#include<conio.h>

class Test
{
	
public:
	
	Test Display(); // Function 1
	Test Show();    // Function 2
	Test Result();  // Function 3
	
};

Test Test::Display()
{
	cout<<"Function 1"<<endl;
	return *this;  // Return this pointer
}

Test Test::Show()
{
	cout<<"Function 2"<<endl;
	return *this;
}

Test Test::Result()
{
	cout<<"Result 3"<<endl;
	return *this;
}

void main()
{
	Test Obj;
	
	//Here i have called all the three function in a sequence.
	
	Obj.Display().Show().Result(); //This is called Function Chaining
	
	getch();
}
```




```
#include <iostream>
using namespace std;Correct should be:
class Test
{
    
public:
    Test() {};
    Test(Test& test);
    Test& Display(); // Function 1
    Test& Show();    // Function 2
    Test& Result();  // Function 3
};

Test::Test(Test& test) {
    cout<<"Test::Test(Test& test)\n";
}

Test& Test::Display()
{
    cout<<"Function 1"<<endl;
    return *this;  // Return this pointer
}

Test& Test::Show()
{
    cout<<"Function 2"<<endl;
    return *this;
}

Test& Test::Result()
{
    cout<<"Result 3"<<endl;
    return *this;
}

int main()
{
    Test Obj;
    
    //Here i have called all the three function in a sequence.    
    Obj.Display().Show().Result(); //This is called Function Chaining
}
 
 ```