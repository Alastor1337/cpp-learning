#include<iostream>
#include<cstdlib>

using namespace std;


int main()
{
	int *pa = new int;
	*pa = 10;
	cout<<*pa;
	delete pa;
	pa = nullptr; // add ' -std=c++0x ' to compiler settings

	return 0;
}
