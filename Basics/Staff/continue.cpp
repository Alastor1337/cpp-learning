#include<iostream>
using namespace std;
int n;
int main()

{
	cin>>n;
	for (;n<5;n++)
	{
		if (n==2)
		{
			continue;
		}
		
		cout<<"N = "<<n<<endl;
	}
	
	return 0;
}
