// C++ Operator



#include <iostream>
using namespace std;

int main() {
	// Arithmetic Operators
  int x = 100 + 50;
  cout << x;
  
   int sum1 = 100 + 50;        // 150 (100 + 50)
  int sum2 = sum1 + 250;      // 400 (150 + 250)
  int sum3 = sum2 + sum2;     // 800 (400 + 400)
  cout << sum1 << "\n";
  cout << sum2 << "\n";
  cout << sum3;
  
  
  // Assignment Operators
  
  int x = 10;
  cout << x;
  
  
   int x = 10;
  x += 5;
  cout << x;
  
  // Comparision Operator
   int x = 5;
  int y = 3;
  cout << (x > y); // returns 1 (true) because 5 is greater than 3
  
  // Logical Operator
  int x = 5;
  int y = 3;
  cout << (x > 3 && x < 10); // returns true (1) because 5 is greater than 3 AND 5 is less than 10
  
  
  return 0;
}
