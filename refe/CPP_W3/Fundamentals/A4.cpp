// C++ variable


#include <iostream>
using namespace std;

int main() {

  int myNum = 15;
  cout << myNum;
  
  
   int myNum;
  myNum = 15;
  cout << myNum;
  
   int myNum = 15;   // Now myNum is 15
  myNum = 10;       // Now myNum is 10
  cout << myNum;
  
   int myAge = 35;
  cout << "I am " << myAge << " years old.";
  
  
  int x = 5;
  int y = 6;
  int sum = x + y;
  cout << sum;
  
  int x = 5, y = 6, z = 50;  
  cout << x + y + z;
  
  
  // Constant 
  
  const int minutesPerHour = 60;
  const float PI = 3.14;
  cout << minutesPerHour << "\n";
  cout << PI;
  
  return 0;
}


