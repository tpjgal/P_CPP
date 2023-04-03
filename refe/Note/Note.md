# C++ - *Prepared by : Esakki*

 1. [Fundamentals](#fundamentals)
     * [MemoryOrganization](#memory-organization)
     * [TypeQualifier&TypeModifier](#type-qulifier--type-modifier)
     * [TypeCasting&Typeconversion](#typecasting--typeconversion)
     * [StorageClass](#storage-class)
     * [Preprocessor](#preprocessor)
     * [Operators](#operators)
     * [ConditionalStatement](#conditional-statement)
     * [ControlStatement](#control-statement)
 2. [Function](#function)
    * [InlineFunction](#inline-function-in-c)
    * [AdvantagesofInlineFunction](#advantages-of-inline-function)
    * [DisadvantagesofInlineFunction](#disadvantages-of-inline-function)
 3. [Array](#array)
 4. [String](#string)
 5. [Pointer](#pointer)
 6. [DynamicMemoryAlloction](#dynamicmemoryallocaiton)
 7. [Template](#template)
 8. [STL](#stl)
 9. [Multithreading](#multithreading)
10. [DLL](#dll) 
11. [VC++](#vc) 
12. [C++11](#c-11)
13. [C++14](#c-14)
14. [C++ 17](#c-17)
15. [C++ 20](#c-20)
16. [Class,Object&Method](#classobjectmethod)
17. [StaticVariable](#static-variable)
18. [StaticFunction](#static-function)
19. [C++Static](#c-static)
20. [Constructor](#constructor)
21. [Destructor](#destructor)
22. [FriendFunction](#friend-function)
23. [Inheritance](#inheritance)
      * [Multilevel](#multilevel-inheritance)
24. [Polymoriphsm](#polymorphism)
25. [Abstraction](#abstraction)
26. [Interface](#interface)
27. [Encapsulation](#encapsulation)
28. [Aggregation](#aggregation)
29. [Reference](#reference)
30. [Exception](#exception)
31. [Thispointer](#this-pointer)
32. [SmartPointer](#smart-pointer)
33. [SOLID](#solid) 
34. [DesignPatter](#design-pattern)
35. [DataStructure](#data-structure)
36. [QT](#qt)
37. [MFC](#mfc)
38. [Gtest](#gtest)
39. [Gmock](#gmock)
40. [NativeUnitTest](#nativeunittest)
41. [C++CodingTestingStyleandGuideLines](#cpp-coding-and-test-guidelines)

## Fundamentals

1. How get input from user?

```c++
   char buff[512];
   cin.getline(buff, 64, '\n');
```

```c++
   int age;
   cin >>age;
  ```

Syntax

```c++
#include <iostream>
using namespace std;
int main() 
{
  cout << "Hello World!";
  return 0;
}
```

```c++
#include <iostream>

int main() 
{
  std::cout << "Hello World!";
  return 0;
}
```

``` 
Output:
Hello World!
```

```c++
#include <iostream>
using namespace std;
int main() 
{
  cout << "Hello World!";
  cout << "I am learning C++";
   // New line 
  cout << "Hello World! \n";
  cout << "I am learning C++";
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}
```

```
Output:
Hello World!I am learning C++Hello World! 
I am learning C++Hello World!
I am learning C++
```

**C++ Variable**

```C++
// C++ variable

#include <iostream>
using namespace std;
int main()
 {

  int myNum = 15;
  cout << myNum<<endl;
  int myNum1;
  myNum1 = 15;
  cout << myNum1<<endl;
  int myNum2 = 15;   // Now myNum is 15
  myNum2 = 10;       // Now myNum is 10
  cout << myNum2<<endl;
  int myAge = 35;
  cout << "I am " << myAge << " years old.\n";
  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum<<endl;
  int x1 = 5, y1 = 6, z1 = 50;  
  cout << x1 + y1 + z1<<endl;
  
  // Constant 
  
  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;
  
  return 0;
}

```

```
Output:
15
15
10
I am 35 years old.
11
61
60
3.14
```

**C++ User input**

```c++
// C++ User input
#include <iostream>
using namespace std;

int main() 
{

  int x;
  cout << "Type a number: "; // Type a number and press enter
  cin >> x; // Get user input from the keyboard
  cout << "Your number is: " << x<<endl;
  int x1, y1;
  int sum;
  cout << "Type a new number: ";
  cin >> x1;
  cout << "Type another number: ";
  cin >> y1;
  sum = x1 + y1;
  cout << "Sum is: " << sum;
  return 0;
  
}
```

```
Output:
Type a number: 3456
Your number is: 3456
Type a new number: 234
Type another number: 234
Sum is: 468
```

**C++ Getting string input**

```c++
#include <iostream>
#include <string>
using namespace std;

int main() {
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
 }
```

```
Output:
Type your full name: 
testing 123
Your name is: testing 123
```

**C++ Data types**

```C++
// C++ Data types
#include <iostream>
#include <string>
using namespace std;
 
int main () 
{
  // Creating variables
  int myNum = 5;               // Integer (whole number)
  float myFloatNum = 5.99;     // Floating point number
  double myDoubleNum = 9.98;   // Floating point number
  char myLetter = 'D';         // Character
  bool myBoolean = true;       // Boolean
  string myString = "Hello";   // String
   
  // Print variable values
  cout << "int: " << myNum << "\n";
  cout << "float: " << myFloatNum << "\n";
  cout << "double: " << myDoubleNum << "\n";
  cout << "char: " << myLetter << "\n";
  cout << "bool: " << myBoolean << "\n";
  cout << "string: " << myString << "\n";
  
  // int 
 
  int myNum1 = 1000;
  cout << myNum1<<endl;
 
  // float
  float myNum2 = 5.75;
  cout << myNum2<<endl;

  // double
  double myNum3 = 19.99;
  cout << myNum3<<endl;

  // Scientific Numbers
  // A floating point number can also be a scientific number with an "e" to 
  // indicate the power of 10:
 
  float f1 = 35e3;
  double d1 = 12E4;
  cout << f1<<endl;
  cout << d1<<endl;
 
  // boolean
 
  bool isCodingFun = true;
  bool isFishTasty = false;
  cout << isCodingFun << "\n";
  cout << isFishTasty<<endl;
  
  // Character
  char myGrade = 'B';
  cout << myGrade<<endl;
  char a = 65, b = 66, c = 67;
  cout << a<<endl;
  cout << b<<endl;
  cout << c<<endl;
  string greeting = "Hello\n";
  cout << greeting;


// Include the string library
//#include <string>
// Create a string variable
//string greeting = "Hello";
// Output string value
//cout << greeting;
 return 0;
}
```

```
Output:
int: 5
float: 5.99
double: 9.98
char: D
bool: 1
string: Hello
1000
5.75
19.99
35000
120000
1
0
B
A
B
C
Hello
```

**C++ string**

```c++
//C++ string

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string greeting = "Hello";
  cout << greeting<<endl;
  //String Concatenation
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName<<endl;
  
  //String Concatenation
  string firstName1 = "John ";
  string lastName1 = "Doe";
  string fullName1 = firstName1 + lastName;
  cout << fullName1<<endl;
  
  //Append
   string firstName2 = "John ";
  string lastName2 = "Doe";
  string fullName2 = firstName2.append(lastName2);
  cout << fullName2<<endl;
  // Number string
  int x = 10;
  int y = 20;
  int z = x + y;
  cout << z<<endl;  //30
  string x1 = "10";
  string y1 = "20";
  string z1 = x1 + y1;
  cout << z1<<endl;  // 1020
  
  // string length
   string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.size()<<endl;
  string txt1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt1.length()<<endl;
  
  // Access string
  string myString = "Hello";
  cout << myString[0]<<endl;
  string myString1 = "Hello";
  cout << myString1[1]<<endl;
  //Change String Characters
   string myString2 = "Hello";
  myString2[0] = 'J';
  cout << myString2<<endl;
    
  // user input string
  string fullName3;
  cout << "Type your full name: ";
  getline (cin, fullName3);
  cout << "Your name is: " << fullName3<<endl;
    
  // Omitting namespace
  std::string greeting2 = "Hello";
  std::cout << greeting2<<endl;
  return 0;
}
```

```
Output:
Hello
John Doe
John Doe
John Doe
30
1020
The length of the txt string is: 26
The length of the txt string is: 26
H
e
Jello
Type your full name: Abcdef
Your name is: Abcdef
Hello
```

## Memory Organization

**Memory Layout in C++**

1. Text Segment
1. Data Segment
1. Stack
1. Heap

**Text Segment:**
Also, know as Code segment, Contains executable instructions.
Usually, Text segment is sharable and hence only a single copy exists as well as its read-only.
**Data Segment**
Divided into two parts
**Initialized Data Segment**
Contains Global and static variables that are initialized. Its not a read-only segment and hence the values can be modified.
**Uninitialized Data Segment**
This is usually called BSS segment.
Data in this segment are initialized by the kernel to 0 before the program starts execution. This comes after the initialized Data segment in memory.
**Stack:**
Temporary variables are stored in this area. The virtual pointer is also stored here
**Stack Frame:** A set of values pushed for one function call is called Stack Frame.
**Heap:**
Here dynamic memory allocation takes place

**Memory Layout of objects in C++:**
Simple Object
Object with virtual and static members
Object with inheritance
Object with Multiple inheritances and virtual functions

**Memory Layout of Simple Object:**

```
class Shape {
 float area;
 float perimeter;
public:
 Shape();
 ~Shape();
float GetArea(float side);
 float GetPerimeter(float side);
};
```

**Stack:**

1. area
2. perimeter
**Text Segment:**
1. Shape()
2. ~Shape()
3. GetArea(float side)
4. GetPerimeter(float side)

**2. Object with virtual and static members**

```
class Shape {
 float area;
 float perimeter;
 static double PI;
public:
 Shape();
 virtual ~Shape();
virtual float GetArea(float side);
 float GetPerimeter(float side);
static double GetPI();
};
```

**Stack:**

1. area
2. Perimeter
3. _vptr
**Data Segment:**
1. Static Shape::PI
**Text Segment:**
1. Shape()
2. ~Shape()
3. GetArea(float side)
4. GetPerimeter(float side)
5. Static Shape::GetPI()
Here as you can see the static member variable goes into the Data Segment.
The static function goes into the Same text segment as other function but here this pointer won't be passed.
In the case of virtual members, a virtual pointer is added to the stack which points to a virtual table which contains:
type_info — Contains information related to the current class and other classes if it is derived from one.
**Address of virtual function:**

```C++
~Shape()
GetArea()
3. Object with inheritance
class Shape {
 float area;
public:
 Shape();
 virtual ~Shape();
virtual float GetArea(float side);
};
class Square : Shape {
 float area;
public:
 Square();
 ~Square();
float GetArea(float side);
};
```

**Stack:**

1. Square::area
2. Shape::_vptr
3. Shape::area
**Text Segment:**
1. Square()
2. ~Squre()
3. Square::GetArea()
4. Shape()
5. ~Shape()
6. Shape::GetArea()
The virtual table will be created as part of a constructor call to base class Shape and the table will contain the address of virtual functions that are overridden.
**Object with Multiple inheritances and virtual functions**

```c++
class Shape {
 float area;
public:
 Shape();
 virtual ~Shape();
virtual float GetArea(float side);
};
class Square {
 float area;
public:
 Square();
 ~Square();
virtual float GetArea(float side);
};
class TempShape : public Square, public Shape {
 float area;
public:
 TempShape();
 ~TempShape();
float GetArea(float side);
};
```

An object of TempSape class memory layout:
**Stack:**

1. Shape::area
2. Square::area
3. TempShape::area
4. Shape::_vptr
5. Square::_vptr
**Text:**
1. TempShape()
2. ~TempShape()
3. Square()
4. ~Square()
5. Shape()
6. ~Shape()
Here if you see the object of TempSpace contains two vptr.
In multiple inheritance the no of vptr created will N-1, where N is the no of class.

Reference : <http://www.vishalchovatiya.com/memory-layout-of-cpp-object/>

<https://towardsdatascience.com/c-memory-allocation-deallocation-for-data-processing-1b204fb8a9c>

## Type Qulifier & Type Modifier

### Type Modifiers

Type Modifiers are special keywords defined in the programming language which are used to modify the default properties of the Built-in Data types.

Type Modifiers are special keywords that are used to modify the range of the data types and also the memory space allocated to the variable.

**Type Modifiers**
Type Modifier keywords are used as prefixes to the Built-in Data types in the declaration or initialization statements. They are used to modify the memory allocation of the variable. Type Modifiers also modify (increase or decrease) the range of the Data types.

Different Type Modifiers
Depending on the programming language, there are a different number of Type Modifiers.

In C and C++, there are 4 Type Modifiers namely –

Signed
Unsigned
Short
Long

### Type Qualifier

A qualifier is a token added to a variable which adds an extra quality, such as specifying volatility or constant-ness to a variable. They act like an adjective for a variable. With or without a qualifier, the variable itself still occupies the same amount of memory, and each bit has the same interpretation or contribution to the state/value. Qualifiers just specify something about how it may be accessed or where it is stored.

Three qualifiers are there in C++. These are:

1. **const:** This is used to define that the type is constant.
1. **volatile:** This is used to define that the type is volatile.
1. **mutable:** applies to non-static class members of the non-reference non-const type. Mutable members of const classes are modifiable.

```c++
#include<iostream>
using namespace std;
int main()
{
const int mx =300; // const variable declaration
for(int ctr =100; ctr< mx; ctr +=50 )
cout<<"ctr = "<<ctr <<"\n";
}
```

```
ctr = 100
ctr = 150
ctr = 200
ctr = 250
```

```c++
#include<iostream>
using namespace std;
volatile int val = 300; // volatile declaration
int main()
{
for (int ctr =100 ; ctr < val; ctr +=50)
cout<<"ctr: "<<ctr <<"\n";
}
```

```
ctr: 100
ctr: 150
ctr: 200
ctr: 250
```

**What is a mutable type qualifier in C++?**
Const objects do not allow data member values to be changed. They can only be read after initialization and not updated again.

Data members which are mutable are allowed to change their values even if they are of a const object.

This may be needed when almost all other data members are required to remain constant but one may change. It’s a good idea to declare that data member as mutable.

```c++
#include<iostream>
using namespace std;

class MyClass {
    public:
        int var1;
        // mutable will allow var2 to be updated
        // even though its called by a const object
        mutable int var2;
        
    MyClass(int x=0, int y=0) {
        var1 = x;
        var2 = y;
   }
   void display() 
   {
        cout << endl << "var1: " << var1 << " var2: "<< var2 << endl;
   }
};
int main() 
{
    // const object, we can only read but not change values
    // values can only be initialized once, here we using a
    // parameterized constructor to initialize them
    const MyClass obj(10,20);
    
    // reading values is allowed as we are not changing
    // data members of const object
    cout << obj.var1 << " " << obj.var2 << "\n";
    
    // Below gives error as var1 can't be changed( because object is constant)
    // obj.var1 = 30;
    
    // var2 can be changed as var2 is mutable data member
    obj.var2 = 100;
    
    cout << obj.var1 << " " << obj.var2 << "\n";
    
    return 0;
}
```

```
Output
10 20
10 100
```

## TypeCasting & TypeConversion

**Type Conversion**
**Implicit type conversion automatic**

```c++
// double to int
#include <iostream>
using namespace std;

int main()
 {
   int num_int;
   double num_double = 9.99;
   num_int = num_double;
   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;
   return 0;
}
```

```
Output:
num_int = 9
num_double = 9.99
```

**Typecasting explcit**

```c++
// 
// double to int 
#include <iostream>

using namespace std;

int main() 
{
    // initializing a double variable
    double num_double = 3.56;
    cout << "num_double = " << num_double << endl;
    // C-style conversion from double to int
    int num_int1 = (int)num_double;
    cout << "num_int1   = " << num_int1 << endl;
    // function-style conversion from double to int
    int num_int2 = int(num_double);
    cout << "num_int2   = " << num_int2 << endl;
    return 0;
}
```

```
Output:
num_double = 3.56
num_int1   = 3
num_int2   = 3
```

**Implicit type conversion**

```c++
// int to double

#include <iostream>
using namespace std;

int main() 
{
 
   int num_int = 9;
   double num_double;
   num_double = num_int;
   cout << "num_int = " << num_int << endl;
   cout << "num_double = " << num_double << endl;
   return 0;
}
```

```
Output:
num_int = 9
num_double = 9
```

## Storage Class

**C++ Storage Class**

A storage class defines the scope (visibility) and life-time of variables and/or functions within a C++ Program. These specifiers precede the type that they modify. There are following storage classes, which can be used in a C++ Program

1. auto
1. register
1. static
1. extern
1. mutable

**The auto Storage Class**
The auto storage class is the default storage class for all local variables.

```c++
{
   int mount;
   auto int month;
}
```

The example above defines two variables with the same storage class, auto can only be used within functions, i.e., local variables.

```c++
#include <iostream>
using namespace std;

void autoStorageClass()
{
 cout << "Demonstrating auto class\n";

 // Declaring an auto variable
 // No data-type declaration needed
 auto a = 32;
 auto b = 3.2;
 auto c = "GeeksforGeeks";
 auto d = 'G';

 // printing the auto variables
 cout << a << " \n";
 cout << b << " \n";
 cout << c << " \n";
 cout << d << " \n";
}

int main()
{
 // To demonstrate auto Storage Class
 autoStorageClass();
 return 0;
}
```

```
Output: 
Demonstrating auto class
32 
3.2 
GeeksforGeeks 
G
```

**The register Storage Class**
The register storage class is used to define local variables that should be stored in a register instead of RAM. This means that the variable has a maximum size equal to the register size (usually one word) and can't have the unary '&' operator applied to it (as it does not have a memory location).

```c++
{
   register int  miles;
}
```

The register should only be used for variables that require quick access such as counters. It should also be noted that defining 'register' does not mean that the variable will be stored in a register. It means that it MIGHT be stored in a register depending on hardware and implementation restrictions.

```c++
#include <iostream>
using namespace std;

void registerStorageClass()
{

 cout << "Demonstrating register class\n";

 // declaring a register variable
 register char b = 'G';

 // printing the register variable 'b'
 cout << "Value of the variable 'b'"
  << " declared as register: " << b;
}
int main()
{

 // To demonstrate register Storage Class
 registerStorageClass();
 return 0;
}

```

```
Output: 
Demonstrating register class
Value of the variable 'b' declared as register: G
```

**The static Storage Class**
The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them to maintain their values between function calls.

The static modifier may also be applied to global variables. When this is done, it causes that variable's scope to be restricted to the file in which it is declared.

In C++, when static is used on a class data member, it causes only one copy of that member to be shared by all objects of its class.

```c++
#include <iostream>
 
// Function declaration
void func(void);
 
static int count = 10; /* Global variable */
 
main() {
   while(count--) {
      func();
   }
   
   return 0;
}

// Function definition
void func( void ) {
   static int i = 5; // local static variable
   i++;
   std::cout << "i is " << i ;
   std::cout << " and count is " << count << std::endl;
}
```

```
i is 6 and count is 9
i is 7 and count is 8
i is 8 and count is 7
i is 9 and count is 6
i is 10 and count is 5
i is 11 and count is 4
i is 12 and count is 3
i is 13 and count is 2
i is 14 and count is 1
i is 15 and count is 0
```

**The extern Storage Class**
The extern storage class is used to give a reference of a global variable that is visible to ALL the program files. When you use 'extern' the variable cannot be initialized as all it does is point the variable name at a storage location that has been previously defined.

When you have multiple files and you define a global variable or function, which will be used in other files also, then extern will be used in another file to give reference of defined variable or function. Just for understanding extern is used to declare a global variable or function in another file.

The extern modifier is most commonly used when there are two or more files sharing the same global variables or functions as explained below.

```c++
First File: main.cpp
#include <iostream>
int count ;
extern void write_extern();
 
main() {
   count = 5;
   write_extern();
}

Second File: support.cpp
#include <iostream>

extern int count;

void write_extern(void) {
   std::cout << "Count is " << count << std::endl;
}
Here, extern keyword is being used to declare count in another file. Now compile these two files as follows −

$g++ main.cpp support.cpp -o write
This will produce write executable program, try to execute write and check the result as follows −

$./write
5
```

```c++
#include <iostream>
using namespace std;

// declaring the variable which is to
// be made extern an initial value can
// also be initialized to x
int x;
void externStorageClass()
{

 cout << "Demonstrating extern class\n";

 // telling the compiler that the variable
 // x is an extern variable and has been
 // defined elsewhere (above the main
 // function)
 extern int x;

 // printing the extern variables 'x'
 cout << "Value of the variable 'x'"
  << "declared, as extern: " << x << "\n";

 // value of extern variable x modified
 x = 2;

 // printing the modified values of
 // extern variables 'x'
 cout
  << "Modified value of the variable 'x'"
  << " declared as extern: \n"
  << x;
}

int main()
{

 // To demonstrate extern Storage Class
 externStorageClass();

 return 0;
}

```

```
Output: 
Demonstrating extern class
Value of the variable 'x'declared, as extern: 0
Modified value of the variable 'x' declared as extern: 
2
```

**The mutable Storage Class**
The mutable specifier applies only to class objects, which are discussed later in this tutorial. It allows a member of an object to override const member function. That is, a mutable member can be modified by a const member function.

```c++
#include <iostream>
using std::cout;

class Test {
public:
 int x;

 // defining mutable variable y
 // now this can be modified
 mutable int y;

 Test()
 {
  x = 4;
  y = 10;
 }
};

int main()
{
 // t1 is set to constant
 const Test t1;

 // trying to change the value
 t1.y = 20;
 cout << t1.y;

 // Uncommenting below lines
 // will throw error
 // t1.x = 8;
 // cout << t1.x;
 return 0;
}
```

```
Output: 
20
```

**Mutable Storage Class**

* Modifiable even though the member is part of an object declared as constant.
* Cannot use the mutable specifier with name declared as static or const. or reference member.
* class object kept constant doesn't allow the data member of the class object to be modified during the program execution.

```c++
#include <iostream>

using namespace std;
/// Mutable Storage Class.
class Myclass
{
    public:
    int x=0;
    static int z;         // static variable
    const int u= 12;          // constant variable 
    mutable int y;        // Mutable storage Class.
    
    //Myclass (int a=5, int b=6) : x(a),y(b){}
    Myclass()
    {
        
    }
};

int main()
{
    const Myclass obj;     // Constant Object. 
    
    obj.y=78;             // Intizlization.
    //obj.x=75;           // Unable to Initilize. 
    cout<<obj.y<<endl;
    cout<<obj.x<<endl;
    cout<<obj.u<<endl;
    // obj.z=56;         // unable to Initilize. 
    // obj.u=34;          // unable to Initilize. 
  
    return 0;
}


```

## Preprocessor

### Preprocessor Directives as follows

Inclusion Directives:

# include: specifies the files to be included, especially header-files

Macro Definition Directives:
**#define** define a macro substitution
**#undef** It is used for undefining a macro
Conditional Compilation Directives:
**#if** It tests a compile-time condition
**#elif**
**#endif**: It specifies the end of #if
**#ifdef**: It is used to test for macro definition
**#ifndef**: It tests whether a macro is not defined
**#else**: It provides an alternative option when #if fails
Other Directives:
**#error**
**#line**: Supplies a line number for compiler messages
**#pragma**: It specifies implementation-defined instructions to the compiler

**The #define Preprocessor**

```c++
#include <iostream>
using namespace std;

#define PI 3.14159

int main () {
   cout << "Value of PI :" << PI << endl; 

   return 0;
}
```

**Function-Like Macros**
You can use #define to define a macro which will take argument as follows

```c++
#include <iostream>
using namespace std;

#define MIN(a,b) (((a)<(b)) ? a : b)

int main () {
   int i, j;
   
   i = 100;
   j = 30;
   
   cout <<"The minimum is " << MIN(i, j) << endl;

   return 0;
}
```

```
The minimum is 30
```

**Conditional Compilation**
There are several directives, which can be used to compile selective portions of your program's source code. This process is called conditional compilation.

```c++
#ifndef NULL
   #define NULL 0
#endif
```

```c++
#ifdef DEBUG
   cerr <<"Variable x = " << x << endl;
#endif
```

```C++
#include <iostream>
using namespace std;
#define DEBUG

#define MIN(a,b) (((a)<(b)) ? a : b)

int main () {
   int i, j;
   
   i = 100;
   j = 30;

#ifdef DEBUG
   cerr <<"Trace: Inside main function" << endl;
#endif

#if 0
   /* This is commented part */
   cout << MKSTR(HELLO C++) << endl;
#endif

   cout <<"The minimum is " << MIN(i, j) << endl;

#ifdef DEBUG
   cerr <<"Trace: Coming out of main function" << endl;
#endif

   return 0;
}
```

```
The minimum is 30
Trace: Inside main function
Trace: Coming out of main function
```

**The # and ## Operators**
The # and ## preprocessor operators are available in C++ and ANSI/ISO C. The # operator causes a replacement-text token to be converted to a string surrounded by quotes.

```C++
#include <iostream>
using namespace std;

#define MKSTR( x ) #x

int main () {

   cout << MKSTR(HELLO C++) << endl;

   return 0;
}
```

```
HELLO C++
```

```c++
#include <iostream>
using namespace std;

#define concat(a, b) a ## b
int main() {
   int xy = 100;
   
   cout << concat(x, y);
   return 0;
}
```

```
100
```

```c++
#include <iostream>
#define REC_AREA(length, breadth) (length * breadth)
using namespace std;
 
int main()
{
  int length = 20, breadth = 5, area;
  
  area = REC_AREA(length, breadth);
  
  cout << "Area of a rectangle is: " << area;
  
  return 0;
}
```

```
Output:

Area of a rectangle is: 100
```

| Predefined Macro | Description |
| ---------------- | ------- |
 | **FILE** | The current file name of the program being compiled |
| **DATE** | Date of translation of source code into object code in the format month/day/year |
| **TIME** | Time in the form hour:minute:second at which program is compiled |
| **LINE** | The current line number of the program that is being compiled |
| __cplusplus | Integer constant that is defined for each compiler version |

```c++
#include <iostream>
using namespace std;

int main () {
   cout << "Value of __LINE__ : " << __LINE__ << endl;
   cout << "Value of __FILE__ : " << __FILE__ << endl;
   cout << "Value of __DATE__ : " << __DATE__ << endl;
   cout << "Value of __TIME__ : " << __TIME__ << endl;

   return 0;
}
```

```
Value of __LINE__ : 6
Value of __FILE__ : test.cpp
Value of __DATE__ : Feb 28 2011
Value of __TIME__ : 18:52:48
```

```c++
#include <iostream>
using namespace std;
#define DEBUG
 
#define MAX(a,b) (((a)>(b)) ? a : b)
 
int main () {
  int i, j;
  
  i = 100;
  j = 50;
   
#ifdef DEBUG
  cout <<"Trace: Start of main function" << endl;
  #endif
   
cout <<"The maximum is " << MAX(i, j) << endl;
   
#undef MAX
  //cout <<"The maximum is " << MAX(10,20) << endl;
  
  #ifdef DEBUG
  cout <<"Trace: End of main function" << endl;
  #endif
  return 0;
}
```

```
Output:

Trace: Start of main function
The maximum is 100
Trace: End of main function
```

**The # & ## Operators**
The # and ## operators are two special operators that are respectively used to convert a text token into a string to be displayed and concatenate two tokens.

```c++
#include <iostream>
using namespace std;
 
#define MKSTR( x ) #x
#define concat(a, b) a ## b
 
int main () {
   
  cout <<"MKSTR(Hello World) = "<< MKSTR(Hello World) << endl;
  int xy = 100;
  
  cout <<"concat(x,y) = "<<concat(x,y);
  return 0;
}
```

```
Output:

MKSTR(Hello World) = Hello World
concat(x,y) = 100
```

```C++
#pragma
#pragma compiler specific extension
```

The pragma directive is used to access compiler-specific preprocessor extensions. A common use of #pragma is the #pragma once directive, which asks the compiler to include a header file only a single time, no matter how many times it has been imported:

```c++
#pragma once
// header file code
```

In this example, using #pragma once is equivalent to an include guard that prevents the file from being processed multiple times.

```c++
#ifndef _FILE_NAME_H_
#define _FILE_NAME_H_

/* code */

#endif // #ifndef _FILE_NAME_H_
```

The #pragma once is available on many major compilers, including Clang, GCC, the Intel C++ compiler and MSVC.

The #pragma directive can also be used for other compiler-specific purposes. #pragma is commonly used to suppress warnings. For example, in MSVC

```C++
#pragma warning (disable : 4018 )
```

Can be used to disable warning 4018, warning of signed/unsigned mismatch. While you should be reluctant to suppress warnings sometimes it is necessary.

**#pragma Directive in C/C++**

This directive is a special purpose directive and is used to turn on or off some features. These types of directives are compiler-specific i.e., they vary from compiler to compiler. Some of the #pragma directives are discussed below:

# pragma startup and #pragma exit: These directives helps us to specify the functions that are needed to run before program startup( before the control passes to main()) and just before program exit (just before the control returns from main())

Note: Below program will not work with GCC compilers.

```c++
#include<stdio.h>
 
void func1();
void func2();
 
#pragma startup func1
#pragma exit func2
 
void func1()
{
 printf("Inside func1()\n");
}
 
void func2()
{
 printf("Inside func2()\n"); 
}
 
int main()
{
 printf("Inside main()\n");
  
 return 0;
}

```

## Operators

**Operators**

```C++
// C++ Operator

#include <iostream>
using namespace std;

int main() 
{
  // Arithmetic Operators
  cout<<"Arithmetic Operators"<<endl;
  int x = 100 + 50;
  cout << x<<endl;
  int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  cout << sum1 << "\n";
  cout << sum2 << "\n";
  cout << sum3<<endl;
  
  
  // Assignment Operators
  cout<<"Assignment Operators"<<endl;
  int x1 = 10;
  cout << x1<<endl;
  int x2 = 10;
  x2 += 5;
  cout << x2<<endl;
  
  // Comparision Operator
  cout<<"comparision Operator"<<endl;
  int x3 = 5;
  int y1 = 3;
  cout << (x3 > y1)<<endl; // returns 1 (true) because 5 is greater than 3
  
  // Logical Operator
  cout<<"logical Operator"<<endl;
  int x4 = 5;
  int y2 = 3;
  cout << (x4 > 3 && x4 < 10)<<endl; // returns true (1) because 5 is greater than 3 AND 5 is less than 10
   return 0;
}

```

```
Output:
Arithmetic Operators
150
150
400
800
Assignment Operators
10
15
comparision Operator
1
logical Operator
1
```

### Arithmetic

```C++
// arithmetic operator

#include <iostream>
using namespace std;

int main() 
{
    int a, b;
    a = 7;
    b = 2;
    // printing the sum of a and b
    cout << "a + b = " << (a + b) << endl;
    // printing the difference of a and b
    cout << "a - b = " << (a - b) << endl;
    // printing the product of a and b
    cout << "a * b = " << (a * b) << endl;
    // printing the division of a by b
    cout << "a / b = " << (a / b) << endl;
    // printing the modulo of a by b
    cout << "a % b = " << (a % b) << endl;
    return 0;
}
```

```
Output:
a - b = 5
a * b = 14
a / b = 3
a % b = 1
```

### Assignment

```
#include <iostream>
using namespace std;

int main() 
{
    int a, b, temp;
    // 2 is assigned to a
    a = 2;
    // 7 is assigned to b
    b = 7;
   // value of a is assigned to temp
   temp = a;    // temp will be 2
   cout << "temp = " << temp << endl;
    // assigning the sum of a and b to a
    a += b;       // a = a +b
    cout << "a = " << a << endl;
    return 0;
}
```

```
Output:
temp = 2
a = 9
```

### Logical

```
#include <iostream>
using namespace std;

int main() 
{
    bool result;
    result = (3 != 5) && (3 < 5);     // true
    cout << "(3 != 5) && (3 < 5) is " << result << endl;
    result = (3 == 5) && (3 < 5);    // false
    cout << "(3 == 5) && (3 < 5) is " << result << endl;
    result = (3 == 5) && (3 > 5);    // false
    cout << "(3 == 5) && (3 > 5) is " << result << endl;
    result = (3 != 5) || (3 < 5);    // true
    cout << "(3 != 5) || (3 < 5) is " << result << endl;
    result = (3 != 5) || (3 > 5);    // true
    cout << "(3 != 5) || (3 > 5) is " << result << endl;
    result = (3 == 5) || (3 > 5);    // false
    cout << "(3 == 5) || (3 > 5) is " << result << endl;
    result = !(5 == 2);    // true
    cout << "!(5 == 2) is " << result << endl;
    result = !(5 == 5);    // false
    cout << "!(5 == 5) is " << result << endl;
    return 0;
}
```

```
Output:
(3 != 5) || (3 > 5) is 1
(3 == 5) || (3 > 5) is 0
!(5 == 2) is 1
!(5 == 5) is 0
````

## Conditional

### Relational

Relational Operators

```
#include <iostream>
using namespace std;

int main()
 {
    int a, b;
    a = 3;
    b = 5;
    bool result;
    result = (a == b);   // false
    cout << "3 == 5 is " << result << endl;
    result = (a != b);  // true
    cout << "3 != 5 is " << result << endl;
    result = a > b;   // false
    cout << "3 > 5 is " << result << endl;
    result = a < b;   // true
    cout << "3 < 5 is " << result << endl;
    result = a >= b;  // false
    cout << "3 >= 5 is " << result << endl;
    result = a <= b;  // true
    cout << "3 <= 5 is " << result << endl;
    return 0;
}
```

```
Output:
3 > 5 is 0
3 < 5 is 1
3 >= 5 is 0
3 <= 5 is 1
```

### Increment and Decrement

Increment and Decrement Operators

```
// Working of increment and decrement operators

#include <iostream>
using namespace std;

int main() 
{
    int a = 10, b = 100, result_a, result_b;
    // incrementing a by 1 and storing the result in result_a
    result_a = ++a;
    cout << "result_a = " << result_a << endl;
    // decrementing b by 1 and storing the result in result_b   
    result_b = --b;
    cout << "result_b = " << result_b << endl;
    return 0;
}
```

```
Output:
result_a = 11
result_b = 99
```

### Preincrement

#### Predecrement

#### Postincrement

#### Postdecrement

## Conditional Statement

```
// C++ if... else

#include <iostream>
using namespace std;

int main() {
 // if statement 
  if (20 > 18) {
    cout << "20 is greater than 18";
  }  
  
  int x = 20;
  int y = 18;
  if (x > y) {
    cout << "x is greater than y";
  }  
  
  // if ... else 
 
  int time = 20;
  if (time < 18) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }

 // else... if
 
 int time = 22;
  if (time < 10) {
    cout << "Good morning.";
  } else if (time < 20) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  
  //Short Hand If...Else (Ternary Operator)
  
  int time = 20;
  if (time < 18) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  
  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
   return 0;
}
```
## Control Statement
  
```
// C++ boolean

#include <iostream>
using namespace std;

int main() {
 
  bool isCodingFun = true;
  bool isFishTasty = false;
  cout << isCodingFun << "\n";
  cout << isFishTasty;
  
  int x = 10;
  int y = 9;
  cout << (x > y);
  
   cout << (10 > 9);
   
   int x = 10;
  cout << (x == 10);
  
  cout << (10 == 15);
  
  return 0;
}
```



```
// C++ While loop
#include <iostream>
using namespace std;

int main() {
  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++;
  }
  // Do while
   int i = 0;
  do {
    cout << i << "\n";
    i++;
  }
  while (i < 5);
  
  return 0;
}
```

```
// C++ For Loop


#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 5; i++) {
    cout << i << "\n";
  }
  
  for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
  }
  
  
  return 0;
}
```

```

// C++ switch


#include <iostream>
using namespace std;

int main() {
  int day = 4;
  switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
   break;
  case 7:
    cout << "Sunday";
    break;
  }
  
  
  int day = 4;
  switch (day) {
    case 6:
      cout << "Today is Saturday";
      break;
    case 7:
      cout << "Today is Sunday";
      break;
    default:
      cout << "Looking forward to the Weekend";
  }
  
  
  return 0;
}
```

```
// C++ Break and Continue


#include <iostream>
using namespace std;

int main() {

 // break
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
  } 
  
  // continue
  
  for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
}
  
  
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
    if (i == 4) {
      break;
    }
  } 
  
  
  
  int i = 0;
while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
}


  return 0;
}


```

## Function

 ### C++ Function Decleration and Defintion

```c++
#include <iostream>
using namespace std;
// Function declaration
void myFunction();
// The main method
int main() {
  myFunction();  // call the function
  return 0;
}
// Function definition
void myFunction() {
  cout << "I just got executed!"<<endl;
}
```

 ### C++ Function Parameters and Arguments

```C++
// C++ Function Parameters and Arguments
#include <iostream>
#include <string>
using namespace std;
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}
int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}
```

 ### C++ Function Default parameter

```C++
#include <iostream>
#include <string>
using namespace std;
void myFunction(string country = "Norway") {
  cout << country << "\n";
}
int main() {
  myFunction("Sweden");
  myFunction("India");
  myFunction();
  myFunction("USA");
  return 0;
}
```

### C++ Multiple Parameters

```c++
#include <iostream>
#include <string>
using namespace std;

void myFunction(string fname, int age) {
  cout << fname << " Refsnes. " << age << " years old. \n";
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}
```

**C++ Return Values**

```c++
#include <iostream>
using namespace std;
int myFunction(int x) {
  return 5 + x;
}
int myFunction1(int x, int y) {
  return x + y;
}
int myFunction2(int x, int y) {
  return x + y;
}
int main() {
  cout << myFunction(3)<<endl;
   cout << myFunction1(5, 3)<<endl;
   int z = myFunction2(5, 3);
  cout << z<<endl;
  return 0;
}
```

**C++ pass by Reference**

```c++
#include <iostream>
using namespace std;
void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

int main() {
  int firstNum = 10;
  int secondNum = 20;

  cout << "Before swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  swapNums(firstNum, secondNum);

  cout << "After swap: " << "\n";
  cout << firstNum << secondNum << "\n";

  return 0;
}
```

**C++ Function Overloading**

```C++
#include <iostream>
using namespace std;

int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int plusFunc1(int x, int y) {
  return x + y;
}

double plusFunc1(double x, double y) {
  return x + y;
}
int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  
  int myNum3 = plusFunc1(8, 5);
  double myNum4 = plusFunc1(4.3, 6.26);
  cout << "Int: " << myNum3 << "\n";
  cout << "Double: " << myNum4;
  
  return 0;
}
```

### Inline function in C++

If make a function as inline, then the compiler replaces the function calling location with the definition of the inline function at compile time.

Any changes made to an inline function will require the inline function to be recompiled again because the compiler would need to replace all the code with a new code; otherwise, it will execute the old functionality.

Syntax for an inline function:

```c++
inline return_type function_name(parameters)  
{  
   // function code?  
}   
```

Let's understand the difference between the normal function and the inline function.

Inside the main() method, when the function fun1() is called, the control is transferred to the definition of the called function. The addresses from where the function is called and the definition of the function are different. This control transfer takes a lot of time and increases the overhead.

When the inline function is encountered, then the definition of the function is copied to it. In this case, there is no control transfer which saves a lot of time and also decreases the overhead.

Let's understand through an example.

```c++
#include <iostream>  
using namespace std;  
inline int add(int a, int b)  
{  
    return(a+b);  
}  
int main()  
{  
    cout<<"Addition of 'a' and 'b' is:"<<add(2,3);A  
    return 0;  
  
}  
```

Once the compilation is done, the code would be like as shown as below:

```c++
#include<iostream>  
using namespace std;  
inline int add(int a, int b)  
{  
     return(a+b);   
}  
int main()  
{  
      cout<<"Addition of 'a' and 'b' is:"<<return(2+3);  
    return 0;  
}   
```

Why do we need an inline function in C++?

The main use of the inline function in C++ is to save memory space. Whenever the function is called, then it takes a lot of time to execute the tasks, such as moving to the calling function. If the length of the function is small, then the substantial amount of execution time is spent in such overheads, and sometimes time taken required for moving to the calling function will be greater than the time taken required to execute that function.

The solution to this problem is to use macro definitions known as macros. The preprocessor macros are widely used in C, but the major drawback with the macros is that these are not normal functions which means the error checking process will not be done during the compilation.

C++ has provided one solution to this problem. In the case of function calling, the time for calling such small functions is huge, so to overcome such a problem, a new concept was introduced known as an inline function. When the function is encountered inside the main() method, it is expanded with its definition thus saving time.

We cannot provide the inlining to the functions in the following circumstances:

If a function is recursive.
If a function contains a loop like for, while, do-while loop.
If a function contains static variables.
If a function contains a switch or go to statement
When do we require an inline function?

**An inline function can be used in the following scenarios:**

* An inline function can be used when the performance is required.
* It can be used over the macros.
* We can use the inline function outside the class so that we can hide the internal implementation of the function.

### Advantages of inline function**

* In the inline function, we do not need to call a function, so it does not cause any overhead.

* It also saves the overhead of the return statement from a function.
* It does not require any stack on which we can push or pop the variables as it does not perform any function calling.
* An inline function is mainly beneficial for the embedded systems as it yields less code than a normal function.

### Disadvantages of inline function**

The following are the disadvantages of an inline function:

* The variables that are created inside the inline function will consume additional registers. If the variables increase, then the use of registers also increases, which may increase the overhead on register variable resource utilization. It means that when the function call is replaced with an inline function body, then the number of variables also increases, leading to an increase in the number of registers. This causes an overhead on resource utilization.
* If we use many inline functions, then the binary executable file also becomes large.
* The use of so many inline functions can reduce the instruction cache hit rate, reducing the speed of instruction fetch from the cache memory to that of the primary memory.
* It also increases the compile-time overhead because whenever the changes are made inside the inline function, then the code needs to be recompiled again to reflect the changes; otherwise, it will execute the old functionality.
* Sometimes inline functions are not useful for many embedded systems because, in some cases, the size of the embedded is considered more important than the speed.
* It can also cause thrashing due to the increase in the size of the binary executable file. If the thrashing occurs in the memory, then it leads to the degradation in the performance of the computer.

In C++, we can declare a function as inline. This copies the function to the location of the function call in compile-time and may make the program execution faster.

Inline Functions
To create an inline function, we use the inline keyword. For example,

```c++
inline returnType functionName(parameters) {
    // code
}
```

```c++
#include <iostream>
using namespace std;

inline void displayNum(int num) {
    cout << num << endl;
}

int main() {
    // first function call
    displayNum(5);

    // second function call
    displayNum(8);

    // third function call
    displayNum(666);

    return 0;
}
```

```
Output

5
8
666
```

We then called the function 3 times in the main() function with different arguments. Each time displayNum() is called, the compiler copies the code of the function to that call location.

**Reference**

<https://docs.microsoft.com/en-us/cpp/cpp/inline-functions-cpp?view=msvc-170>

## Array

## String

## Pointer

1. How to declare the Pointer variable?

    int &ptr;

2. How to Assign address to pointer variable?

    int *ptr, c;
       c =5;
    p = &c;

3. How to change the value of pointer variable?

      int *ptr, c;
      c= 5;
   p= &c;   // pointer variable value is 5;
   c=1;
   *p=1;    // pointer variable value changed to 1;

4. How to pass pointer variable to function?

   int *ptr;
    *a =10;       // assigning value to the pointer
    int c= *a;

  function(c);    // passing pointer variable
  
5. What is meant by direct access? or print the pointer address?

    printf("%p",&c);

 cout<<&c;

6. What is meant by indirect access? or print the pointer value?

    printf("%d",c);
  
    cout<<*c;

### Types of Pointer

1. NULL Pointer

  ```C++
   int *ptr = NULL;
   printf("%x",ptr)   // 0
   int* ptr =0;
```

2. Void pointer

    ```C++
   void * ptr = NULL;
   printf("%d", sizeof(ptr));
    ```

3. Wild pointer

  ```C++
    int *ptr;
    printf("%d",p);
  ```

### Pointer precedence (priority operation)

* & ! ++  --

    ```c++
   int x=10;
   int y= 5;
   int *p=&y;
   y=x+1;         // 10 + 1
   cout<<y<<endl;   // 11

   y=*p +1;      // 11 + 1
   cout<<y<<endl;   // 12
   *p=*p+10;     // 12 + 10
    cout<<*p<<endl;  // 22
   x=x+10;       // 10 + 10
   cout<<x<<endl;   // 20
   x+=2;         // 20 + 2
   cout<<x<<endl;   // 22
   cout<<*p<<endl;  // 22
   *p+=2;         // 22 + 2
   ++x;            // 22 + 1
   cout<<x<<endl;   // 23
   cout<<*p<<endl;  // 24
   ++*p;        // 24 + 1
   x++;         // 23 + 1
   cout<<x<<endl;   // 24
   cout<<*p<<endl;  // 25
   (*p)++;    // 25 + 1
   cout<<*p<<endl;  // 26
   ```

 C++ pointer

```c++
# include <iostream>

using namespace std;

int main()
{
    // declare variables
    int var1 = 3;
    int var2 = 24;
    int var3 = 17;

    // print address of var1
    cout << "Address of var1: "<< &var1 << endl;

    // print address of var2
    cout << "Address of var2: " << &var2 << endl;

    // print address of var3
    cout << "Address of var3: " << &var3 << endl;
}

```

```c++
# include <iostream>

using namespace std;
int main() {
    int var = 5;

    // declare pointer variable
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print value of var
    cout << "var = " << var << endl;

    // print address of var
    cout << "Address of var (&var) = " << &var << endl
         << endl;

    // print pointer pointVar
    cout << "pointVar = " << pointVar << endl;

    // print the content of the address pointVar points to
    cout << "Content of the address pointed to by pointVar (*pointVar) = " << *pointVar << endl;

    return 0;
}

```

```c++

//Changing Value Pointed by Pointers

# include <iostream>

using namespace std;
int main() {
    int var = 5;
    int* pointVar;

    // store address of var
    pointVar = &var;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of var to 7:" << endl;

    // change value of var to 7
    var = 7;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl
         << endl;

    cout << "Changing value of *pointVar to 16:" << endl;

    // change value of var to 16
    *pointVar = 16;

    // print var
    cout << "var = " << var << endl;

    // print *pointVar
    cout << "*pointVar = " << *pointVar << endl;
    return 0;
}

```

```c++

// C++ Program to display address of each element of an array

# include <iostream>

using namespace std;

int main()
{
    float arr[3];

    // declare pointer variable
    float *ptr;

    cout << "Displaying address using arrays: " << endl;

    // use for loop to print addresses of all array elements
    for (int i = 0; i < 3; ++i)
    {
        cout << "&arr[" << i << "] = " << &arr[i] << endl;
    }

    // ptr = &arr[0]
    ptr = arr;

    cout<<"\nDisplaying address using pointers: "<< endl;

    // use for loop to print addresses of all array elements
    // using pointer notation
    for (int i = 0; i < 3; ++i)
    {
        cout << "ptr + " << i << " = "<< ptr + i << endl;
    }

    return 0;
}

```

```c++

// C++ Program to insert and display data entered by using pointer notation.

# include <iostream>

using namespace std;

int main() {
    float arr[5];

   // Insert data using pointer notation
    cout << "Enter 5 numbers: ";
    for (int i = 0; i < 5; ++i) {

        // store input number in arr[i]
        cin >> *(arr + i) ;

    }

    // Display data using pointer notation
    cout << "Displaying data: " << endl;
    for (int i = 0; i < 5; ++i) {

        // display value of arr[i]
        cout << *(arr + i) << endl ;

    }

    return 0;
}

```

```c++

//Passing by reference without pointers

# include <iostream>

using namespace std;

// function definition to swap values
void swap(int &n1, int &n2) {
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function to swap numbers
    swap(a, b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

```

```c++

//Passing by reference using pointers

# include <iostream>

using namespace std;

// function prototype with pointer as parameters
void swap(int*, int*);

int main()
{

    // initialize variables
    int a = 1, b = 2;

    cout << "Before swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    // call function by passing variable addresses
    swap(&a, &b);

    cout << "\nAfter swapping" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}

// function definition to swap numbers
void swap(int*n1, int* n2) {
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

```

## Pointer vs Array 


```c++

 int arr[] {10,20,30,40,50, 60};
 int * ptr = arr;

 cout<<sieof(arr);    // 24
 cout<<sizeof(ptr);   // 8

 ```
 
 ```c++

 int * ptr;
  cout<<sizeof(ptr);   // 8
  
  int arr[10];
  int arr1[1];
  int arr2[]={10,20};
  ptr=arr1;
  
  cout<<sizeof(arr);    // 40
  cout<<sizeof(arr1);   // 4
  cout<<sizeof(arr2);   // 8
  cout<<sizeof(ptr);    //8
  ptr =arr2;
  cout<<sizeof(ptr);   // 8
  
  ```
  
  below example not recommend to implement  
  ```c++

  int * ptr;
  int arr[2];
  int arr3[4];
  for (int i=0; i<2;i++)
  {
    cin>>arr[i];
  }
  
  ptr= arr;
  cout<<sizeof(arr3)<<endl; // 16
  cout<<sizeof(ptr)<<endl;   // 8
  cout<<*ptr<<endl;   // 99
  cout<<*ptr+1<<endl; // 99 + 1 =   100
  for(int i =0 ; i<2; i++)
  {
      cout<<*ptr<<endl;        // 99  999
      ptr++;                // increment the address
  }
  *ptr = NULL;  // use 0 . if you use NULL the warning: converting to non-pointer type ‘int’ from NULL
  cout<<*ptr<<endl ;   // 0
  cout<<sizeof(ptr)<<endl;   // 8
}

```

## DynamicMemoryAllocaiton 

In C++, memory is divided into two parts -

- Stack - All the variables that are declared inside any function take memory from the stack.
- Heap - It is unused memory in the program that is generally used for dynamic memory allocation.

**Memory allocation**

Reserving or providing space to a variable is called memory allocation. For storing the data, memory allocation can be done in two ways -

**Static allocation or compile-time allocation** - Static memory allocation means providing space for the variable. The size and data type of the variable is known, and it remains constant throughout the program.

**Dynamic allocation or run-time allocation** - The allocation in which memory is allocated dynamically. In this type of allocation, the exact size of the variable is not known in advance. Pointers play a major role in dynamic memory allocation.

**Why Dynamic memory allocation?**

Dynamically we can allocate storage while the program is in a running state, but variables cannot be created "on the fly". Thus, there are two criteria for dynamic memory allocation -

- A dynamic space in the memory is needed.
- Storing the address to access the variable from the memory
Similarly, we do memory de-allocation for the variables in the memory.

```c++
   int *ptr = NULL;
   p = new int;
 ```
  or
  ```c++
  int *ptr = new int;
  ```
  
  Initialize memory using new operator 
  
  ```c++
  int *ptr = new int(25);
  ```
  
  Allocate Block of Memory 
  ```c++
   int * ptr = new int [10];
   ```
  Delete Operator
  ```c++
     delete ptr;
 ```
  Release block of memory

  ```c++
     delete [] ptr;
 ```
  

Example:

```C++
//C++ new and delete Operator for Objects

# include <iostream>

using namespace std;

class Student {
    int age;

   public:

    // constructor initializes age to 12
    Student() : age(12) {}

    void getAge() {
        cout << "Age = " << age << endl;
    }
};

int main() {

    // dynamically declare Student object
    Student* ptr = new Student();

    // call getAge() function
    ptr->getAge();

    // ptr memory is released
    delete ptr;

    return 0;
}
```

```C++
# include <iostream>

using namespace std;

int main() {
    // declare an int pointer
    int* pointInt;

    // declare a float pointer
    float* pointFloat;

    // dynamically allocate memory
    pointInt = new int;
    pointFloat = new float;

    // assigning value to the memory
    *pointInt = 45;
    *pointFloat = 45.45f;

    cout << *pointInt << endl;
    cout << *pointFloat << endl;

    // deallocate the memory
    delete pointInt;
   delete pointFloat;

    return 0;
}
```

```C++
// where n is the number of students entered by the user

# include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter total number of students: ";
    cin >> num;
    float* ptr;

    // memory allocation of num number of floats
    ptr = new float[num];

    cout << "Enter GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << ": ";
        cin >> *(ptr + i);
    }

    cout << "\nDisplaying GPA of students." << endl;
    for (int i = 0; i < num; ++i) {
        cout << "Student" << i + 1 << " :" << *(ptr + i) << endl;
    }

    // ptr memory is released
    delete[] ptr;

    return 0;
}

```

Dynamically memory allocation for array
```C++
char* val  = NULL;       // Pointer initialized with NULL value
val = new char[40];     // Request memory for the variable
```
allocate for a multi-dimensional array as follows −
```C++
double** pvalue = NULL; // Pointer initialized with null
pvalue = new double [3][4]; // Allocate memory for a 3x4 array
```
However, the syntax to release the memory for multi-dimensional array will still remain same as above −
```c++
delete [] pvalue; // Delete array pointed to by pvalue
```

## Template 

**C++ Template**

Templates are powerful features of C++ which allows us to write generic programs. There are two ways we can implement templates:

- Function Templates
- Class Templates

Similar to function templates, we can use class templates to create a single class to work with different data types.

Class templates come in handy as they can make our code shorter and more manageable.

**Function Template**

- Generic functions use the concept of a function template. Generic functions define a set of operations that can be applied to the various types of data.
- The type of the data that the function will operate on depends on the type of the data passed as a parameter.
- For example, Quick sorting algorithm is implemented using a generic function, it can be implemented to an array of integers or array of floats.
- A Generic function is created by using the keyword template. The template defines what function will do.

// If two characters are passed to function template, character with larger ASCII value is displayed.

```c++
# include <iostream>

using namespace std;

// template function
template <class T>
T Large(T n1, T n2)
{
        return (n1 > n2) ? n1 : n2;
}

int main()
{
        int i1, i2;
        float f1, f2;
        char c1, c2;

        cout << "Enter two integers:\n";
        cin >> i1 >> i2;
        cout << Large(i1, i2) <<" is larger." << endl;

        cout << "\nEnter two floating-point numbers:\n";
        cin >> f1 >> f2;
        cout << Large(f1, f2) <<" is larger." << endl;

        cout << "\nEnter two characters:\n";
        cin >> c1 >> c2;
        cout << Large(c1, c2) << " has larger ASCII value.";

        return 0;
}
```
```
Enter two integers:
3 4
4 is larger.

Enter two floating-point numbers:
3.2 5.3
5.3 is larger.

Enter two characters:
aj  
j has larger ASCII value.

```
**Function Templates with Multiple Parameters**
We can use more than one generic type in the template function by using the comma to separate the list.
```C++
# include <iostream>  

using namespace std;  
template<class X,class Y> void fun(X a,Y b)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
    std::cout << "Value of b is : " <<b<< std::endl;  
}  
  
int main()  
{  
   fun(15,12.3);  

   return 0;  
}  

```
Output:
```

Value of a is : 15
Value of b is : 12.3

```
**Overloading a Function Template**
```C++
# include <iostream>  

using namespace std;  
template<class X> void fun(X a)  
{  
    std::cout << "Value of a is : " <<a<< std::endl;  
}  
template<class X,class Y> void fun(X b ,Y c)  
{  
    std::cout << "Value of b is : " <<b<< std::endl;  
    std::cout << "Value of c is : " <<c<< std::endl;  
}  
int main()  
{  
   fun(10);  
   fun(20,30.5);  
   return 0;  
}  

```
Output:
```

Value of a is : 10
Value of b is : 20
Value of c is : 30.5

```
```C++
//Swap Data Using Function Templates

# include <iostream>

using namespace std;

template <typename T>
void Swap(T &n1, T &n2)
{
 T temp;
 temp = n1;
 n1 = n2;
 n2 = temp;
}

int main()
{
 int i1 = 1, i2 = 2;
 float f1 = 1.1, f2 = 2.2;
 char c1 = 'a', c2 = 'b';

 cout << "Before passing data to function template.\n";
 cout << "i1 = " << i1 << "\ni2 = " << i2;
 cout << "\nf1 = " << f1 << "\nf2 = " << f2;
 cout << "\nc1 = " << c1 << "\nc2 = " << c2;

 Swap(i1, i2);
 Swap(f1, f2);
 Swap(c1, c2);

        cout << "\n\nAfter passing data to function template.\n";
 cout << "i1 = " << i1 << "\ni2 = " << i2;
 cout << "\nf1 = " << f1 << "\nf2 = " << f2;
 cout << "\nc1 = " << c1 << "\nc2 = " << c2;

 return 0;
}

```
**Class Template**
```C++
// Class Template

# include <iostream>

using namespace std;

template <class T>
class Calculator
{
private:
 T num1, num2;

public:
 Calculator(T n1, T n2)
 {
  num1 = n1;
  num2 = n2;
 }

 void displayResult()
 {
  cout << "Numbers are: " << num1 << " and " << num2 << "." << endl;
  cout << "Addition is: " << add() << endl;
  cout << "Subtraction is: " << subtract() << endl;
  cout << "Product is: " << multiply() << endl;
  cout << "Division is: " << divide() << endl;
 }

 T add() { return num1 + num2; }

 T subtract() { return num1 - num2; }

 T multiply() { return num1 * num2; }

 T divide() { return num1 / num2; }
};

int main()
{
 Calculator<int> intCalc(2, 1);
 Calculator<float> floatCalc(2.4, 1.2);

 cout << "Int results:" << endl;
 intCalc.displayResult();

 cout << endl << "Float results:" << endl;
 floatCalc.displayResult();

 return 0;
}

```


```C++
// C++ program to demonstrate the use of class templates

# include <iostream>

using namespace std;

// Class template
template <class T>
class Number {
   private:
    // Variable of type T
    T num;

   public:
    Number(T n) : num(n) {}   // constructor

    T getNum() {
        return num;
    }
};

int main() {

    // create object with int type
    Number<int> numberInt(7);

    // create object with double type
    Number<double> numberDouble(7.7);

    cout << "int Number = " << numberInt.getNum() << endl;
    cout << "double Number = " << numberDouble.getNum() << endl;

    return 0;
}

```

```

int Number = 7
double Number = 7.7

```
**Defining a Class Member Outside the Class Template**
```C++
# include <iostream>

using namespace std;

template <class T>
class Calculator {
   private:
    T num1, num2;

   public:
    Calculator(T n1, T n2) {
        num1 = n1;
        num2 = n2;
    }

    void displayResult() {
        cout << "Numbers: " << num1 << " and " << num2 << "." << endl;
        cout << num1 << " + " << num2 << " = " << add() << endl;
        cout << num1 << " - " << num2 << " = " << subtract() << endl;
        cout << num1 << " * " << num2 << " = " << multiply() << endl;
        cout << num1 << " / " << num2 << " = " << divide() << endl;
    }

    T add() { return num1 + num2; }
    T subtract() { return num1 - num2; }
    T multiply() { return num1 * num2; }
    T divide() { return num1 / num2; }
};

int main() {
    Calculator<int> intCalc(2, 1);
    Calculator<float> floatCalc(2.4, 1.2);

    cout << "Int results:" << endl;
    intCalc.displayResult();

    cout << endl
         << "Float results:" << endl;
    floatCalc.displayResult();

    return 0;
}

```

**C++ Class Templates With Multiple Parameters**
In C++, we can use multiple template parameters and even use default arguments for those parameters.
```C++
# include <iostream>

using namespace std;

// Class template with multiple and default parameters
template <class T, class U, class V = char>
class ClassTemplate {
   private:
    T var1;
    U var2;
    V var3;

   public:
    ClassTemplate(T v1, U v2, V v3) : var1(v1), var2(v2), var3(v3) {}  // constructor

    void printVar() {
        cout << "var1 = " << var1 << endl;
        cout << "var2 = " << var2 << endl;
        cout << "var3 = " << var3 << endl;
    }
};

int main() {
    // create object with int, double and char types
    ClassTemplate<int, double> obj1(7, 7.7, 'c');
    cout << "obj1 values: " << endl;
    obj1.printVar();

    // create object with int, double and bool types
    ClassTemplate<double, char, bool> obj2(8.8, 'a', false);
    cout << "\nobj2 values: " << endl;
    obj2.printVar();

    return 0;
}

```
**CLASS TEMPLATE WITH MULTIPLE PARAMETERS**
We can use more than one generic data type in a class template, and each generic data type is separated by the comma.

```C++
# include <iostream>  

     using namespace std;  
     template<class T1, class T2>  
    class A
    {  
         T1 a;  
         T2 b;  
         public:  
        A(T1 x,T2 y)  
       {  
           a = x;  
           b = y;  
        }  
           void display()  
          {  
                 std::cout << "Values of a and b are : " << a<<" ,"<<b<<std::endl;  
           }  
      };  
  
      int main()  
     {  
           A<int,float> d(5,6.5);  
           d.display();  
           return 0;  
     }  

```
Output:
```

Values of a and b are : 5,6.5

```

**Nontype Template Arguments**
The template can contain multiple arguments, and we can also use the non-type arguments In addition to the type T argument, we can also use other types of arguments such as strings, function names, constant expression and built-in types.

```C++
# include <iostream>  

using namespace std;  
template<class T, int size>  
class A
{  
    public:  
    T arr[size];  
    void insert()  
    {  
        int i =1;  
        for (int j=0;j<size;j++)  
        {  
            arr[j] = i;  
            i++;  
        }  
    }  

    void display()  
    {  
        for(int i=0;i<size;i++)  
        {  
            std::cout << arr[i] << " ";  
        }  
    }  
};  
int main()  
{  
    A<int,10> t1;  
    t1.insert();  
    t1.display();  
    return 0;  
}  

```
Output:
```

1 2 3 4 5 6 7 8 9 10

```

**Points to Remember**

- C++ supports a powerful feature known as a template to implement the concept of generic programming.
- A template allows us to create a family of classes or family of functions to handle different data types.
- Template classes and functions eliminate the code duplication of different data types and thus makes the development easier and faster.
- Multiple parameters can be used in both class and function template.
- Template functions can also be overloaded.
- We can also use nontype arguments such as built-in or derived data types as template arguments.

## STL

### COMPONENTS OF STL

#### CONTAINERS
Containers can be described as the objects that hold the data of the same type. Containers are used to implement different data structures for example arrays, list, trees, etc.

Following are the containers that give the details of all the containers as well as the header file and the type of iterator associated with them :

| Container| Description | Header file | iterator |
| -----| ----| ---- | --- | --- |
| vector |vector is a class that creates a dynamic array allowing insertions and deletions at the back. | <vector> | Random access |
| list |list is the sequence containers that allow the insertions and deletions from anywhere. | <list> |Bidirectional
| deque |deque is the double ended queue that allows the insertion and deletion from both the ends. |<deque> |Random access| 
|set |set is an associate container for storing unique sets. |<set> |Bidirectional |
| multiset | Multiset is an associate container for storing non- unique sets. | <set> |Bidirectional |
| map | Map is an associate container for storing unique key-value pairs, i.e. each key is associated with only one value(one to one mapping). | <map> | Bidirectional |
| multimap | multimap is an associate container for storing key- value pair, and each key can be associated with more than one value. | <map> | Bidirectional |
| stack | It follows last in first out(LIFO). | <stack> | No iterator |
| queue | It follows first in first out(FIFO). | <queue> |No iterator |
| Priority-queue | First element out is always the highest priority element. | <queue> | No iterator |

**Classification of containers :**

- Sequence containers
- Associative containers
- Derived containers
Note : Each container class contains a set of functions that can be used to manipulate the contents.

## ITERATOR
Iterators are pointer-like entities used to access the individual elements in a container.
Iterators are moved sequentially from one element to another element. This process is known as iterating through a container.

Iterator contains mainly two functions:
**begin():** The member function begin() returns an iterator to the first element of the vector.

**end():** The member function end() returns an iterator to the past-the-last element of a container.


**C++ Vector**
A vector is a sequence container class that implements dynamic array, means size automatically changes when appending elements. A vector stores the elements in contiguous memory locations and allocates the memory as needed at run time.

**Difference between vector and array**
An array follows static approach, means its size cannot be changed during run time while vector implements dynamic array means it automatically resizes itself when appending elements.

```c++
# include<iostream>  

# include<vector>  

using namespace std;  
int main()  
{  
   vector<string> v1;  
   v1.push_back("javaTpoint ");  
   v1.push_back("tutorial");  
   for(vector<string>::iterator itr=v1.begin();itr!=v1.end();++itr)  
   cout<<*itr;  
   return 0;
}  

```
Output:
```

javaTpoint tutorial

```

## Multithreading

## DLL

## VC++

## C++ 11

## C++ 14

## C++ 17

## C++ 20


## Class,Object&Method

**C++ Classes and Objects**

```c++
# include <iostream>

# include <string>

using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.myNum = 15;
  myObj.myString = "Some text";

  // Print values
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}

```

**Multiple object**
```C++
# include <iostream>

# include <string>

using namespace std;

class Car {
  public:
    string brand;
    string model;
    int year;
};

int main() {
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

```

**Class method**
```C++
// inside class

# include <iostream>

using namespace std;

class MyClass {         // The class
  public:               // Access specifier
    void myMethod() {   // Method/function
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

```
```C++
// outside class

# include <iostream>

using namespace std;

class MyClass {         // The class
  public:               // Access specifier
    void myMethod();    // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod() {
  cout << "Hello World!";
}

int main() {
  MyClass myObj;     // Create an object of MyClass
  myObj.myMethod();  // Call the method
  return 0;
}

```

```C++
// class method
// parameters

# include <iostream>

using namespace std;

class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
  Car myObj;
  cout << myObj.speed(200);
  return 0;
}

```


### Access Specifier 
Access specifier

```c++
# include <iostream>

using namespace std;

class MyClass {   // The class
  public:         // Public access specifier
    int x;        // Public attribute (int variable)
};

int main() {
  MyClass myObj;  // Create an object of MyClass

  // Access attributes and set values
  myObj.x = 15;

  // Print values
  cout << myObj.x;
  return 0;
}

```

```C++
// access specifier

// public private

# include <iostream>

using namespace std;

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (x is public)
  //Obj.y = 50;  // Not allowed (y is private)
  return 0;
}

```
## Static Variable 

## Static Function 

## C++ static

In C++, static is a keyword or modifier that belongs to the type not instance. So instance is not required to access the static members. In C++, static can be field, method, constructor, class, properties, operator and event.

**Advantage of C++ static keyword**
Memory efficient: Now we don't need to create instance for accessing the static members, so it saves memory. Moreover, it belongs to the type, so it will not get memory each time when instance is created.

**C++ Static Field**
A field which is declared as static is called static field. Unlike instance field which gets memory each time whenever you create object, there is only one copy of static field created in the memory. It is shared to all the objects.

It is used to refer the common property of all objects such as rateOfInterest in case of Account, companyName in case of Employee etc.

Let's see the simple example of static field in C++.
```C++
# include <iostream>  

using namespace std;  
class Account {  
   public:  
       int accno; //data member (also instance variable)
       string name; //data member(also instance variable)  
       static float rateOfInterest;
       Account(int accno, string name)
        {
             this->accno = accno;
            this->name = name;
        }
       void display()
        {
            cout<<accno<< "<<name<< " "<<rateOfInterest<<endl;
        }
};  
float Account::rateOfInterest=6.5;  
int main(void) {  
    Account a1 =Account(201, "Sanjay"); //creating an object of Employee
    Account a2=Account(202, "Nakul"); //creating an object of Employee  
    a1.display();
    a2.display();
    return 0;  
}  

```
Output:
```

201 Sanjay 6.5
202 Nakul 6.5

```

**C++ static field example: Counting Objects**

```C++
# include <iostream>  

using namespace std;  
class Account {  
   public:  
       int accno; //data member (also instance variable)
       string name;
       static int count;
       Account(int accno, string name)
        {
             this->accno = accno;
            this->name = name;
            count++;  
        }
       void display()
        {
            cout<<accno<<" "<<name<<endl;
        }
};  
int Account::count=0;  
int main(void) {  
    Account a1 =Account(201, "Sanjay"); //creating an object of Account  
    Account a2=Account(202, "Nakul");
     Account a3=Account(203, "Ranjana");  
    a1.display();
    a2.display();
    a3.display();
    cout<<"Total Objects are: "<<Account::count;  
    return 0;  
}  

```
Output:
```

201 Sanjay
202 Nakul
203 Ranjana
Total Objects are: 3

```
## Constructor 

**Constructor**
```C++
# include <iostream>

using namespace std;

class MyClass
{                    // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main()
{
  MyClass myObj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}

```
```c++
// C++ program to demonstrate the use of default constructor

# include <iostream>

using namespace std;

// declare a class
class  Wall {
  private:
    double length;

  public:
    // default constructor to initialize variable
    Wall() {
      length = 5.5;
      cout << "Creating a wall." << endl;
      cout << "Length = " << length << endl;
    }
};

int main() {
  Wall wall1;
  return 0;
}

```
### constructor parameter

```c++
**constructor parameter**

# include <iostream>

using namespace std;

class Car
{                  // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute

    Car(string x, string y, int z) {  // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main()
{
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

```

```c++
 **constructor parameter**

# include <iostream>

using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z) {  // Constructor with parameters
      brand = x;
      model = y;
      year = z;
    }
};

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

```
### constructor inside class
```c++
 **constructor inside class**

# include <iostream>

using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute
    string model;  // Attribute
    int year;      // Attribute
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  // Print values
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

```
 ### copy constructor 
```c++
    #include <iostream>  

    using namespace std;  
    class A  
    {  
       public:  
        int x;  
        A(int a)                // parameterized constructor.  
        {  
          x=a;  
        }  
        A(A &i)               // copy constructor  
        {  
            x = i.x;  
        }  
    };  
 int main()  
 {  
      A a1(20);               // Calling the parameterized constructor.  
     A a2(a1);                //  Calling the copy constructor.  
     cout<<a2.x;  
      return 0;  
   }  

```



**shallow copy**
```c++
# include <iostream>  

using namespace std;  

 class Demo  
 {  
        int a;  
        int b;  
        int *p;  
        public:  
        Demo()  
        {  
            p=new int;  
        }  
        void setdata(int x,int y,int z)  
        {  
            a=x;  
            b=y;  
            *p=z;  
        }  
        void showdata()  
        {  
            std::cout << "value of a is : " <<a<< std::endl;  
            std::cout << "value of b is : " <<b<< std::endl;  
            std::cout << "value of *p is : " <<*p<< std::endl;  
        }  
  };  
  int main()  
  {  
      Demo d1;  
      d1.setdata(4,5,7);  
      Demo d2 = d1;  
      d2.showdata();  
        return 0;  
  }

```


 **deep copy**
```c++
    #include <iostream>  
    using namespace std;  
    class Demo  
    {  
        public:  
        int a;  
        int b;  
        int *p;  
      
        Demo()  
        {  
            p=new int;  
        }  
        Demo(Demo &d)  
        {  
            a = d.a;  
            b = d.b;  
            p = new int;  
            *p = *(d.p);  
        }  
        void setdata(int x,int y,int z)  
        {  
            a=x;  
            b=y;  
            *p=z;  
        }  
        void showdata()  
        {  
            std::cout << "value of a is : " <<a<< std::endl;  
            std::cout << "value of b is : " <<b<< std::endl;  
            std::cout << "value of *p is : " <<*p<< std::endl;  
        }  
    };  
 int main()  
{  
      Demo d1;  
      d1.setdata(4,5,7);  
      Demo d2 = d1;  
      d2.showdata();  
      return 0;  
 }  

```

### What is the use of a constructor?

Constructor is a special function having same name as class name. Constructor is called at the time of creating object to your class. Constructor is used to initialize the instance variables of an object while creating it. Constructor is also used to create virtual tables for virtual functions.

Does C++ compiler create default constructor when we write our own?
In C++, compiler by default creates default constructor for every class. But, if we define our own constructor, compiler doesn’t create the default constructor.

 What is the order of constructor execution in C++?
Ans. First base class constructor is executed and then derived class constructor, so execution happens from top to bottom in inheritance tree.

Why copy constructor argument should be const in C++?
There are some important reasons to use const in the copy constructor.

const keyword avoids accidental changes.
You would like to be able to create a copy of the const objects. But if you’re not passing your argument with a const qualifier, then you can’t create copies of const objects.
You couldn’t create copies from temporary reference, because temporary objects are rvalue, and can’t be bound to reference to non-const.

## Destructor 

 **What is destructor?**

 Destructor is a member function which is called when an object is deleted/destroyed or goes out of scope

```c++
    #include <iostream> 
 
    using namespace std;  

    class Employee  
     {  
       public:  
            Employee()    
            {    
                cout<<"Constructor Invoked"<<endl;    
            }    
            ~Employee()    
            {    
                cout<<"Destructor Invoked"<<endl;    
            }  
    };  
    int main(void)   
    {  
        Employee e1; //creating an object of Employee   
        Employee e2; //creating an object of Employee  
        return 0;  
    }  

```


 **What is the purpose of using a destructor in C++?**

 The main purpose of destructor is to free all the resources (opened files, opened sockets, database connections, resource locks etc.) which are allocated during your object’s life time.

```c++
// CPP program to demonstrate destructors.
class Geeks {
private:

  // a private-access pointer to integer
  int* myPrvIntPtr;
public:
  Geeks()
  {
    // default constructor
    myPrvIntPtr = new int(0);

    // allocate a new integer, place its address in myPrvIntPtr
  }

  ~Geeks()
  {
    // de-allocate the integer whose address
    // is stored in myPrvIntPtr
    delete myPrvIntPtr;  
  }
};

```

**What is the order of destructor execution in C++?**

 Generally derived class destructor, and then base class destructor. Except in case if we are taking a derived class object into a baseclass pointer (or reference variable), and we forget to give virtual keyword for base class destructor. See virtual destructor for details.

 Can we have virtual destructors? If so what is the use of virtual destructors.

Yes, we can. This is to make sure that the correct class destructor is called at run time. Specifically when we use base class pointer or reference to hold the derived class object. If we don’t have virtual destructor, then it will end up in calling only base class destructor.



```c++
// CPP program without virtual destructor
// causing undefined behavior

# include <iostream>

using namespace std;

class base {
public:
  base()
  {
    cout << "Constructing base \n";
  }
  ~base()
  {
    cout << "Destructing base \n";
  }
};

class derived : public base {
public:
  derived()
  {
    cout << "Constructing derived \n";
  }
  ~derived()
  {
    cout << "Destructing derived \n";
  }
};

int main(void)
{
  derived*d = new derived();
  base* b = d;
  delete b;
  getchar();
  return 0;
}
```
### Virtual Destructor 
 
## Friend Function 

**Friend funtion**

Friend Function in C++

1. Friend function is not a member function of a class to which it is a friend.
2. Friend function is declared inside the class with friend keyword.
3. It must be defined outside the class to which it is friend.
4. It can access any member of the class to which it is friend.
5. It cannot access members of the class directly.
6. It has no caller object.
7. It should not be defined with membership label (::).
8. Friend function can become friend to more than one class.

```c++
    #include <iostream>    
    using namespace std;    
    class Box    
    {    
        private:    
            int length;    
        public:    
            Box(): length(0) { }    
            friend int printLength(Box); //friend function    
    };    
    int printLength(Box b)    
    {    
       b.length += 10;    
        return b.length;    
    }    
    int main()    
    {    
        Box b;    
        cout<<"Length of box: "<< printLength(b)<<endl;    
        return 0;    
    }   

```

```c++
// friend function with two class

# include <iostream>  

using namespace std;  
class B;          // forward declarartion.  
class A  
{  
    int x;  
    public:  
    void setdata(int i)  
    {  
        x=i;  
    }  
    friend void min(A,B);         // friend function.  
};  
class B  
{  
    int y;  
    public:  
    void setdata(int i)  
    {  
        y=i;  
    }  
    friend void min(A,B);                    // friend function  
};  
void min(A a,B b)  
{  
    if(a.x<=b.y)  
    std::cout << a.x << std::endl;  
    else  
    std::cout << b.y << std::endl;  
}  
   int main()  
{  
   A a;  
   B b;  
   a.setdata(10);  
   b.setdata(20);  
   min(a,b);  
    return 0;  
 }

```
```c++
// c++ friend class

    #include <iostream>  
      
    using namespace std;  
      
    class A  
    {  
        int x =5;  
        friend class B;           // friend class.  
    };  
    class B  
    {  
      public:  
        void display(A &a)  
        {  
            cout<<"value of x is : "<<a.x;  
        }  
    };  
    int main()  
    {  
        A a;  
        B b;  
        b.display(a);  
        return 0;  
    }  

```

```c++
# include<iostream>

using namespace std;

class Complex
{
private:
  int real, imaginary;
  
public:
  void setData(int num1, int num2)
  {
    real = num1;
    imaginary = num2;
  }
  
  void showData()
  {
    cout << real << " " << imaginary;
  }
  
  friend void func(Complex);       //declaration of friend function inside class.
};

void func(Complex C)              //definition of friend function outside class.
{
  cout << "Sum is: " << C.real+C.imaginary;
}

int main()
{
  Complex C1,C2,C3;
  C1.setData(11,25);
  
  func(C1);
}

```
Friend function can become friend to more than one class.

```c++
# include<iostream>

using namespace std;

class B;                  //forward declaration of class B.

class A
{
private:
  int num1;
  
public:
  friend void fun(A, B);
  
  void setData(int x)
  {
    num1 = x;
  }
};

class B
{
private:
  int num2;
  
public:
  friend void fun(A, B);
  
  void setData(int y)
  {
    num2 = y;
  }
};

void fun(A o1, B o2)
{
  cout << "Sum is: " << o1.num1+o2.num2;
}

int main()
{
  A obj1;
  B obj2;
  
  obj1.setData(99);
  obj2.setData(11);
  
  fun(obj1, obj2);
}

```

**Operator Overloading in C++ using friend function**
The number of argument passed for operator overloading using friend function is one more that the number of arguments passed for operator overloading in member function.

```c++
# include<iostream>

using namespace std;

class Complex
{
private:
  int real, imaginary;
  
public:
  void setData(int num1, int num2)
  {
    real = num1;
    imaginary = num2;
  }
  
  void showData()
  {
    cout << real << " " << imaginary;
  }
  
  friend Complex operator+(Complex, Complex);        //declaration of friend function inside class.
};

Complex operator+(Complex C1, Complex C2)           //definition of friend function outside class.
{
  Complex temp;
  
  temp.real = C1.real+C2.real;
  temp.imaginary = C1.imaginary+C2.imaginary;
  return temp;
}

int main()
{
  Complex C1,C2,C3;
  
  C1.setData(3,4);
  C2.setData(5,6);
  
  C3 = C1+C2;          //C3=operator+(C1,C2)
  C3.showData();
}

```

**Overloading of unary operator using friend function**

We can also overload any unary operator by using friend function. We need to declare friend function as operator overloading inside class and defining it outside the class.
```c++
# include<iostream>

using namespace std;

class Complex
{
private:
  int real, imaginary;
  
public:
  void setData(int num1, int num2)
  {
    real = num1;
    imaginary = num2;
  }
  
  void showData()
  {
    cout<< real << " " << imaginary;
  }
  
  friend Complex operator-(Complex);
};

//Operator overloading of - symbol using friend function
Complex operator-(Complex C)
{
  Complex temp;
  
  temp.real = -C.real;
  temp.imaginary = -C.imaginary;
  return temp;
}

int main()
{
  Complex C1,C2;
  
  C1.setData(3,4);
  C2 = -C1;              //C2=operator-(C1);
  C2.showData();
}

```

**Insertion and Extraction Operator Overloading using friend function**

```c++
# include<iostream>

using namespace std;

class Complex
{
private:
  int real, imaginary;
  
public:
  void setData(int num1, int num2)
  {
    real = num1;
    imaginary = num2;
  }
  
  void showData()
  {
    cout << real << " " << imaginary;
  }
  
  friend ostream& operator << (ostream&, Complex);
  friend istream& operator >> (istream&, Complex);
};

ostream& operator << (ostream&dout, Complex C)
{
  cout << "\n real= " << C.real << "imaginary= " << C.imaginary;
  return dout;
}

istream& operator >> (istream&din, Complex &C)
{
  cin >> C.real >> C.imaginary;
  return din;
}

int main()
{
  Complex C1;
  
  cout << "Enter a Complex number:\n";
  cin >> C1;
  
  cout << "You Entered: ";
  cout << C1;                    //operator<<(cout, C1);
}

```
**Member function of one class can become friend to another class.**


```c++
# include<iostream>

using namespace std;

class A
{
public:
  void func1()
  {
    //...
  }
  
  void func2()
  {
    //...
  }
};

class B
{
  friend void A::func1();
  friend void A::func2();
};

```
If we want to make each and every member function of one class friend function of another class then use friend keyword before class and className in declaration of the friend function inside the class.


For Example:-
```c++
# include<iostream>

using namespace std;

class A
{
public:
  void func1()
  {
    //...
  }
  
  void func2()
  {
    //...
  }
};

class B
{
  //this will make func1 and func2 friend function to class B.
  friend class A;
};

```

## Inheritance

```c++
# include <iostream>

# include <string>

using namespace std;

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

```
###  multilevel inheritance 
```c++
# include <iostream>

using namespace std;

// Parent class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class." ;
    }
};

// Child class
class MyChild: public MyClass {
};

// Grandchild class
class MyGrandChild: public MyChild {
};

int main() {
  MyGrandChild myObj;
  myObj.myFunction();
  return 0;
}

```

**multiple inheritance**
```c++
# include <iostream>

using namespace std;

// Base class
class MyClass {
  public:
    void myFunction() {
      cout << "Some content in parent class.\n" ;
    }
};

// Another base class
class MyOtherClass {
  public:
    void myOtherFunction() {
      cout << "Some content in another class.\n" ;
    }
};

// Derived class
class MyChildClass: public MyClass, public MyOtherClass {
};

int main() {
  MyChildClass myObj;
  myObj.myFunction();
  myObj.myOtherFunction();
  return 0;
}

```

```C++
//acess specifier
// inheritance**

# include <iostream>

using namespace std;

// Base class
class Employee  {
  protected:  // Protected access specifier
    int salary;
};

// Derived class
class Programmer: public Employee {
  public:
    int bonus;
    void setSalary(int s) {
      salary = s;
    }
    int getSalary() {
      return salary;
    }
};

int main() {
  Programmer myObj;
  myObj.setSalary(50000);
  myObj.bonus = 15000;
  cout << "Salary: " << myObj.getSalary() << "\n";
  cout << "Bonus: " << myObj.bonus << "\n";
  return 0;
}

```

### single inheritance
```C++
// c++ 

# include <iostream>  

using namespace std;  
 class Account {  
   public:  
   float salary = 60000;
 };  
   class Programmer: public Account {  
   public:  
   float bonus = 5000;
   };
int main(void) {  
     Programmer p1;  
     cout<<"Salary: "<<p1.salary<<endl;
     cout<<"Bonus: "<<p1.bonus<<endl;
    return 0;  
}

```

 **single level inheritance**
```C++
    #include <iostream>  
    using namespace std;  
     class Animal {  
       public:  
     void eat() {   
        cout<<"Eating..."<<endl;   
     }    
       };  
       class Dog: public Animal    
       {    
           public:  
         void bark(){  
        cout<<"Barking...";   
         }    
       };   
    int main(void) {  
        Dog d1;  
        d1.eat();  
        d1.bark();  
        return 0;  
    }  

```

```C++
// single level inheritance

    #include <iostream>  
    using namespace std;  
    class A  
    {  
        int a = 4;  
        int b = 5;  
        public:  
        int mul()  
        {  
            int c = a*b;  
            return c;  
        }     
    };  
      
    class B : private A  
    {  
        public:  
        void display()  
        {  
            int result = mul();  
            std::cout <<"Multiplication of a and b is : "<<result<< std::endl;  
        }  
    };  
    int main()  
    {  
       B b;  
       b.display();  
      
        return 0;  
    }  

```
### multilevel inheritance
```c++
# include <iostream>  

using namespace std;  
 class Animal {  
   public:  
 void eat() {
    cout<<"Eating..."<<endl;
 }
   };  
   class Dog: public Animal
   {
       public:  
     void bark(){  
    cout<<"Barking..."<<endl;
     }
   };
   class BabyDog: public Dog
   {
       public:  
     void weep() {  
    cout<<"Weeping...";
     }
   };
int main(void) {  
    BabyDog d1;  
    d1.eat();  
    d1.bark();  
     d1.weep();  
     return 0;  
}

```

### multiple inheritance
```c++
   #include <iostream>  
    using namespace std;  
    class A  
    {  
        protected:  
         int a;  
        public:  
        void get_a(int n)  
        {  
            a = n;  
        }  
    };  

    class B  
    {  
        protected:  
        int b;  
        public:  
        void get_b(int n)  
        {  
            b = n;  
        }  
    };  
    class C : public A,public B  
    {  
       public:  
        void display()  
        {  
            std::cout << "The value of a is : " <<a<< std::endl;  
            std::cout << "The value of b is : " <<b<< std::endl;  
            cout<<"Addition of a and b is : "<<a+b;  
        }  
    };  
    int main()  
    {  
       C c;  
       c.get_a(10);  
       c.get_b(20);  
       c.display();  
      
        return 0;  
    }  

```
multiple inheritance
```c++
    #include <iostream>  
    using namespace std;  
    class A  
    {  
        protected:  
         int a;  
        public:  
        void get_a(int n)  
        {  
            a = n;  
        }  
    };  
      
    class B  
    {  
        protected:  
        int b;  
        public:  
        void get_b(int n)  
        {  
            b = n;  
        }  
    };  
    class C : public A,public B  
    {  
       public:  
        void display()  
        {  
            std::cout << "The value of a is : " <<a<< std::endl;  
            std::cout << "The value of b is : " <<b<< std::endl;  
            cout<<"Addition of a and b is : "<<a+b;  
        }  
    };  
    int main()  
    {  
       C c;  
       c.get_a(10);  
       c.get_b(20);  
       c.display();  
      
        return 0;  
    }  

```
 
### Hybrid inheritance
```c++
# include <iostream>  

using namespace std;  
class A  
{  
    protected:  
    int a;  
    public:  
    void get_a()  
    {  
       std::cout << "Enter the value of 'a' : " << std::endl;  
       cin>>a;  
    }  
};  
  
class B : public A
{  
    protected:  
    int b;  
    public:  
    void get_b()  
    {  
        std::cout << "Enter the value of 'b' : " << std::endl;  
       cin>>b;  
    }  
};  
class C
{  
    protected:  
    int c;  
    public:  
    void get_c()  
    {  
        std::cout << "Enter the value of c is : " << std::endl;  
        cin>>c;  
    }  
};  
  
class D : public B, public C  
{  
    protected:  
    int d;  
    public:  
    void mul()  
    {  
         get_a();  
         get_b();  
         get_c();  
         std::cout << "Multiplication of a,b,c is : " <<a*b*c<< std::endl;  
    }  
};  
int main()  
{  
    D d;  
    d.mul();  
    return 0;  
}  

```

### Hirerichal inheritance 
```c++
    #include <iostream>  
    using namespace std;  
    class Shape                 // Declaration of base class.  
    {  
        public:  
        int a;  
        int b;  
        void get_data(int n,int m)  
        {  
            a= n;  
            b = m;  
        }  
    };  
    class Rectangle : public Shape  // inheriting Shape class  
    {  
        public:  
        int rect_area()  
        {  
            int result = a*b;  
            return result;  
        }  
    };  
    class Triangle : public Shape    // inheriting Shape class  
    {  
        public:  
        int triangle_area()  
        {  
            float result = 0.5*a*b;  
            return result;  
        }  
    };  
    int main()  
    {  
        Rectangle r;  
        Triangle t;  
        int length,breadth,base,height;  
        std::cout << "Enter the length and breadth of a rectangle: " << std::endl;  
        cin>>length>>breadth;  
        r.get_data(length,breadth);  
        int m = r.rect_area();  
        std::cout << "Area of the rectangle is : " <<m<< std::endl;  
        std::cout << "Enter the base and height of the triangle: " << std::endl;  
        cin>>base>>height;  
        t.get_data(base,height);  
        float n = t.triangle_area();  
        std::cout <<"Area of the triangle is : "  << n<<std::endl;  
        return 0;  
    }  

```

## Polymorphism

**C++ polymorphirison**

Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance.
polymorphism occurs when there is a hierarchy of classes and they are related by inheritance.

C++ polymorphism means that a call to a member function will cause a different function to be executed depending on the type of object that invokes the function.



Objects to behave a differently in different condition.


**IMPORTANT POINTS ABOUT POLYMORPHISM**

-  A functionality can behave differently for different instances
- The behavior depends on the type of data used in the operation
- Polymorphism is used for implementing inheritance.


**ADVANTAGES OF POLYMORPHISM**
- It helps programmers reuse the code and classes once written, tested and implemented. They can be reused in many ways.
- Single variable name can be used to store variables of multiple data types(Float, double, Long, Int etc).
- Polymorphism helps in reducing the coupling between different functionalities.

**DISADVANTAGES OF POLYMORPHISM**

- One of the disadvantages of polymorphism is that developers find it difficult to implement polymorphism in codes.
- Run time polymorphism can lead to the performance issue as machine needs to decide which method or variable to invoke so it basically degrades the performances as decisions are taken at run time.
- Polymorphism reduces the readability of the program. One needs to identify the runtime behavior of the program to identify actual execution time.


```c++
# include <iostream>

# include <string>

using namespace std;

// Base class
class Animal {
  public:
    void animalSound() {
      cout << "The animal makes a sound \n" ;
    }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
      cout << "The pig says: wee wee \n" ;
    }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
      cout << "The dog says: bow wow \n" ;
    }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound();
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}

```


**Virtual Function in C++**

A virtual function is a member function which is declared within a base class and is re-defined (overridden) by a derived class. When you refer to a derived class object using a pointer or a reference to the base class, you can call a virtual function for that object and execute the derived class’s version of the function. 

- Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
- They are mainly used to achieve Runtime polymorphism
- Functions are declared with a virtual keyword in base class.
- The resolving of function call is done at runtime.

**Rules for Virtual Functions**

- Virtual functions cannot be static.
- A virtual function can be a friend function of another class.
- Virtual functions should be accessed using pointer or reference of base class type to achieve runtime polymorphism.
- The prototype of virtual functions should be the same in the base as well as derived class.
- They are always defined in the base class and overridden in a derived class. It is not mandatory for the derived class to override (or re-define the virtual function), in that case, the base class version of the function is used.
- A class may have virtual destructor but it cannot have a virtual constructor.

```C++
// CPP program to illustrate
// concept of Virtual Functions

# include<iostream>

using namespace std;

class base {
public:
 virtual void print()
 {
  cout << "print base class\n";
 }

 void show()
 {
  cout << "show base class\n";
 }
};

class derived : public base {
public:
 void print()
 {
  cout << "print derived class\n";
 }

 void show()
 {
  cout << "show derived class\n";
 }
};

int main()
{
 base *bptr;
 derived d;
 bptr = &d;

 // Virtual function, binded at runtime
 bptr->print();

 // Non-virtual function, binded at compile time
 bptr->show();

 return 0;
}

```

Output:  
```

print derived class
show base class

```

Working of virtual functions (concept of VTABLE and VPTR)
As discussed here, if a class contains a virtual function then compiler itself does two things.

If object of that class is created then a virtual pointer (VPTR) is inserted as a data member of the class to point to VTABLE of that class. For each new object created, a new virtual pointer is inserted as a data member of that class.
Irrespective of object is created or not, class contains as a member a static array of function pointers called VTABLE. Cells of this table store the address of each virtual function contained in that class.

```C++
// CPP program to illustrate
// working of Virtual Functions

# include<iostream>

using namespace std;

class base {
public:
 void fun_1() { cout << "base-1\n"; }
 virtual void fun_2() { cout << "base-2\n"; }
 virtual void fun_3() { cout << "base-3\n"; }
 virtual void fun_4() { cout << "base-4\n"; }
};

class derived : public base {
public:
 void fun_1() { cout << "derived-1\n"; }
 void fun_2() { cout << "derived-2\n"; }
 void fun_4(int x) { cout << "derived-4\n"; }
};

int main()
{
 base *p;
 derived obj1;
 p = &obj1;

 // Early binding because fun1() is non-virtual
 // in base
 p->fun_1();

 // Late binding (RTP)
 p->fun_2();

 // Late binding (RTP)
 p->fun_3();

 // Late binding (RTP)
 p->fun_4();

 // Early binding but this function call is
 // illegal (produces error) because pointer
 // is of base type and function is of
 // derived class
 // p->fun_4(5);

 return 0;
}

```

Output:  
```

base-1
derived-2
base-3
base-4

```

**Explanation:** Initially, we create a pointer of type base class and initialize it with the address of the derived class object. When we create an object of the derived class, the compiler creates a pointer as a data member of the class containing the address of VTABLE of the derived class.

Similar concept of Late and Early Binding is used as in above example. For fun_1() function call, base class version of function is called, fun_2() is overridden in derived class so derived class version is called, fun_3() is not overridden in derived class and is virtual function so base class version is called, similarly fun_4() is not overridden so base class version is called.

**NOTE:** fun_4(int) in derived class is different from virtual function fun_4() in base class as prototypes of both the functions are different.

**Limitations of Virtual Functions:**
Slower: The function call takes slightly longer due to the virtual mechanism and makes it more difficult for the compiler to optimize because it does not know exactly which function is going to be called at compile time.
Difficult to Debug: In a complex system, virtual functions can make it a little more difficult to figure out where a function is being called from.

What does dynamic dispatch mean?Permalink
In this context, dispatching just refers to the action of finding the right function to call. In the general case, when you define a method inside a class, the compiler will remember its definition and execute it every time a call to that method is encountered.

Consider the following example:
```C++
# include <iostream>

class A
{
public:
  void foo();
};

void A::foo()
{
  std::cout << "Hello this is foo" << std::endl;
}

```
Here, the compiler will create a routine for foo() and remember its address. This routine will be executed every time the compiler finds a call to foo() on an instance of A. Keep in mind that only one routine exists per class method, and is shared by all instances of the class. This process is known as static dispatch or early binding: the compiler knows which routine to execute during compilation.

**Virtual Destructors**
By now it should also be clear why it is always a good idea to make destructors of base classes virtual. Since derived classes are often handled via base class references, declaring a non-virtual destructor will be dispatched statically, obfuscating the destructor of the derived class:
```C++
# include <iostream>

class Base
{
public:
  ~Base()
  {
    std::cout << "Destroying base" << std::endl;
  }
};

class Derived : public Base
{
public:
  Derived(int number)
  {
    some_resource_ = new int(number);
  }

  ~Derived()
  {
    std::cout << "Destroying derived" << std::endl;
    delete some_resource_;
  }

private:
  int* some_resource_;
};

int main()
{
  Base* p = new Derived(5);
  delete p;
}

```
This will output:

> Destroying base
Making Base’s destructor virtual will result in the expected behavior:

> Destroying derived
> Destroying base

**Wrapping up**
- Function overriding makes it impossible to dispatch virtual functions statically (at compile time)
- Dispatching of virtual functions needs to happen at runtime
- The virtual table method is a popular implementation of dynamic dispatch
- For every class that defines or inherits virtual functions the compiler creates a virtual table
- The virtual table stores a pointer to the most specific definition of each virtual function
- For every class that has a vtable, the compiler adds an extra member to the class: the vpointer
- The vpointer points to the corresponding vtable of the class
- Always declare desctructors of base classes as virtual
  ## Compile time 
 
  ### Function Overloading
  **Function Overloading:**


Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters. When a function name is overloaded with different jobs it is called Function Overloading. 

In Function Overloading “Function” name should be the same and the arguments should be different. Function overloading can be considered as an example of a polymorphism feature in C++.

The parameters should follow any one or more than one of the following conditions for Function overloading:

Parameters should have a different type

```C++
add(int a, int b)
add(double a, double b)

```

```C++
# include <iostream>

using namespace std;

void add(int a, int b)
{
cout << "sum = " << (a + b);
}

void add(double a, double b)
{
  cout << endl << "sum = " << (a + b);
}

// Driver code
int main()
{
  add(10, 2);
  add(5.3, 6.2);

  return 0;
}

```


Parameters should have a different number 
```C++
add(int a, int b)
add(int a, int b, int c)

```

```C++
# include <iostream>

using namespace std;

void add(int a, int b)
{
cout << "sum = " << (a + b);
}

void add(int a, int b, int c)
{
  cout << endl << "sum = " << (a + b + c);
}

// Driver code
int main()
{
  add(10, 2);
  add(5, 6, 4);

  return 0;
}

```

Parameters should have a different sequence of parameters.
```C++
add(int a, double b)
add(double a, int b)
```

```C++
# include<iostream>

using namespace std;

void add(int a, double b)
{
  cout<<"sum = "<<(a+b);
}

void add(double a, int b)
{
  cout<<endl<<"sum = "<<(a+b);
}

// Driver code
int main()
{
  add(10,2.5);
  add(5.5,6);

  return 0;
}

```


```C++
# include <iostream>

using namespace std;

void print(int i) {
cout << " Here is int " << i << endl;
}
void print(double f) {
cout << " Here is float " << f << endl;
}
void print(char const *c) {
cout << " Here is char* " << c << endl;
}

int main() {
print(10);
print(10.10);
print("ten");
return 0;
}

```

### Causes of Function Overloading :

-  Type Conversion
-  Function with default arguments
- Function with pass by reference 

### Operator Overloading
  
overload most of the built-in operators available in C++. Thus, a programmer can use operators with user-defined types as well.

Overloaded operators are functions with special names: the keyword "operator" followed by the symbol for the operator being defined. Like any other function, an overloaded operator has a return type and a parameter list.
```

Box operator+(const Box&);

```
declares the addition operator that can be used to add two Box objects and returns final Box object. Most overloaded operators may be defined as ordinary non-member functions or as class member functions. In case we define above function as non-member function of a class then we would have to pass two arguments for each operand as follows −
```

Box operator+(const Box&, const Box&);

```

Overloadable/Non-overloadableOperators
Following is the list of operators which can be overloaded −


|  |  |  |  |  |  |  |
|--|--|--|--|--|--|--|
|+| -| *| / | |%  | |^| |
|&| | | ~ | ! | , | =  |
|<| > | <= | >= | ++ | -- |
|<<| >>| == | != | && | || |
|+=| -= | /= | %= | ^= | &= |
||=| *= | <<= | >>= | [] | () |
|->| ->*| new | new [] | delete| delete []|

Following is the list of operators, which can not be overloaded −
|  |  |  |  | |
|--|--|--|--| --|
| :: | .* | .| ?:| sizeof |


Syntax of Operator Overloading
```

return_type class_name  : : operator op(argument_list)  
{  
     // body of the function.  
}  

```
// program to overload the unary operator ++
```C++
# include <iostream>

using namespace std;
class Test
{
   private:
      int num;
   public:
       Test(): num(8){}
       void operator ++()         {
          num = num+2;
       }
       void Print() {
           cout<<"The Count is: "<<num;
       }
};
int main()
{
    Test tt;
    ++tt;  // calling of a function "void operator ++()"
    tt.Print();
    return 0;
}

```
Output:
```

The Count is: 10

```

// program to overload the binary operators.
```C++
# include <iostream>  

using namespace std;  
class A  
{  

    int x;  
      public:  
      A(){}  
    A(int i)  
    {  
       x=i;  
    }  
    void operator+(A);  
    void display();  
};  
  
void A :: operator+(A a)  
{  

    int m = x+a.x;  
    cout<<"The result of the addition of two objects is : "<<m;  
  
}  
int main()  
{  
    A a1(5);  
    A a2(4);  
    a1+a2;  
    return 0;  
}  

```
Output:
```

The result of the addition of two objects is : 9

```

###  Run Time 
  
#### Virtual Function    

#### Pure Virtual Function
    


#### Difference between Virtual Function and Pure Virtual Function

| Virtual function | Pure virtual function | 
| ---- |   ---- |
| A virtual function is a member function in a base class that can be redefined in a derived class. | A pure virtual function is a member function in a base class whose declaration is provided in a base class and implemented in a derived class. |
| The classes which are containing virtual functions are not abstract classes. |The classes which are containing pure virtual function are the abstract classes. |
| In case of a virtual function, definition of a function is provided in the base class. | In case of a pure virtual function, definition of a function is not provided in the base class. |
| The base class that contains a virtual function can be instantiated. | The base class that contains a pure virtual function becomes an abstract class, and that cannot be instantiated. |
| If the derived class will not redefine the virtual function of the base class, then there will be no effect on the compilation.  | If the derived class does not define the pure virtual function; it will not throw any error but the derived class becomes an abstract class.| 
| All the derived classes may or may not redefine the virtual function. |All the derived classes must define the pure virtual function. |

## Abstraction 

### Interfaces in C++ (Abstract Classes)

Abstract classes are the way to achieve abstraction in C++. Abstraction in C++ is the process to hide the internal details and showing functionality only. Abstraction can be achieved by two ways:

- Abstract class
- Interface

Abstract class and interface both can have abstract methods which are necessary for abstraction.

**C++ Abstract class**
In C++ class is made abstract by declaring at least one of its functions as <>strong>pure virtual function. A pure virtual function is specified by placing "= 0" in its declaration. Its implementation must be provided by derived classes.

Let's see an example of abstract class in C++ which has one abstract method draw(). Its implementation is provided by derived classes: Rectangle and Circle. Both classes have different implementation.

```c++
# include <iostream>  

using namespace std;  
 class Shape
{
    public:
    virtual void draw()=0;
};
 class Rectangle : Shape
{
    public:  
     void draw()
    {
        cout < <"drawing rectangle..." < <endl;
    }
};
class Circle : Shape
{
    public:  
     void draw()
    {
        cout <<"drawing circle..." < <endl;
    }
};
int main( ) {  
    Rectangle rec;  
    Circle cir;  
    rec.draw();
    cir.draw();
   return 0;  
}  

```

Output:
```

drawing rectangle...
drawing circle...

```

```C++
# include <iostream>

using namespace std;

// Abstract class
class Shape {
   protected:
    float dimension;

   public:
    void getDimension() {
        cin >> dimension;
    }

    // pure virtual Function
    virtual float calculateArea() = 0;
};

// Derived class
class Square : public Shape {
   public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape {
   public:
    float calculateArea() {
        return 3.14 *dimension* dimension;
    }
};

int main() {
    Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;

    return 0;
}

```

## Interface

**C++ Interface**

In C++, there is a way to describe the behaviour of a class without committing to a particular implementation of that class. This feature is offered by C++ objects and classes.

**Pure Virtual Functions**
Abstract class is nothing but a class with a pure virtual function.

**Virtual Function**
n C++, it is a member of a function in a class that we declare in the base class and we also redefine it in a derived class.

**Pure Virtual Function**
You can declare a pure virtual function but you cannot implement it. It is a virtual function that exists but cannot be implemented. You can declare a pure virtual function by placing ‘0’ in its declaration.

```C++
virtual float fun() = 0;
```

**C++ Abstract Class**
In C++, you can make a class abstract by declaring one of its functions as a pure virtual function. As we said, you can declare a pure virtual function by placing ‘0’ in its declaration.

```C++
# include <iostream>  

using namespace std;  
class Shapes
{
  public:
    virtual void drawShape()=0; //pure virtual function!
};
class Rectangle:Shapes
{
  public:  
    void drawShape()
    {
       cout<<"Drawing a rectangle!"<<endl;
    }
};
class Circle:Shapes
{
  public:  
    void drawShape()
    {
      cout<<"Drawing a circle!"<<endl;
    }
};  
  
int main() {  
      Rectangle r;  
      Circle c;
      cout<<"TechVidvan Tutorial: C++ Interfaces!"<<endl;
      r.drawShape();
      c.drawShape();
      return 0;  
}

```

```

OUTPUT:
TechVidvan Tutorial: C++ Interfaces!
Drawing a rectangle!
Drawing a circle!

```

```C++
# include <iostream>

using namespace std;
class OS
{
public:
virtual void size() = 0;
void type()
{
cout<<"It is a windows operating system!"<<endl;
}
};
class Windows: public OS
{
public:
void size()
{
cout<<"The size is 4.90gb!"<<endl;
}
};

int main()
{
cout<<"TechVidvan Tutorial: C++ Interfaces!"<<endl<<endl;
Windows data;
data.size();
data.type();
return 0;
}

```
```

Output:-

C++ Interfaces!

The size is 4.90gb!
It is a windows operating system!

```
Follow the rules before using C++ Interfaces

You should follow the rules before working with the interfaces in the C++ programming language.

1. You can only declare a pure virtual function but you cannot define it.

2. You can only assign 0 to the pure virtual function.

3. Also you cannot create an instance of a class.

4. You can create a pointer to the instance of the derived class with a reference of base abstract class.

For Example:-
```

OS *obj = new Windows();
obj->size();

```

## Encapsulation

Encapsulation is one of the key features of object-oriented programming. It involves the bundling of data members and functions inside a single class.

Bundling similar data members and functions inside a class together also helps in data hiding

all data members of class private and create a public functions, using them we can get the values from the data members or set the value to these data memebers.


In C++, we can bundle data members and functions that operate together inside a single class. For example,
```c++
class Rectangle {
  public:
    int length;
    int breadth;

    int getArea() {
      return length * breadth;
    }
};

```
```C++
// Program to calculate the area of a rectangle

# include <iostream>

using namespace std;

class Rectangle {
  public:
    // Variables required for area calculation
    int length;
    int breadth;

    // Constructor to initialize variables
    Rectangle(int len, int brth) : length(len), breadth(brth) {}

    // Function to calculate area
    int getArea() {
      return length * breadth;
    }
};

int main() {
  // Create object of Rectangle class
  Rectangle rect(8, 6);

  // Call getArea() function
  cout << "Area = " << rect.getArea();

  return 0;
}

```

Output
```

Area = 48

```
In the above example, we are calculating the area of a rectangle.

To calculate an area, we need two variables: length and breadth and a function: getArea(). Hence, we bundled these variables and function inside a single class named Rectangle.

Here, the variables and functions can be accessed from other classes as well. Hence, this is not data hiding.

**Note:** People often consider encapsulation as data hiding, but that's not entirely true.

Encapsulation refers to the bundling of related fields and methods together. This can be used to achieve data hiding. Encapsulation in itself is not data hiding.

**Why Encapsulation?**
In C++, encapsulation helps us keep related data and functions together, which makes our code cleaner and easy to read.
It helps to control the modification of our data members.

The getter and setter functions provide read-only or write-only access to our class members. For example,
```C++
getLength()  // provides read-only access
setLength()  // provides write-only access
```
It helps to decouple components of a system. For example, we can encapsulate code into multiple bundles.

These decoupled components (bundles) can be developed, tested, and debugged independently and concurrently. And any changes in a particular component do not have any effect on other components.

We can also achieve data hiding using encapsulation. In Example 1, if we change the length and breadth variables into private or protected, then the access to these fields is restricted.

And, they are kept hidden from outer classes. This is called data hiding.

**Data Hiding**
Data hiding is a way of restricting the access of our data members by hiding the implementation details. Encapsulation also provides a way for data hiding.

We can use access modifiers to achieve data hiding 

**C++ Data Hiding Using the private Specifier**

```C++
# include <iostream>

using namespace std;

class Rectangle {
   private:

    // Variables required for area calculation
    int length;
    int breadth;

   public:

    // Setter function for length
    void setLength(int len) {
      length = len;
    }

    // Setter function for breadth
    void setBreadth(int brth) {
      breadth = brth;
    }

    // Getter function for length
    int getLength() {
      return length;
    }

    // Getter function for breadth
    int getBreadth() {
      return breadth;
    }
    // Function to calculate area
    int getArea() {
      return length * breadth;
    }
};

int main() {
  // Create object of Rectangle class
  Rectangle rectangle1;

  // Initialize length using Setter function
  rectangle1.setLength(8);

  // Initialize breadth using Setter function
  rectangle1.setBreadth(6);

  // Access length using Getter function
  cout << "Length = " << rectangle1.getLength() << endl;

  // Access breadth using Getter function
  cout << "Breadth = " << rectangle1.getBreadth() << endl;

  // Call getArea() function
  cout << "Area = " << rectangle1.getArea();

  return 0;
}

```
Output
```

Length = 8
Breadth = 6
Area = 48

```

Here, we have made the length and breadth variables private.

This means that these variables cannot be directly accessed outside of the Rectangle class.

To access these private variables, we have used public functions setLength(), getLength(), setBreadth(), and getBreadth(). These are called getter and setter functions.

Making the variables private allowed us to restrict unauthorized access from outside the class. This is data hiding

Encapsulation is an Object Oriented Programming concept that binds together the data and functions that manipulate the data, and that keeps both safe from outside interference and misuse. Data encapsulation led to the important OOP concept of data hiding.

**Role of access specifiers in encapsulation**

As we have seen in above example, access specifiers plays an important role in implementing encapsulation in C++. The process of implementing encapsulation can be sub-divided into two steps:

The data members should be labeled as private using the private access specifiers
The member function which manipulates the data members should be labeled as public using the public access specifier

# Aggregation 

**C++ Aggregation (HAS-A Relationship)**

In C++, aggregation is a process in which one class defines another class as any entity reference. It is another way to reuse the class. It is a form of association that represents HAS-A relationship.
```C++
# include <iostream>  

using namespace std;  
class Address {  
    public:  
   string addressLine, city, state;
     Address(string addressLine, string city, string state)
    {
        this->addressLine = addressLine;
        this->city = city;
        this->state = state;
    }
};  
class Employee
    {
        private:  
        Address*address;  //Employee HAS-A Address
        public:  
        int id;
        string name;
        Employee(int id, string name, Address* address)
       {
           this->id = id;
           this->name = name;
           this->address = address;
       }
     void display()
       {
           cout<<id <<" "<<name<< " "<<
             address->addressLine<< " "<< address->city<< " "<<address->state<<endl;
       }
   };
int main(void) {  
    Address a1= Address("C-146, Sec-15","Noida","UP");
    Employee e1 = Employee(101,"Nakul",&a1);
            e1.display();
   return 0;  
}  

```
C++ Aggregation Definition: In C++, aggregation is a process in which one class (as an entity reference) defines another class. It provides another way to reuse the class. It represents a HAS-A relationship association, or it has class and relationship.

Note: HAS-A relation simply means dynamic or run-time binding.


To qualify as an aggregation, an object must define the following relationships:

- The member must be a part of a class.
- A member can belong to or more classes at a time.
- The member does not have any existence managed by the object.
- The member is unknown about the object's existence.
- The relationship is uni-directional.

**Advantages of C++ Aggregates:**

- The aggregation process shows the bi-directional relationship between objects of different classes.
- The HAS-A relationship provides dependencies that are easy to understand and co-relate.
- Aggregation provides code reusability and readability. Once the whole class is created, the reference provides the proper access to part classes.
- It defines a unidirectional relationship that to correctly associates the whole class to the part class


**Implementing Aggregations in C++**
Below are the points which will help you to understand the implementation of aggregations:-

- Compositional Nature:– Aggregation resembles composition. With a small difference in semantics, both are implemented identically.
- Member Constraints:– You can also add parts as member variables in aggregation. It also takes constructor parameters.
- Existence:– The parts will exist consequently. Class destruction can lead you to member variable destruction.

## Inheritance (IS-A) vs. Composition (HAS-A) Relationship

One of the advantages of an Object-Oriented programming language is code reuse. There are two ways we can do code reuse either by the vimplementation of inheritance (IS-A relationship), or object composition (HAS-A relationship). Although the compiler and Java virtual machine (JVM) will do a lot of work for you when you use inheritance, you can also get at the functionality of inheritance when you use composition.

**IS-A Relationship:**

In object-oriented programming, the concept of IS-A is a totally based on Inheritance, which can be of two types Class Inheritance or Interface Inheritance. It is just like saying "A is a B type of thing". For example, Apple is a Fruit, Car is a Vehicle etc. Inheritance is uni-directional. For example, House is a Building. But Building is not a House.

It is a key point to note that you can easily identify the IS-A relationship. Wherever you see an extends keyword or implements keyword in a class declaration, then this class is said to have IS-A relationship.

**HAS-A Relationship:** 

Composition(HAS-A) simply mean the use of instance variables that are references to other objects. For example Maruti has Engine, or House has Bathroom.

Let’s understand these concepts with an example of Car class.


**Comparing Composition and Inheritance**

It is easier to change the class implementing composition than inheritance. The change of a superclass impacts the inheritance hierarchy to subclasses.
You can't add to a subclass a method with the same signature but a different return type as a method inherited from a superclass. Composition, on the other hand, allows you to change the interface of a front-end class without affecting back-end classes.

Composition is dynamic binding (run-time binding) while Inheritance is static binding (compile time binding)
It is easier to add new subclasses (inheritance) than it is to add new front-end classes (composition) because inheritance comes with polymorphism. If you have a bit of code that relies only on a superclass interface, that code can work with a new subclass without change. This is not true of composition unless you use composition with interfaces. Used together, composition and interfaces make a very powerful design tool.
With both composition and inheritance, changing the implementation (not the interface) of any class is easy. The ripple effect of implementation changes remains inside the same class.

Don't use inheritance just to get code reuse If all you really want is to reuse code and there is no is-a relationship in sight, use composition.
Don't use inheritance just to get at polymorphism If all you really want is a polymorphism, but there is no natural is-a relationship, use composition with interfaces.

**Summary**

IS-A relationship based on Inheritance, which can be of two types Class Inheritance or Interface Inheritance.
Has-a relationship is composition relationship which is a productive way of code reuse

## Reference 

## Exception 

**C++ Exception**

Exception Handling in C++ is a process to handle runtime errors. We perform exception handling so the normal flow of the application can be maintained even after runtime errors.

In C++, exception is an event or object which is thrown at runtime. All exceptions are derived from std::exception class. It is a runtime error which can be handled. If we don't handle the exception, it prints exception message and terminates the program.

**Advantage**
It maintains the normal flow of the application. In such case, rest of the code is executed even after exception.
 **try catch** 

**C++ Exception Handling Keywords**
In C++, we use 3 keywords to perform exception handling:

- try
- catch, and
- throw

**throw** − A program throws an exception when a problem shows up. This is done using a throw keyword.

**catch** − A program catches an exception with an exception handler at the place in a program where you want to handle the problem. The catch keyword indicates the catching of an exception.

**try** − A try block identifies a block of code for which particular exceptions will be activated. It's followed by one or more catch blocks
```C++
# include <iostream>

using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw (age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Age is: " << myNum;  
  }
  return 0;
}

```

```

Access denied - You must be at least 18 years old.
Age is: 15

```
**C++ try/catch**
In C++ programming, exception handling is performed using try/catch statement. The C++ try block is used
```C++
# include <iostream>

using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (int myNum) {
    cout << "Access denied - You must be at least 18 years old.\n";
    cout << "Error number: " << myNum;  
  }
  return 0;
}

```
```

Access denied - You must be at least 18 years old.
Error number: 505

```

```C++
# include <iostream>  

using namespace std;  
float division(int x, int y) {  
   if( y == 0 ) {  
      throw "Attempted to divide by zero!";  
        }  
   return (x/y);  
}  
int main () {  
   int i = 25;  
   int j = 0;  
   float k = 0;  
   try {  
      k = division(i, j);  
      cout << k << endl;  
   }catch (const char* e) {  
      cerr << e << endl;  
   }  
   return 0;  
}

```
```

Attempted to divide by zero!

```
```C++
# include <iostream>

using namespace std;

int main()
{
 try {
 throw 'a';
 }
 catch (char x) {
  cout << "Caught ";
 }
 catch(...){
     cout<<"test";
 }
 return 0;
}

```

```

Caught

```

```C++
# include <iostream>

using namespace std;

int main()
{
 try {
 throw "testing";
 }
 catch (const char*) {
  cout << "Caught ";
 }
 catch(...){
     cout<<"test";
 }
 return 0;
}

```

```

Caught

```

**handle throw ... type .. catch**

special catch block called ‘catch all’ catch(…) that can be used to catch all types of exceptions.

```C++
# include <iostream>

using namespace std;

int main() {
  try {
    int age = 15;
    if (age >= 18) {
      cout << "Access granted - you are old enough.";
    } else {
      throw 505;
    }
  }
  catch (...) {
    cout << "Access denied - You must be at least 18 years old.\n";
  }
  return 0;
}

```
```

Access denied - You must be at least 18 years old.

```

**C++ User-Defined Exceptions**
The new exception can be defined by overriding and inheriting exception class functionality.

**C++ user-defined exception example**
Let's see the simple example of user-defined exception in which std::exception class is used to define the exception.
```C++
# include <iostream>  

# include <exception>  

using namespace std;  
class MyException : public exception{  
    public:  
        const char * what() const throw()  
        {  
            return "Attempted to divide by zero!\n";  
        }  
};  
int main()  
{  
    try  
    {  
        int x, y;  
        cout << "Enter the two numbers : \n";  
        cin >> x >> y;  
        if (y == 0)  
        {  
            MyException z;  
            throw z;  
        }  
        else  
        {  
            cout << "x / y = " << x/y << endl;  
        }  
    }  
    catch(exception& e)  
    {  
        cout << e.what();  
    }  
}  

```
Output:
```

Enter the two numbers :
10
2
x / y = 5

```
Output:
```

Enter the two numbers :
10
0
Attempted to divide by zero!

```
-->
Note: In above example what() is a public method provided by the exception class. It is used to return the cause of an exception.


In C++, try-catch blocks can be nested. Also, an exception can be re-thrown using “throw; ” 

```C++
# include <iostream>

using namespace std;

int main()
{
 try {
  try {
   throw 20;
  }
  catch (int n) {
   cout << "Handle Partially ";
   throw; // Re-throwing an exception
  }
 }
 catch (int n) {
  cout << "Handle remaining ";
 }
 return 0;
}

```
```

Handle Partially Handle remaining

```


When an exception is thrown, all objects created inside the enclosing try block are destructed before the control is transferred to catch block.



```C++
# include <iostream>

using namespace std;

class Test {
public:
 Test() { cout << "Constructor of Test " << endl; }
 ~Test() { cout << "Destructor of Test " << endl; }
};

int main()
{
 try {
  Test t1;
  throw 10;
 }
 catch (int i) {
  cout << "Caught " << i << endl;
 }
}

```
```

Constructor of Test
Destructor of Test
Caught 10

```

A derived class exception should be caught before a base class exception.

```C++
// C++ Program to demonstrate a catching of
// Derived exception and printing it successfully

# include <iostream>

using namespace std;

class Base {};
class Derived : public Base {};
int main()
{
 Derived d;
 // Some other functionalities
 try {
  // Monitored code
  throw d;
 }
 catch (Derived d) {
  cout << "Caught Derived Exception";
 }
 catch (Base b) {
  cout << "Caught Base Exception";
 }
 getchar(); // To read the next character
 return 0;
}

```

```

Caught Derived Exception

```

**Standard exception class**
Base class for standard exceptions.

All objects thrown by components of the standard library are derived from this class. Therefore, all standard exceptions can be caught by catching this type by reference.

It is declared as:
```C++
class exception {
public:
  exception () noexcept;
  exception (const exception&) noexcept;
  exception& operator= (const exception&) noexcept;
  virtual ~exception();
  virtual const char* what() const noexcept;
}

```

```C++
// exception example

# include <iostream>       // std::cerr

# include <typeinfo>       // operator typeid

# include <exception>      // std::exception

class Polymorphic {virtual void member(){}};

int main () {
  try
  {
    Polymorphic *pb = 0;
    typeid(*pb);  // throws a bad_typeid exception
  }
  catch (std::exception& e)
  {
    std::cerr << "exception caught: " << e.what() << '\n';
  }
  return 0;
}

```

## This pointer 

**C++ this Pointer**
In C++ programming, this is a keyword that refers to the current instance of the class. There can be 3 main usage of this keyword in C++.

- It can be used to pass current object as a parameter to another method.
- It can be used to refer current class instance variable.
- It can be used to declare indexers.

```C++
    #include <iostream>  

    using namespace std;  

    class Employee {  

       public:  

           int id;          // data member (also instance variable)      
           string name;     // data member(also instance variable)  
           float salary;  

           Employee(int id, string name, float salary)    
            {    
                this->id = id;    
                this->name = name;    
                this->salary = salary;   
            }    

           void display()    
            {    
                cout<<id<<"  "<<name<<"  "<<salary<<endl;    
            }    
    };  
    int main(void)
 {  
        Employee e1 =Employee(101, "Sonoo", 890000);  // creating an object of Employee
        Employee e2=Employee(102, "Nakul", 59000);  // creating an object of Employee  
        e1.display();
        e2.display();
        return 0;  
    }  

```

## Smart Pointer 


## SOLID 


## Design Pattern


## QT 

## MFC 


## gtest 

### Getting started with Google Test (GTest) on Ubuntu

Google test is a framework for writing C++ unit tests. In this short post, I explain how to set it up in Ubuntu.

Start by installing the gtest development package:
```

sudo apt-get install libgtest-dev

```
Note that this package only install source files. You have to compile the code yourself to create the necessary library files. These source files should be located at /usr/src/gtest. Browse to this folder and use cmake to compile the library:
```

sudo apt-get install cmake # install cmake
cd /usr/src/gtest
sudo cmake CMakeLists.txt
sudo make

 ```
# copy or symlink libgtest.a and libgtest_main.a to your /usr/lib folder
```

sudo cp *.a /usr/lib

```

Lets say we now want to test the following simple squareRoot function:

```C++
// whattotest.cpp

# include <math.h>

double squareRoot(const double a) {
    double b = sqrt(a);
    if(b != b) { // nan check
        return -1.0;
    }else{
        return sqrt(a);
    }
}

```

In the following code, we create two tests that test the function using a simple assertion. There exists many other assertion macros in the framework (see http://code.google.com/p/googletest/wiki/Primer#Assertions). The code contains a small main function that will run all of the tests automatically. Nice and simple!

```C++
// tests.cpp

# include "whattotest.cpp"

# include <gtest/gtest.h>

TEST(SquareRootTest, PositiveNos) {
    ASSERT_EQ(6, squareRoot(36.0));
    ASSERT_EQ(18.0, squareRoot(324.0));
    ASSERT_EQ(25.4, squareRoot(645.16));
    ASSERT_EQ(0, squareRoot(0.0));
}

TEST(SquareRootTest, NegativeNos) {
    ASSERT_EQ(-1.0, squareRoot(-15.0));
    ASSERT_EQ(-1.0, squareRoot(-0.2));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

```

The next step is to compile the code. I’ve set up a small CMakeLists.txt file below to compile the tests. This file locates the google test library and links it with the test application. Note that we also have to link to the pthread library or the application won’t compile.

cmake_minimum_required(VERSION 2.6)
 
### Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
### Link runTests with what we want to test and the GTest and pthread library
add_executable(runTests tests.cpp)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
Compile and run the tests:

```

cmake CMakeLists.txt
make
./runTests

```
Have fun testing! You can download all of the code above at my Github page: https://github.com/smistad/GTest

References
http://code.google.com/p/googletest/wiki/Documentation
http://www.ibm.com/developerworks/aix/library/au-googletestingframework.html


### GTest Framework

**What is Googletest?**
- It is a test framework i.e., a software tool for writing and running unit tests.
- It is a library for writing C++ tests.
- It is based on xUnit architecture which is a set of “Frameworks” for programming and automated execution of test cases.

**Why Googletest?**
- Googletest helps us to write better C++ tests.
- Independent and Repeatable: Googletest isolates the tests by running each of them on a different object.
- Portable and Reusable: Googletest works on different Oses (Linux, Windows, or a Mac), with different compilers.
- When tests fail, it should provide as much information about the problem as possible.

**Nomenclature:**
- TestSuite:It is used for grouping related tests.
- TEST(): It exercises a particular program path with specific input values and verify the result.


**Basic Concepts:**
Assertions:
A statements that check whether a condition is true.
Output: success, nonfatal failure, or fatal failure(aborts the current function).

Test fixture class:
Collection of multiple tests in a test suite that need to share common objects and subroutines.
In below lines * represent multiple character such as EQ / NE / LT / LE / GT / GE.

- ASSERT_*: Generate fatal failures when they fail, and abort the current function immediately. (possibly skipping clean-up code that comes after it, it may cause a space leak).
- EXPECT_*:Generate nonfatal failures, which don’t abort the current function.
Examples:
ASSERT_EQ, ASSERT_NE, ASSERT_LT, ASSERT_GT, ASSERT_GE.
EXPECT_WQ, EXPECT_NE, EXPECT_LT, EXPECT_GT, EXPECT_GE.


| Fatal assertion | Nonfatal assertion | Verifies |
| ---- | ----| --- |
| ASSERT_TRUE (condition); | EXPECT_TRUE (condition); | condition is true |
| ASSERT_FALSE (condition); | EXPECT_FALSE (condition);  | condition is false |
| ASSERT_STREQ(str1, str2); | EXPECT_STREQ(str1, str2); the two string str1 and str2 have the same content |
| ASSERT_STRNE(str1, str2); | EXPECT_STRNE(str1, str2); | the two strings str1 and str2 have different content |
| ASSERT_STRCASEEQ(str1, str2); | EXPECT_STRCASEEQ(str1, str2); | the two string str1 and str2 have the same content, ignoring the case |
| ASSERT_STRCASENE(str1, str2); | EXPECT_STRSTRCASENE(str1, str2); |the two strings str1 and str2 have different content, ignoring the case |


**Simple tests:**
TEST():
- A macro to define and name a test function.
- Use the various Googletest assertions to check values.
- If any assertion in the test fails (either fatally or non-fatally), or if the test crashes, the entire test fails. Otherwise, it succeeds.
```C++
TEST(TestSuiteName, TestName) {
      ... test body ...
   }

```
Test Fixtures:
- Using the Same Data Configuration for Multiple Tests.
- Derive a class from ::testing::Test. Start its body with protected:, as we will want to access fixture members from sub-classes.
- If necessary, write a default constructor or SetUp().
- If necessary, write a default destructor or TearDown().
- Use TEST_F(), instead of TEST().
```C++
TEST_F(TestFixtureName, TestName) {
   ... test body ...
}

```

**Invoking the Tests:**
RUN_ALL_TESTS();
- Returns 0: All tests are successful.
- Returns 1: otherwise.

Examples:
A factorial function:

```C++
int factorial(int n)
{
    // If n < 1;
    return -1;

    // Else factorial = n!;
    return factorial;
}

```
```C++
TEST(FactorialTest, FactorialOfZeroShouldBeOne)
{
    ASSERT_EQ(1, factorial(0));
}

TEST(FactorialTest, FactorialOfPositiveNos)
{
    ASSERT_EQ(1, factorial(1));
    ASSERT_EQ(24, factorial(4));
    ASSERT_EQ(120, factorial(5));
}

```
```C++
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
```
**Command Line Arguments:**
Dump the output into XML format by passing:
–gtest_output=”xml:report.xml”

If want to run multiple times:
–gtest_repeat=2

Debugger invoked on failure:
–gtest_break_on_failure

Not all the tests needs to be run all the times:
–gtest_filter=<test string>

## gmock
  
## NativeUnitTest

## CPP Coding  and Test Guidelines

**Summary Tag**

```c++
///  <Summary>
///
/// </Summary>
```

**Header File**

**Namespace**

**Class Name**

**Constructor**

**Destructor**

**Function/ Methods and Description for parameter and return**

**variable name**

**macros**

**Interface**

**.cpp and .h file**

**Test**

**gmock**
