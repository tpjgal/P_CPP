#include<iostream>
using namespace std;
int increment(int x, int n=1){
return (x+n);
}
//LINE-1
int main(){
int x, n, r;
cin >> x >> n;
if(n==0)
r = increment(x);
else
r = increment(x,n);
cout << r;
return 0;
}
