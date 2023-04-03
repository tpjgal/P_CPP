// C++ Array

#include <iostream>
#include <string>
using namespace std;

int main() {
		//Access the Elements of an Array
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cout << cars[0];
  
  //	Change an Array Element
  
   string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  cars[0] = "Opel";
  cout << cars[0];
  
  //Loop Through an Array
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for(int i = 0; i < 4; i++) {
    cout << cars[i] << "\n";
  }
  
  string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
  for(int i = 0; i < 4; i++) {
    cout << i << ": " << cars[i] << "\n";
  }
  
  
  //omitt array size
  string cars[5] = {"Volvo", "BMW", "Ford"};
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  
  
  //Ommit element declaration
  
   string cars[5];
  cars[0] = "Volvo";
  cars[1] = "BMW";
  cars[2] = "Ford";
  cars[3] = "Mazda";
  cars[4] = "Tesla";
  for(int i = 0; i < 5; i++) {
    cout << cars[i] << "\n";
  }
  
  
  return 0;
}



