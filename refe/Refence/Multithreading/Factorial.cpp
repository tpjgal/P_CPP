#include <thread>
#include <future>
#include <iostream>

using namespace std;
mutex mu;

void compute_factorial(int number) {
  long long result = 1;
  for (size_t i = 2; i <= number; i++) result *= i;

  // Lock resources that are shared between threads.
  // This is not the best way to lock. See readme.
  mu.lock();
  std::cout << "Factorial of " << number << " : " << result << std::endl;
  mu.unlock();
}

int main() {
  int num1 = 4;
  int num2 = 4;

  // Compute factorial of two numbers simultaneously
  thread t1(compute_factorial, num1);
  thread t2(compute_factorial, num2);

  t1.join();
  t2.join();

  return 0;
}

/*


Factorial of 4 : 24
Factorial of 4 : 24

*/
