#include<iostream>
#include<fstream>
using namespace std;
main()
{
	//ofstream outf("item");     // parametric constructor
	ofstream outf;
	outf.open("person");       // default file type extention .txt
	cout<<"\nEnter person name :";
	char name[20];
	cin>>name;
	outf<<name<<"\n";
	cout<<"\n Enter salary :";
	float cost;
	cin>>cost;
	outf<<cost<<"\n";
	outf.close();
}
