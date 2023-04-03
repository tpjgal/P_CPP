#include <iostream> 
 using namespace std; 
 
 template <class T> // Create a template class 
 
 class SmartPtr { 
 
	 T* ptr; // Actual pointer 
	 
	 public: 
	 
	 // Constructor 
	explicit SmartPtr(T* p = NULL) { ptr = p; } 

	 // Destructor 
	 ~SmartPtr() { delete (ptr); } 
	 
	 // Overloading dereferncing operator 
	 T& operator*() { return *ptr; } 
	 
	 // Overloading arrow operator so that 
	 // members of T can be accessed 
	 // like a pointer (useful if T represents 
	 // a class or struct or union type) 
	 T* operator->() { return ptr; } 
 
 }; 
 
 int main() 
 { 
 
	 SmartPtr<int> ptrobj(new int()); 
	 *ptrobj = 100; 
	 cout << *ptrobj; 
	 return 0; 
 
 }
 
 /*
 
 Output:
 
 100 
 */