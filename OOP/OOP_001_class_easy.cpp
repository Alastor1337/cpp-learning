#include <iostream>
#include <string>

#define DEBUG

using namespace std;

class Human
{
public:
	
	int age;
	string sex;
	string name;
};

class Point
{
public:
	
	int x;
	int y;
	int z;
};

int main()
{
	Human firsth;
	
	firsth.age = 18;
	firsth.name = "Vitaliy";
	firsth.sex = "male";
	
	cout<<"First human"<<endl;
	cout<<"Age: "<<firsth.age<<endl;
	cout<<"Name: "<<firsth.name<<endl;
	cout<<"Sex: "<<firsth.sex<<endl;
	
	
	Point a;
	cout<<endl<<"Type your point: "<<endl;
	cin>>a.x>>a.y>>a.z;
	cout<<"Your point: "<<endl<<"x: "<<a.x<<endl<<"y: "<<a.y<<endl<<"z: "<<a.z<<endl;
	
	return 0;
}
