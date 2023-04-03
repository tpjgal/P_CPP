#include<iostream>
#include<string.h>
using namespace std;
int compare(char *s1, char *s2, int n){
    int x=0;
  for(int i=0;i<n;i++)
    if(s1[i]==s2[i])
    x=0;
  else if(s1[i]>s2[i]) 
    return 1;
  else 
    return -1;
  return x;        
}
int main(){
    char s1[20], s2[20];
    int n,r;
    cin >> s1 >> s2 >> n;
    r = compare(s1,s2,n);
    if(r>0)
        cout << s1;
    else if(r<0)
        cout << s2;
    else
        cout << "equal";
    return 0;
}
