#include<iostream>

int main()
{
	using namespace std;
	
	int size;
	cin>>size;
	
	int array[size];
	
	for (int i = 0;i < size;i++)
	{
		cin>>*(array+i);	
	}	
	
	for (int i = 0;i < size;i++)
	{
		cout<<(array+i)<<'\t';
	}
	
	cout<<endl<<"================================"<<endl;
	
	for (int i = 0;i < size;i++)
	{
		cout<<*(array+i)<<'\t';
	}

	return 0;
}
