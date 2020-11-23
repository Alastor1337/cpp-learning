#include <iostream>

#define n 5
#define begin {
#define end }

using namespace std;

int main()
{
	cout<<n<<endl;
	cout<<n * n<<endl;
	
	for (int i = 0;i < 3;i++)
	begin 
		cout<<n + i<<endl;
	end
	
	return 0;
}
