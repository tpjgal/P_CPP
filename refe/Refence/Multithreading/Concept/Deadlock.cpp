#include <thread>
#include <iostream>
#include <mutex>
#include <chrono>

using namespace std;

mutex mu1, mu2;

void some_op() {
  mu1.lock();
  mu2.lock();
cout<<"Some Operation..."<<endl;
  // Do some work
  this_thread::sleep_for(chrono::milliseconds(rand() % 100));
cout<<"Some Operation... Continue...."<<endl;
  mu1.unlock();
  mu2.unlock();
}

void some_other_op() {
  mu2.lock();
  mu1.lock();
cout<<"Some Other Operation..."<<endl;
  // Do some work
  this_thread::sleep_for(chrono::milliseconds(rand() % 100));
cout<<"Some other  Operation... Continue...."<<endl;

  // This order is irrelevant to the deadlock
  mu1.unlock();
  mu2.unlock();
}

int main() {
    
    std::thread th(some_op);
    std:: thread th1(some_other_op);
    
    th.join();
    th1.join();
  return 0;
}