#include <iostream>
using namespace std;

// Base class
class Shape 
{
public:
	Shape(int l, int w)
	{
		length = l;
		width = w;
	} // default constructor
	int get_Area()
	{
		cout << "This is call to parent class area" << endl;
	}

protected:
	int length, width;
};

// Derived class
class Square : public Shape 
{
public:
	Square(int l = 0, int w = 0)
		: Shape(l, w)
	{
	} // declaring and initializing derived class
	// constructor
	int get_Area()
	{
		cout << "Square area: " << length * width << endl;
		return (length * width);
	}
};
// Derived class
class Rectangle : public Shape 
{
public:
	Rectangle(int l = 0, int w = 0)
		: Shape(l, w)
	{
	} // declaring and initializing derived class
	// constructor
	int get_Area()
	{
		cout << "Rectangle area: " << length * width
			<< endl;
		return (length * width);
	}
};

int main(void)
{
	Shape* s;
	Square sq(5, 5); // making object of child class Sqaure
	Rectangle rec(4, 5); // making object of child class Rectangle

	s = &sq;
	s->get_Area();
	s = &rec;
	s->get_Area();

	return 0;
}

