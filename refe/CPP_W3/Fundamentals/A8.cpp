
//C++ string

#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting;
  //String Concatenation
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName;
  
  //String Concatenation
  string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName + lastName;
  cout << fullName;
  
  //Append
   string firstName = "John ";
  string lastName = "Doe";
  string fullName = firstName.append(lastName);
  cout << fullName;
  // Number string
  int x = 10;
  int y = 20;
  int z = x + y;
  cout << z;  //30
  
   string x = "10";
  string y = "20";
  string z = x + y;
  cout << z;  // 1020
  
  // string length
   string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.size();
  
  
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length();
  
  // Access string
  string myString = "Hello";
  cout << myString[0];
  
  string myString = "Hello";
  cout << myString[1];
  //Change String Characters
   string myString = "Hello";
  myString[0] = 'J';
  cout << myString;
  
  
  // user input string
  string fullName;
  cout << "Type your full name: ";
  getline (cin, fullName);
  cout << "Your name is: " << fullName;
  
  
  
  // Omitting namespace
  
  std::string greeting = "Hello";
  std::cout << greeting;
  
  
  return 0;
}