#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main()
{
	//c-like
	char res[255]{};
	char str1[255] = "Hello";
	char str2[255] = "world!";
	
	strcat(res,str1);
	strcat(res," ");
	strcat(res,str2);
	
	cout<<res<<endl;
	//
	
	//cpp-like
	string s1 = "Hello";
	string s2 = "world!";
	string sres;
	
	sres = s1 + " " + s2;
	
	cout<<sres<<endl;
	//
	

	return 0;
}
