#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;

void FillArray(int array[],int size)
{
	for (int i = 0;i < size;i++)
	{
		array[i] = rand()%10;
	}
}

void PrintArray(int array[],int size)
{
	for (int i = 0;i < size;i++)
	{
		cout<<array[i]<<endl;
	}
}



int main()
{
	int SIZE = 5;
	int arr[SIZE];
	
	FillArray(arr,SIZE);
	PrintArray(arr,SIZE);
	
	return 0;
}
