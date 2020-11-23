#include<iostream>

using namespace std;

int main()
{
	int a = 5;
	
	int *pa = &a;
	int &aRef = a;
	
	
	cout<<a<<endl;
	aRef++;
	cout<<a<<endl;
	*pa = 10;     //  ++ - not working
	cout<<a<<endl;
	
	int *ppa = &aRef;
	*ppa = 15;    //  ++ - not working
	cout<<a<<endl;

	
	
	return 0;
}
