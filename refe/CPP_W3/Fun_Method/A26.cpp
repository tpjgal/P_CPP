//C++ Return Values


#include <iostream>
using namespace std;

int myFunction(int x) {
  return 5 + x;
}
int myFunction1(int x, int y) {
  return x + y;
}

int myFunction2(int x, int y) {
  return x + y;
}


int main() {
  cout << myFunction(3);
   cout << myFunction1(5, 3);
   int z = myFunction2(5, 3);
  cout << z;
  return 0;
}


