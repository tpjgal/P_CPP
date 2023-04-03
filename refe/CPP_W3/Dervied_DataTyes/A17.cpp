//C++ References

#include <iostream>
#include <string>
using namespace std;

int main() {
  string food = "Pizza";
  string &meal = food;

  cout << food << "\n";
  cout << meal << "\n";
  
  // Memory Address
  
  string food = "Pizza";

  cout << &food;
  return 0;
}
