#include <iostream> 
 #include <memory> 
 
 using namespace std; 
 
 class Rectangle { // Create the class 
 
	 // Data members 
	 int length; // length of rectangle 
	 int breadth; // breadth of rectangle 
 
 public: 
 
	 Rectangle(int l, int b) 
	 { // parameterised constructor 
		 length = l; 
		 breadth = b; 
	 } 

	 int area() 
	 { // calculate area of rectangle 
		return length * breadth; // return area
	 } 
 }; 
 
 int main() 
 { 
 
	 shared_ptr<Rectangle> P1(new Rectangle(20, 5)); // create shared //ptr P1 
	 
	 // This'll print 100 
	 cout << P1->area() << endl; 
	 
	 // Create shared ptr P2 
	 shared_ptr<Rectangle> P2; 
	 P2 = P1; 
	 
	 // This'll print 100 
	 cout << P2->area() << endl; 

	 // This'll now not give an error, 
	 cout << P1->area() << endl; // prints 100 

	 // reference counter of P2 is 2 
	 cout << P1.use_count() << endl; // prints 2 
	 return 0; 
 } 
 
 /*
 Output: 
 100
100
100
2
 
 */
 