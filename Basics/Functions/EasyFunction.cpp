#include <iostream>

using namespace std;

void Foo()
{
	cout<<"I`m a function"<<endl;
}

int main()
{
	Foo();
	
	
	for (int i = 0; i < 10; i++)
	{
		Foo();
	}
	
	return 0;
}
