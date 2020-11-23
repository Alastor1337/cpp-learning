#include<cstdlib>
#include<iostream>

using namespace std;

void foo(int q,int a = 5,int b = 5)
{
	for (int i = 0;i < q;i++)
	{
		cout<<a*b<<endl;
	}
}

int main()
{
	int q;
	cin>>q;
	
	foo(q);

	return 0;
}


