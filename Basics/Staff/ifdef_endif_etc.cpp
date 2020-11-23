#include <iostream>

// more info at  https://www.youtube.com/watch?v=Zk1nBxHgp60&list=PLQOaTSbfxUtCrKs0nicOg2npJQYSPGO9r&index=81

#define DEBUG

using namespace std;

int main()
{
	
#ifdef DEBUG
	cout<<1<<endl;
#endif // DEBUG

	cout<<2<<endl;
	
	return 0;
}
