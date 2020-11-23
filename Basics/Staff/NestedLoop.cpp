#include<iostream>
using namespace std;

int c1,c2;

int main()

{
	cin>>c1;
	cin>>c2;
	
	for (int i=1;i<c1;i++)
	
	{
		cout<<"1st Cycle Iteration : "<<i<<endl;
		
		for (int j=1;j<c2;j++)
		
		{
			cout<<"\t2nd Cycle Iteration : "<<j<<endl;
			
		}
	}
	
	return 0;
}

