#include<iostream>

using namespace std;

int main()
{
	int a,b;
	a = b = 0;
	cin>>a>>b;

	cout<<a<<" "<<b<<endl;

	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	cout<<a<<" "<<b;
	return 0;
}
