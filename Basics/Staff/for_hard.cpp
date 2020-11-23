#include<iostream>
using namespace std;
int main()

{
	int n=0,m=10,b=2;
	for( ;n<10 && m!=5;n++,m-- )
	{
		cout<<"N = "<<n<<endl;
		cout<<"M = "<<m<<endl;
	}
	
	for (b;b<5;)
	{
		cout<<"First Cycle = "<<b<<endl;
		b++;
	}
	
	for (b;b<10;b++)
	{
		cout<<"Second Cycle = "<<b<<endl;
	}
	
	
return 0;
}
