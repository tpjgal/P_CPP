#include<iostream>
using namespace std;
void caller(char*,int);
//LINE-1
void reverse(char * p,int n){
//LINE-2
char c;
for(int i=0;i<n/2;i++){
c = *(p+i);
*(p+i) = *(p+n-i-1);
*(p+n-i-1) = c;
}
}
int main(){
char *a;
int n = 5;
a=new char[n];
caller(a,n);
delete(a);
return 0;
}
void caller(char* a,int n){

for(int i=0;i<n;i++)

cin >> *(a+i);

reverse(a,n);

for(int i=0;i<n;i++)

cout << *(a+i);
}
