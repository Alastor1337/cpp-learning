#include<iostream>

using namespace std;

void func(int n)
{
	n = 1;
}

void func1 (int &n)
{
	n = 2;
}
void func2 (int *n)
{
	*n = 3;
}

int main()
{
	int a;
	cin>>a;
	cout<<endl<<"a = "<<a<<endl;
	
	cout<<"func "<<endl;
	func(a);
	cout<<"a = "<<a<<endl;
	
	cout<<"func1 "<<endl;
	func1(a);
	cout<<"a = "<<a<<endl;
	
	func2(&a);
	cout<<"func2 "<<endl;
	cout<<"a = "<<a<<endl;
	
	return 0;
}
