#include<iostream>

using namespace std;

template <typename T>        // u can use class or template (no difference)
T sum(T a,T b)
{
	return a+b;
}

template <class T1,class T2> // u can use class or template (no difference)
T1 sum(T1 a,T2 b)
{
	return a+b;
}

int main()
{
	cout<<sum(2,2)<<endl;
	cout<<sum(2.4,2)<<endl;

	return 0;
}
