#include<iostream>

using namespace std;

int main()
{
	cout<<"One"<<endl;
	cout<<"Two"<<endl;
	goto perehod;
	
	cout<<"Three"<<endl;
	cout<<"Four"<<endl;
	
	perehod:
	cout<<"Five"<<endl;
	
	return 0;
}
