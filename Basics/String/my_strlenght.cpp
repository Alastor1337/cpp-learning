#include <iostream>

using namespace std;

int strlenght(char* str)
{
	int counter = 0;
	
	while (str[counter] != '\0')
	{
		counter++;	
	}
	
	return counter;
}
int main()
{
	char* str = "hello";
	
	cout<<strlenght(str)<<endl;
	
	return 0;
}
