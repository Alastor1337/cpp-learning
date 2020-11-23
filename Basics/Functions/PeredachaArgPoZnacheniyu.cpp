#include <iostream>

using namespace std;

int Foo(int a)
{
	return ++a;  // a++ - не работает,так как постфиксный инк имеет найменьший приоритет
}

int main()
{
	int value = 1;
	
	value = Foo(value);
	
	cout<<value;
	return 0;
}
