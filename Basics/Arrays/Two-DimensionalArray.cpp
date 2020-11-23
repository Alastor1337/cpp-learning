#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int ROW = 5;
const int COL = 5;
int arr [ROW] [COL] {};

int main()

{
	for (int i = 0;i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			arr[i] [j] = rand() % 10;
		}
	}
	
	for (int i = 0;i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout<<arr[i] [j]<<'\t';
		}
		cout<<endl;
	}
	
	return 0;
}
