// C++ if... else

#include <iostream>
using namespace std;

int main() {
	// if statement 
  if (20 > 18) {
    cout << "20 is greater than 18";
  }  
  
  int x = 20;
  int y = 18;
  if (x > y) {
    cout << "x is greater than y";
  }  
  
  // if ... else 
 
  int time = 20;
  if (time < 18) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }

	// else... if
	
	int time = 22;
  if (time < 10) {
    cout << "Good morning.";
  } else if (time < 20) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  
  //Short Hand If...Else (Ternary Operator)
  
  int time = 20;
  if (time < 18) {
    cout << "Good day.";
  } else {
    cout << "Good evening.";
  }
  
  int time = 20;
  string result = (time < 18) ? "Good day." : "Good evening.";
  cout << result;
  
  

  
  return 0;
}



