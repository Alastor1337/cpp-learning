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
	cout<<endl;
}

void push_back(int *&array, int &size, const int value)
{
	int *newarr = new int [size + 1];
	
	for (int i = 0; i < size; i++)
	{
		newarr[i] = array[i];
	}
	
	newarr[size++] = value;
	
	delete[] array;
	
	array = newarr;
}

void pop_back(int *&array, int &size)
{
	size-- ;
	
	int* newarr = new int[size];
	
	for (int i = 0; i < size; i++)
	{
		newarr[i] = array[i];
	}
	
	delete [] array;
	
	array = newarr;
}


int main()
{
	int size = 5;
	int *arr = new int [size];
	
	fillarray(arr,size);
	outarray(arr,size);
	
	push_back(arr,size,777);
	outarray(arr,size);
	
	pop_back(arr,size);
	outarray(arr,size);
	
	
	delete[] arr;
	
	return 0;
}
