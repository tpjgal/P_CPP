#include <iostream>
#include <thread>
#include <future>

using namespace std;

int some_op(int value) {
  //  A function which returns some value

    // Pretend to do some compute intensive task
    this_thread::sleep_for(chrono::milliseconds(rand() % 1000));

    // Don't worry about overflow here.
    return value * value;
}


int main() {
    int x1 = 4;
    future<int> f1 = async(launch::async, some_op, x1); // the return type is int || works with auto as well
    cout << "Square of " << x1 << ": " << f1.get() << endl;
    return 0;
}

/*

Square of 4: 16

*/