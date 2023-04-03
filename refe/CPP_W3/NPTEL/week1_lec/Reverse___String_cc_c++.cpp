// FileName: Reverse_String_c++.cpp
#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int main() 
{
	char str[10]= "ABCDE";
	stack<char> s;
	int i;

	for(i = 0; i < strlen(str); i++)
	s.push(str[i]);
	cout << "Reversed String: ";

	while (!s.empty()) 
	{
		cout << s.top();
		s.pop();
	}
	return 0;
}
