#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum = 0;
	cout << "Input limit:" << endl;
	cin >> n;
	for (int i = 0; i <= n; ++i) // Local Decl.
		sum = sum + i;
		cout << "Sum of " << n ;
	cout << " numbers is: " << sum << endl;
	return 0;
}
