// C++ Function Overloading

#include <iostream>
using namespace std;

int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}


int plusFunc1(int x, int y) {
  return x + y;
}

double plusFunc1(double x, double y) {
  return x + y;
}



int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  
  int myNum1 = plusFunc1(8, 5);
  double myNum2 = plusFunc1(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  
  
  return 0;
}


