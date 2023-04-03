// FileName:Add_Num_c++.cpp:
#include <iostream>
int main()
 {
	int a, b;
	std::cout << "Input two numbers:\n";
	std::cin >> a >> b;
	int sum = a + b; // Declaration of sum
	std::cout << "Sum of "
	<< a << " and "
	<< b << " is: "
	<< sum << std::endl;
	return 0;
}
