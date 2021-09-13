/*example of call by reference */
#include<iostream>
using namespace std;

int main()
{
	int a=10,b=20;
	void swapv(int,int);
	void swapa(int *,int *);
	void swapr(int &,int &);
	cout<<"Value of a="<<a;
	cout<<"\nValue of b="<<b;
	swapv(a,b);   //call by value
	cout<<"\nValue of a="<<a;
	cout<<"\nValue of b="<<b;
	swapa(&a,&b);   //call by address
	cout<<"\nValue of a="<<a;
	cout<<"\nValue of b="<<b;
	swapr(a,b);   //call by reference
	cout<<"\nValue of a="<<a;
	cout<<"\n value of b="<<b;
	return 0;
}
void swapv(int p,int q)
{
	int t;
	t=p;
	p=q;
	t=q;    //no change in main
}
void swapa(int *p,int *q)
{
	int t;  //change in main
	t=*p;
	*p=*q;
	*q=t;
}
void swapr(int & m,int & n)
{
	int t;
	t=m;
	m=n;    //change in main
	n=t;
}
