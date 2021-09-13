/*program for function overloading*/

#include<iostream>
using namespace std;

int main()
{
	void show();
	void show(int);
	void show(int,int);
	void show(int,char);
	show();
	show(10);
	show(10,20);
	show(10,'c');
	return 0;
}
void show()
{
	cout<<"no parameter";
}
void show(int a)
{
	cout<<"\nValue ="<<a;
}
void show(int a,int b)
{
	cout<<"\nValue of 1st ="<<a;
	cout<<"\nValue of 2nd ="<<b;
}
void show(int a,char b)
{
	cout<<"\nValue of 1st ="<<a;
	cout<<"\nValue of 2nd ="<<b;
}
