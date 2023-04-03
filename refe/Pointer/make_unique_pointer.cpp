#include <iostream>
#include <memory>

class MyClass{

 public:
	 int a;
	 MyClass() { std::cout << "Default Constructor\n"; a = 10; }
	 MyClass(int value = 100) 
	 { 
		 std::cout << "Parametrized  Constructor\n"; a = value; 
	 }
};

int main() {
	 // Object of MyClass
	 MyClass my_obj(250);
	 
	 // Construct the pointer using make_unique()
	 std::unique_ptr<MyClass> my_ptr_1 = std::make_unique<MyClass>(my_obj);
	
	 // Create a new object and get the unique_ptr to it
	 std::unique_ptr<MyClass> my_ptr_2(new MyClass(500));
	 
	 std::cout << "Value of a (my_ptr_1): " << my_ptr_1->a << std::endl;
	 std::cout << "Value of a (my_ptr_2): " << my_ptr_2->a << std::endl;
	
	 // Both the pointers will automatically get destroyed, since the 
	//objects are at the end of their scopes
	 // But if we want to explicitly free the raw pointer, we can use 
	//unique_ptr.reset()
	
	 std::cout << "Freeing the pointers...\n";
	 my_ptr_1.reset();
	 my_ptr_2.reset();
	 return 0;
}

/*
Output:

Parametrized  Constructor
Parametrized  Constructor
Value of a (my_ptr_1): 250
Value of a (my_ptr_2): 500
Freeing the pointers...
*/