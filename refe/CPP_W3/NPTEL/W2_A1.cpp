#include<iostream>
using namespace std;
struct Point{
int x, y;
};
Point operator~(struct Point &p){
struct Point p1 = {0,0};
p1.x=-p.x;
p1.y=-p.y;
return p1;
}
//LINE-1
//LINE-2
//LINE-3
Point operator+(const Point &p1, const Point &p2){
struct Point p3 = {0,0};
p3.x = p1.x + p2.x;
p3.y = p1.y + p2.y;
return p3;
}
//LINE-4
int main(){
struct Point p1, p2, p3;
cin >> p1.x >> p1.y >> p2.x >> p2.y;
p3 = p2 + ~p1;
cout << p3.x << " " << p3.y;
return 0;
}
