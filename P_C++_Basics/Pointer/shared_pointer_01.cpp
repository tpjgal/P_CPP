#include <iostream>
#include <memory>

class MyClass{

 public:
	 int a;
	 MyClass() { std::cout << "Default Constructor\n"; a = 10; }
	 MyClass(int value = 100) { std::cout << "Parametrized 	Constructor\n"; a = value; }
};

int main() {
	 // Objects of MyClass
	 MyClass my_obj(250);
	 
	 // Construct a pointer using make_shared
	 std::shared_ptr<MyClass> my_ptr_1 = 	std::make_shared<MyClass>(my_obj);
	 std::cout << "Current Reference Count of my_ptr_1 = " << 	my_ptr_1.use_count() << std::endl;
	
	 // And another shared pointer to the same location!
	 std::shared_ptr<MyClass> my_ptr_2 = my_ptr_1;
	 std::cout << "Current Reference Count of my_ptr_1 = " << 	my_ptr_1.use_count() << std::endl;
	 std::cout << "Current Reference Count of my_ptr_2 = " << 	my_ptr_2.use_count() << std::endl;
	 std::cout << "Value of a (from dereferencing my_ptr_1): " << 	my_ptr_1->a << std::endl;
	 std::cout << "Value of a (from dereferencing my_ptr_2): " << 	my_ptr_2->a << std::endl;
	
	 // Both the pointers will automatically get destroyed, since the 
	//objects are at the end of their scopes
	 // But if we want to explicitly free the raw pointer, we can use
	//unique_ptr.reset()
	 std::cout << "Freeing the pointers...\n";
	 my_ptr_1.reset();
	 std::cout << "Freed my_ptr_1\n";
	 std::cout << "Current Reference Count of my_ptr_1 = " << 	my_ptr_1.use_count() << std::endl;
	 std::cout << "Current Reference Count of my_ptr_2 = " << 	my_ptr_2.use_count() << std::endl;
	 my_ptr_2.reset();
	 std::cout << "Freed my_ptr_2\n";
	 std::cout << "Current Reference Count of my_ptr_1 = " << 	my_ptr_1.use_count() << std::endl;
	 std::cout << "Current Reference Count of my_ptr_2 = " << 	my_ptr_2.use_count() << std::endl;
	 return 0;
}

/*
Output:

Parametrized    Constructor
Current Reference Count of my_ptr_1 = 1
Current Reference Count of my_ptr_1 = 2
Current Reference Count of my_ptr_2 = 2
Value of a (from dereferencing my_ptr_1): 250
Value of a (from dereferencing my_ptr_2): 250
Freeing the pointers...
Freed my_ptr_1
Current Reference Count of my_ptr_1 = 0
Current Reference Count of my_ptr_2 = 1
Freed my_ptr_2
Current Reference Count of my_ptr_1 = 0
Current Reference Count of my_ptr_2 = 0

*/