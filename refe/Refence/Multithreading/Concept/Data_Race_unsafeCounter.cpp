#include <thread>
#include <cassert>
#include <iostream>
#include <mutex>

using namespace std;

int counter2 = 0; // to demonstrate data race
mutex mu;

void unsafe_increment() {
  // Does not use atomic counter or locks
  // The value of counter2 could be changed from multiple threads leading to data race and unsafe increment

  for (size_t j = 0; j < 1000000; j++) {
    ++counter2;
  }
}

void thread_unsafe_counter() {
  // Uses thread unsafe increment method to count

  std::thread t1(unsafe_increment);
  std::thread t2(unsafe_increment);
  t1.join();
  t2.join();
  assert(counter2 <= 2 * 1000000);
  cout << "Unsafe counter:\t" << counter2 << "\tTarget value 2000000" << endl;
}

int main() {
  thread_unsafe_counter();
  return 0;
}


/*
Unsafe counter: 2000000 Target value 2000000

*/