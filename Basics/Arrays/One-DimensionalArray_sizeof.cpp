#include<iostream>
#include<cmath>
using namespace std;

int arr []={2,3,0,1};
int i;

int main()

{
	// ������ ������ ������� � ������
	cout<<sizeof(arr)<<endl; 
	
	// ������ ���-�� ��������� � �������
	cout<<sizeof(arr)/sizeof(arr[0])<<endl;
	
	// ������ �������� ���� ��������� �������
	for (int i = 0; i < sizeof (arr) / sizeof (arr [0] ) ; i++ )
	{
		cout<<arr[i]<<endl;
	}

	return 0;
}
