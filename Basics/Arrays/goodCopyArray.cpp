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
	
	int * arr1 = new int[size];
	int * arr2 = new int[5];
	
	cout<<"1st array = \t";
	fillarray(arr1,size);
	outarray(arr1,size);
	
	cout<<endl;
	cout<<"2nd array = \t";
	
	fillarray(arr2,5);
	outarray(arr2,5);
	
	cout<<endl;
	
	delete [] arr2;
	
	arr2 = new int[size];
	
	for (int i = 0;i < size;i++)
	{
		arr2[i] = arr1[i];
	}
	
	cout<<"1st array = \t";
	outarray(arr1,size);
	cout<<endl;
	
	cout<<"2nd array = \t";
	outarray(arr2,size);
	cout<<endl;
	delete[] arr1;
	delete[] arr2;
	
	return 0;
}
