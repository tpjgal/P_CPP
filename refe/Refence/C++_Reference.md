# C++ References

C++ supports two types of variables:

An ordinary variable is a variable that contains the value of some type. For example, we create a variable of type int, which means that the variable can hold the value of type integer.
A pointer is a variable that stores the address of another variable. It can be dereferenced to retrieve the value to which this pointer points to.
There is another variable that C++ supports, i.e., references. It is a variable that behaves as an alias for another variable.

How to create a reference?

Reference can be created by simply using an ampersand (&) operator. When we create a variable, then it occupies some memory location. We can create a reference of the variable; therefore, we can access the original variable by using either name of the variable or reference. For example,

```
int a=10;
```  
Now, we create the reference variable of the above variable.

```
int &ref=a;  
```
The above statement means that 'ref' is a reference variable of 'a', i.e., we can use the 'ref' variable in place of 'a' variable.

C++ provides two types of references:

    References to non-const values
    References as aliases

References to non-const values

It can be declared by using & operator with the reference type variable.
```
#include <iostream>  
using namespace std;  
int main()  
{  
int a=10;  
int &value=a;  
std::cout << value << std::endl;  
return 0;  
}  

/*
Output

 10
*/
 ```


References as aliases

References as aliases is another name of the variable which is being referenced.

For example,
```
int a=10;   // 'a' is a variable.  
int &b=a; // 'b' reference to a.  
int &c=a; // 'c' reference to a.  
```

```
#include <iostream>  
using namespace std;  
int main()  
{  
int a=70; // variable initialization  
int &b=a;  
int &c=a;  
std::cout << "Value of a is :" <<a<< std::endl;  
std::cout << "Value of b is :" <<b<< std::endl;  
std::cout << "Value of c is :" <<c<< std::endl;  
return 0;}  


/*
Output

 Value of a is :70 
Value of b is :70 
Value of c is :70 
*/
```

Properties of References
The following are the properties of references:

Initializátion

It must be initialized at the time of the declaration.
```
#include <iostream>  
using namespace std;  
int main()  
{  
int a=10; // variable initialization  
int &b=a; // b reference to a  
std::cout << "value of a is " <<b<< std::endl;  
return 0;  
}  
```

int &b;  
&b=a;    
The above code will throw a compile-time error as 'a' is not assigned at the time of declaration.

Output

 value of a is 10 

 Reassignment


It cannot be reassigned means that the reference variable cannot be modified.
```
#include <iostream>  
using namespace std;  
int main()  
{  
int x=11; // variable initialization  
int z=67;  
int &y=x; // y reference to x  
int &y=z; // y reference to z, but throws a compile-time error.  
return 0;}  
```

In the above code, 'y' reference variable is referring to 'x' variable, and then 'z' is assigned to 'y'. But this reassignment is not possible with the reference variable, so it throws a compile-time error.

Compile-time error
```
main.cpp: In function 'int main()':  
main.cpp:18:9: error: redeclaration of 'int& y'  
int &y=z; // y reference to z, but throws a compile-time error.  
^  
main.cpp:17:9: note: 'int& y' previously declared here  
int &y=x; // y reference to x  
^  
```
Function Parameters

References can also be passed as a function parameter. It does not create a copy of the argument and behaves as an alias for a parameter. It enhances the performance as it does not create a copy of the argument.

Let's understand through a simple example.
```
#include <iostream>  
using namespace std;  
int main()  
{  
int a=9; // variable initialization  
int b=10; // variable initialization  
swap(a, b); // function calling  
std::cout << "value of a is :" <<a<< std::endl;  
std::cout << "value of b is :" <<b<< std::endl;  
return 0;  
}  
void swap(int &p, int &q) // function definition  
{  
int temp; // variable declaration  
temp=p;  
p=q;  
q=temp;  
}  
```
In the above code, we are swapping the values of 'a' and 'b'. We have passed the variables 'a' and 'b' to the swap() function. In swap() function, 'p' is referring to 'a' and 'q' is referring to 'b'. When we swap the values of 'p' and 'q' means that the values of 'a' and 'b' are also swapped.

Output

 value of a is :10 
value of b is :9 

```
References as shortcuts


With the help of references, we can easily access the nested data.
```
#include <iostream>  
using namespace std;  
struct profile  
{  
int id;  
};  
struct employee  
{  
profile p;  
};  
int main()  
{  
employee e;  
int &ref=e.p.id;  
ref=34;  
std::cout << e.p.id << std::endl;  
}  

```
In the above code, we are trying to access the 'id' of the profile struct of the employee. We generally access this member by using the statement e.p.id, but this would be a tedious task if we have multiple access to this member. To avoid this situation, we create a reference variable, i.e., ref, which is another name of 'e.p.id'.

Output

 34 
 ```