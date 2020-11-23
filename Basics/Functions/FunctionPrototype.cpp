#include<cstdlib>
#include<iostream>

using namespace std;

void foo(int a,int b);

int main()
{
	foo(1,1);
	foo(2,2);
	foo(3,3);
	foo(4,4);
	foo(5,5);
	
	return 0;
}

void foo(int a,int b)
{
	cout<<a*b<<endl;
}
