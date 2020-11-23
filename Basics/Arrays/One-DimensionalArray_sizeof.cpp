#include<iostream>
#include<cmath>
using namespace std;

int arr []={2,3,0,1};
int i;

int main()

{
	// узнать размер массива в байтах
	cout<<sizeof(arr)<<endl; 
	
	// узнать кол-во елементов в массиве
	cout<<sizeof(arr)/sizeof(arr[0])<<endl;
	
	// узнать значения всех елементов массива
	for (int i = 0; i < sizeof (arr) / sizeof (arr [0] ) ; i++ )
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}
