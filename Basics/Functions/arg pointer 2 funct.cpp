#include<iostream>

using namespace std;

void fu(int *a)
{
	(*a)++;
}

int main()
{

	int n;
	cin>>n;
	fu(&n);

	cout<<n;

	return 0;
}
