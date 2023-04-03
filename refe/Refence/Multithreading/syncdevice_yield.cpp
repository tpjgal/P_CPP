#include <iostream>
#include <thread>
#include <atomic>
#include <chrono>
#include <mutex>

using namespace std;

std::atomic<bool> capture(false);
mutex mu;

void capture_image(const int device_id) {
    while (!capture) {
        std::this_thread::yield();
    }

    unique_lock<mutex> lock(mu);
    std::cout << "Camera " << device_id << " clicked at " << chrono::system_clock::now().time_since_epoch().count()
              << std::endl;
    lock.unlock();

    // Pretend to do some work (capture image)
    // ..
    this_thread::sleep_for(chrono::milliseconds(rand() % 1000));
    // ..
}

int main() {
    // Syncing two cameras. We can sync multiple cameras as well.
    thread t1(capture_image, 1);
    thread t2(capture_image, 2);

    capture = true;

    t1.join();
    t2.join();

    return 0;

}

/*
Camera 1 clicked at 1657893022838090299
Camera 2 clicked at 1657893022838115864
*/