#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
	int SIZE;
	long long n;
	
	cin>>SIZE;
	
	
	int array[SIZE];
	
	for (int i = 0;i < SIZE; i++)
	{
		cin>>array[i];
	}
	

	
	sort(array,array+SIZE);
	
	for (int i = 0; i < SIZE;i++)
	{
		cout<<array[i]<<' ';
	}
	
	return 0;
}
