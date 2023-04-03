// private inheritance

#include <iostream>
using namespace std;
class Engine {
public:
Engine(int numCylinders) { 
cout<<"engine...\n"<<endl;
}
// Starts this Engine
void start() {
cout<<"Starting....\n"<<endl;
 }
};
class Car : private Engine { // Car has-a Engine
public:
// Initializes this Car with 8 cylinders
Car() : Engine(8) {
cout<<"car...\n"<<endl;
 }
// Start this Car by starting its Engine
using Engine::start;
};
int main() {
Car c;
c.start();
return 0;
}
