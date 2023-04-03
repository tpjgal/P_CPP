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
	 {  // calculate area 
		return length * breadth; // return the area 
	 } 
 }; 
 
 int main() 
 { 

	 unique_ptr<Rectangle> P1(new Rectangle(20, 5)); 
	 cout << P1->area() << endl; // This'll print 100 

	 // unique_ptr<Rectangle> P2(P1); 
	 unique_ptr<Rectangle> P2; 
	 P2 = move(P1); 

	 // This'll print 100 
	 cout << P2->area() << endl; 

	 return 0; 
 } 
 
 /*
 
 Output:
 
 100
100

*/
