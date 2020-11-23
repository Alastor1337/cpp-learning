#include<iostream>

using namespace std;

void funct(int *pa,int *pb, int *pc)
{
	(*pa) = 555;
	(*pb) ++;
	(*pc) = -555;
}

int main()
{
	int a,b,c;
	a = b = c = 0;
	
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	
	cout<<endl<<"funct used"<<endl<<endl;
	funct(&a,&b,&c);
	
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	
	return 0;
}
