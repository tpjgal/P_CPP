#include <thread>
#include <chrono>
#include <future>
#include <iostream>

using namespace std;

void user_function() {
  // Wait between 0 to 399ms.
  auto wait_time = chrono::milliseconds(rand() % 400);

  // This mimics that the user function takes between 0-399 ms to execute.
  this_thread::sleep_for(wait_time);
}

int main() {

  for (int i = 0; i < 10; i++) {

    // Launch a task and wait for it for 200ms
    auto f1 = async(std::launch::async, user_function);
    auto status = f1.wait_for(chrono::milliseconds(200));

    if (status == future_status::ready) {
      cout << "Completed in time" << endl;
    } else {
      cout << "Timelimit exceeded!" << endl;
    }

  }
  return 0;

}/*

Completed in time
Completed in time
Timelimit exceeded!
Completed in time
Completed in time
Timelimit exceeded!
Completed in time
Completed in time
Timelimit exceeded!
Timelimit exceeded!
*/