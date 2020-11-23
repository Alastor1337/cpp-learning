#include<iostream>

using namespace std;

void fillarray(int* const array,const int size)
{
	for (int i = 0;i < size;i++)
	{
		cin>>array[i];
	}
}

void outarray(const int* const array,const int size)
{
	for (int i = 0; i < size;i++)
	{
		cout<<array[i]<<" ";
	}
}


int main()
{
	int size;
	cin>>size;
	int arr[size];
	fillarray(arr,size);
	outarray(arr,size);
	
	
	return 0;
}
