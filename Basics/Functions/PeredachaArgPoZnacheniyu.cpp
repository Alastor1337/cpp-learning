#include <iostream>

using namespace std;

int Foo(int a)
{
	return ++a;  // a++ - �� ��������,��� ��� ����������� ��� ����� ���������� ���������
}

int main()
{
	int value = 1;
	
	value = Foo(value);
	
	cout<<value;
	return 0;
}
