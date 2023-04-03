# C++ Operator Overloading




## Table of contents

1. [Operator Overloading in Unary Operators](#operator-overloading-in-unary-operators)



In C++, we can change the way operators work for user-defined types like objects and structures. This is known as operator overloading

## Operator Overloading in Unary Operators

Unary operators operate on only one operand. 
The increment operator ++ and decrement operator -- are examples of unary operators.

```
// Overload ++ when used as prefix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}
```
/*
Count: 6
*/
```
// Overload ++ when used as prefix and postfix

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public:

    // Constructor to initialize count to 5
    Count() : value(5) {}


    // Overload ++ when used as prefix
    void operator ++ () {
        ++value;
    }


    // Overload ++ when used as postfix
    void operator ++ (int) {
        value++;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1;

    // Call the "void operator ++ (int)" function
    count1++;
    count1.display();

    // Call the "void operator ++ ()" function
    ++count1;

    count1.display();
    return 0;
}
/*
Count: 6
Count: 7
*/

```
 Return Value from Operator Function (++ Operator)
```

#include <iostream>
using namespace std;

class Count {
   private:
    int value;

   public
       :
    // Constructor to initialize count to 5
    Count() : value(5) {}

    // Overload ++ when used as prefix
    Count operator ++ () {
        Count temp;

        // Here, value is the value attribute of the calling object
        temp.value = ++value;

        return temp;
    }

    // Overload ++ when used as postfix
    Count operator ++ (int) {
        Count temp;

        // Here, value is the value attribute of the calling object
        temp.value = value++;

        return temp;
    }

    void display() {
        cout << "Count: " << value << endl;
    }
};

int main() {
    Count count1, result;

    // Call the "Count operator ++ ()" function
    result = ++count1;
    result.display();

    // Call the "Count operator ++ (int)" function
    result = count1++;
    result.display();

    return 0;
}

/*
Count: 6
Count: 6
*/
```


Operator Overloading in Binary Operators


Binary operators work on two operands. 


```
// C++ program to overload the binary operator +
// This program adds two complex numbers

#include <iostream>
using namespace std;

class Complex {
   private:
    float real;
    float imag;

   public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter real and imaginary parts respectively: ";
        cin >> real;
        cin >> imag;
    }

    // Overload the + operator
    Complex operator + (const Complex& obj) {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }

    void output() {
        if (imag < 0)
            cout << "Output Complex number: " << real << imag << "i";
        else
            cout << "Output Complex number: " << real << "+" << imag << "i";
    }
};

int main() {
    Complex complex1, complex2, result;

    cout << "Enter first complex number:\n";
    complex1.input();

    cout << "Enter second complex number:\n";
    complex2.input();

   // complex1 calls the operator function
   // complex2 is passed as an argument to the function
    result = complex1 + complex2;
    result.output();

    return 0;
}
/*
Enter first complex number:
Enter real and imaginary parts respectively: 9 5
Enter second complex number:
Enter real and imaginary parts respectively: 7 6
Output Complex number: 16+11i
*/

```

using & makes our code efficient by referencing the complex2 object instead of making a duplicate object inside the operator function.

using const is considered a good practice because it prevents the operator function from modifying complex2.



Things to Remember in C++ Operator Overloading

    Two operators = and & are already overloaded by default in C++. For example, to copy objects of the same class, we can directly use the = operator. We do not need to create an operator function.
    Operator overloading cannot change the precedence and associativity of operators. However, if we want to change the order of evaluation, parentheses should be used.

There are 4 operators that cannot be overloaded in C++. They are:
        :: (scope resolution)
        . (member selection)
        .* (member selection through pointer to function)
        ?: (ternary operator)

Prefix ++ Increment Operator Overloading with no return type

```
#include <iostream>
using namespace std;

class Check
{
    private:
       int i;
    public:
       Check(): i(0) {  }
       void operator ++() 
          { ++i; }
       void Display() 
          { cout << "i=" << i << endl; }
};

int main()
{
    Check obj;

    // Displays the value of data member i for object obj
    obj.Display();

    // Invokes operator function void operator ++( )
    ++obj; 
  
    // Displays the value of data member i for object obj
    obj.Display();

    return 0;
}
/*
Output

i=0
i=1
*/
```

 Prefix Increment ++ operator overloading with return type

 ```
 #include <iostream>
using namespace std;

class Check
{
  private:
    int i;
  public:
    Check(): i(0) {  }

    // Return type is Check
    Check operator ++()
    {
       Check temp;
       ++i;
       temp.i = i;

       return temp;
    }

    void Display()
    { cout << "i = " << i << endl; }
};

int main()
{
    Check obj, obj1;
    obj.Display();
    obj1.Display();

    obj1 = ++obj;

    obj.Display();
    obj1.Display();

    return 0;
}
/*
Output

i = 0
i = 0
i = 1
i = 1

*/

```

Postfix Increment ++ Operator Overloading


```
#include <iostream>
using namespace std;

class Check
{
  private:
    int i;
  public:
    Check(): i(0) {  }
    Check operator ++ ()
    {
        Check temp;
        temp.i = ++i;
        return temp;
    }

    // Notice int inside barcket which indicates postfix increment.
    Check operator ++ (int)
    {
        Check temp;
        temp.i = i++;
        return temp;
    }

    void Display()
    { cout << "i = "<< i <<endl; }
};

int main()
{
    Check obj, obj1;    
    obj.Display(); 
    obj1.Display();

    // Operator function is called, only then value of obj is assigned to obj1
    obj1 = ++obj;
    obj.Display();
    obj1.Display();

    // Assigns value of obj to obj1, only then operator function is called.
    obj1 = obj++;
    obj.Display();
    obj1.Display();

    return 0;
}
/*
Output

i = 0
i = 0
i = 1
i = 1
i = 2
i = 1
*/
```

Operator Overloading of Decrement -- Operator

```

#include <iostream>
using namespace std;

class Check
{
  private:
    int i;
  public:
    Check(): i(3) {  }
    Check operator -- ()
    {
        Check temp;
        temp.i = --i;
        return temp;
    }

    // Notice int inside barcket which indicates postfix decrement.
    Check operator -- (int)
    {
        Check temp;
        temp.i = i--;
        return temp;
    }

    void Display()
    { cout << "i = "<< i <<endl; }
};

int main()
{
    Check obj, obj1;    
    obj.Display(); 
    obj1.Display();

    // Operator function is called, only then value of obj is assigned to obj1
    obj1 = --obj;
    obj.Display();
    obj1.Display();

    // Assigns value of obj to obj1, only then operator function is called.
    obj1 = obj--;
    obj.Display();
    obj1.Display();

    return 0;
}
/*
Output

i = 3
i = 3
i = 2
i = 2
i = 1
i = 2
*/
```

Operators that can be overloaded
We can overload

    Unary operators
    Binary operators
    Special operators ( [ ], () etc)
 
But, among them, there are some operators that cannot be overloaded. They are

    Scope resolution operator                                : :
    Member selection operator                               
    Member selection through                                   *                               
    
Pointer to member variable

    Conditional operator                                         ? :
    Sizeof operator                                             sizeof()
 
Operators that can be overloaded

    Binary Arithmetic     ->     +, -, *, /, %
    Unary Arithmetic     ->     +, -, ++, —
    Assignment     ->     =, +=,*=, /=,-=, %=
    Bit- wise      ->     & , | , << , >> , ~ , ^
    De-referencing     ->     (->)
    Dynamic memory allocation and De-allocation     ->     New, delete 
    Subscript     ->     [ ]
    Function call     ->     ()
    Logical      ->     &,  | |, !
    Relational     ->     >, < , = =, <=, >=

```
#include <iostream>
using namespace std;

class ComplexNumber{
private:
int real;
int imaginary;
public:
ComplexNumber(int real, int imaginary){
	this->real = real;
	this->imaginary = imaginary;
}
void print(){
	cout<<real<<" + i"<<imaginary;
}
ComplexNumber operator+ (ComplexNumber c2){
	ComplexNumber c3(0,0);
	c3.real = this->real+c2.real;
	c3.imaginary = this->imaginary + c2.imaginary;
	return c3;
}
};
int main() {
	ComplexNumber c1(3,5);
	ComplexNumber c2(2,4);
	ComplexNumber c3 = c1 + c2;
	c3.print();
	return 0;
}

/*
Output
5 + i9
*/
```

```
#include <iostream>
using namespace std;
class Fraction
{
private:
	int num, den;
public:
	Fraction(int n, int d) { num = n; den = d; }

	// Conversion operator: return float value of fraction
	operator float() const {
		return float(num) / float(den);
	}
};

int main() {
	Fraction f(2, 5);
	float val = f;
	cout << val << '\n';
	return 0;
}
/*
Output
0.4
*/
```

```
#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;
public:
	Point(int i = 0, int j = 0) {
		x = i; y = j;
	}
	void print() {
		cout << "x = " << x << ", y = " << y << '\n';
	}
};

int main() {
	Point t(20, 20);
	t.print();
	t = 30; // Member x of t becomes 30
	t.print();
	return 0;
}

/*
Output
x = 20, y = 20
x = 30, y = 0
*/

```