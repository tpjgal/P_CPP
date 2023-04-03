#include<iostream>
using namespace std;
int square(int a){
//LINE-1
return (a*a);
//LINE-2
}
int main(){
int x, y, r;
cin >> x >> y;
r = 2*square(x+y) + 2*(x+y) - 4;
cout << r;
return 0;
}
