#include <iostream>
#include <string>

using namespace std;

int foo1(int a)
{
	return a - 1;
}

int foo2(int a)
{
	return a * 2;
}

string GetFrom1()
{
	return "Get From 1";
}

string GetFrom2()
{
	return "Get From 2";
}

string GetFrom3()
{
	return "Get From 3";
}

void ShowGet(string(*function)())
{
	cout<<function()<<endl;
}


int main()
{
	int(*fooPointer1)(int a);
	int(*fooPointer2)(int a);
	
	fooPointer1 = foo1;
	fooPointer2 = foo2;
	
	cout<<fooPointer1(5)<<endl;
	cout<<fooPointer2(10)<<endl;
	
	ShowGet(GetFrom3);
	
	return 0;
}
