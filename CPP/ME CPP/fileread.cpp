#include<iostream>
#include<fstream>
using namespace std;
main()
{
	//ifstream inf("person");
	ifstream inf;
	inf.open("item");
	char name[20];
	float cost;
	inf>>name;
	inf>>cost;
	cout<<"\nitem name is :"<<name;
	cout<<"\nItem cost = "<<cost;
	inf.close();
}
