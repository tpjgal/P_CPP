#include<iostream>
using namespace std;
int main()
{

	char str[40];
	int m1,m2,m3,avg;

        cout<<"Enter you name"<<"\t";
	cin>>str;

	cout<<"enter marks in three subject:"<<"\t";
	cin>>m1>>m2>>m3;

	avg=(m1+m2+m3)/3;

	cout<<"your name is"<<"\t" <<str;
	cout <<"average marks are"<< "\t"<<avg<<endl;
	return 0;
}
