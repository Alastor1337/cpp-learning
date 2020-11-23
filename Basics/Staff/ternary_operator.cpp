#include <iostream>

using namespace std;

int main()
{
	int a;
	
	cin>>a;
	
/*	if (a < 10)
	{
		cout<<"a < 10"<<endl;
	}
	
	else if (a == 10)
	{
		cout<<"a = 10"<<endl;
	}
	
	else 
	{
		cout<<"a > 10"<<endl;
	}
	
*/	
	// same // 
	
	
	a < 10? cout<<"a < 10"<<endl : a == 10? cout<<"a = 10"<<endl : cout<<"a > 10"<<endl; 
	return 0;
}
