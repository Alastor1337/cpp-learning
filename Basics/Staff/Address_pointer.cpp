#include<iostream>

int main()
{
	using namespace std;
	
	int a = 5;
	cout<<"a\t"<<a<<endl;
	
	int *pa = &a;
	int *pa1= &a;
	
	*pa = 2;
	
	cout<<"a\t"<<a<<endl;
	cout<<"pa\t"<<pa<<endl;
	cout<<"pa1\t"<<pa1<<endl;
	cout<<"*pa\t"<<*pa<<endl;
	return 0;
}
