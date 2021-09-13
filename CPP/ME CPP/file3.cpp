#include<iostream>
#include<fstream>
using namespace std;
main()
{
	ofstream fout;
	fout.open("country");
	fout<<"united states of America \n";
	fout<<"United kingdom\n";
	fout<<"India\n";
	fout.close();
	fout.open("capital");
	fout<<"Washington\n";
	fout<<"london\n";
	fout<<"new delhi\n";
	fout.close();
	char line[80];
	ifstream fin;
	fin.open("country");
	char c;
	fin.seekg(10);
	fin.get(c);
	cout<<"\nthe remaing string from 11th position is : "<<c;
	int p=fin.tellg();
	cout<<"\ncurrent postion is : "<<p;
	fin.get(c);
	cout<<"\nthe remaing string from 11th position is : "<<c;
	 p=fin.tellg();
	cout<<"\ncurrent postion is : "<<p;
	cout<<"\nContent of country file \n";
	while(fin)
	{
		fin.getline(line,80);
		cout<<line<<"\n";
	}
	fin.close();
	fin.open("capital");
	while(fin)
	{
		fin.getline(line,80);
		cout<<line<<"\n";
	}
	fin.close();
}
