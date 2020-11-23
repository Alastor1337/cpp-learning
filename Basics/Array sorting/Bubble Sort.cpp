#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int size = 8;
	int arr[size]{2,1,7,4,5,0,33,21};
	
	for (int i = 0; i < size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	for (int i = 0;i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j],arr[j+1]);
			}
		}
	}
	
	cout<<endl<<endl;
	
	//reverse(arr,arr+size);
	for (int i = 0; i < size; i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	return 0;
}
