#include <iostream> 
 using namespace std; 

class SmartPtr { // Create the class to implement smart Pointer 

	int* ptr; // Actual pointer 
 
 public: 
 
	 // Create an explicit constructor 
	 explicit SmartPtr(int* p = NULL) { ptr = p; } 
 
	 // Destructor to deallocate the resource used 
	 ~SmartPtr() { delete (ptr); } 
 
	 // Overloading dereferencing operator 
	 int& operator*() { return *ptr; } 
 
 }; 
 
 int main() 
 { 
	SmartPtr ptrobj(new int()); 
	*ptrobj = 100; 
    cout << *ptrobj; 
	
	// We don't need to call delete ptrobj: when the object 
	// ptrobj goes out of scope, the destructor for it is automatically 
	// called, and destructor does delete ptrobj. 

	return 0; 
}

 /*
 
 Output:
 
 100 
 */