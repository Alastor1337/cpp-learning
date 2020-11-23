#include<iostream>

using namespace std;

int sum(int a,int b)
{
	return a+b;
}

double sum(double a,double b)
{
	return a+b;
}

int sum (int a,int b,int c)
{
	return a+b+c;
}

int main()
{
	cout<<sum(2,2)<<endl;
	cout<<sum(2.4,2.4)<<endl;
	cout<<sum(4,4,4)<<endl;
	return 0;
}
