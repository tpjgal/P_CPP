#include<iostream>
using namespace std;

int main()
{
	int n, arr[n];
	
//	int i,val;

	cout<<"Enter n  no. of elements:"<<endl;
	cin >>n;
	cout<<"Enter the elements:";
	cin>>arr[n];
	
	int i, val;
	for(val=0;val<n-1; ++val)
	 for ( i=0;i<n-val-1;++i)
		
			
	{
	cout << "Your elements are:"<< arr[i];
	
	}
	return 0;
}
