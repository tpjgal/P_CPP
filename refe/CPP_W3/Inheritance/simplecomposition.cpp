// simple composition

#include <iostream>
using namespace std;
class Engine {
public:
Engine(int numCylinders) {

cout<<"Engine...\n"<<endl;
 }
// Starts this Engine
void start() {
cout<<"starting...\n"<<endl;
 }
};
class Car {
public:
// Initializes this Car with 8 cylinders
Car() : e_(8) {
cout<<"car...\n"<<endl;
 }
// Start this Car by starting its Engine
void start() {
cout<<"Start11111..\n"<<endl;
 e_.start();
cout<<"end....\n"<<endl;
 }
private:
Engine e_; // Car has-a Engine
};
int main() {
Car c;
c.start();
return 0;
}



