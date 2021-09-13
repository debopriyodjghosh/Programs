/*program for default argument */
#include<iostream>
using namespace std;

int main()
{
	void show(int=0,int=0,int=0);
	show(10);
	show();
	show(10,20);
	show(10,10,10);
	return 0;
}
void show(int x,int y,int z)
{
	cout<<x<<"\t"<<y<<"\t"<<z;
}
