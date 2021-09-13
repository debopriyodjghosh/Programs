#include<iostream>
#include<stdlib.h>
#include<cmath>
using namespace std;
class Binary
{
	int bin,len;
	public:
		void getbin()
		{
			cin>>bin;
			int t=bin,r;
			len=0;
			while(t)
			{
				r=t%10;
				t=t/10;
				len++;
				if(r!=0 and r!=1)
				{
					cout<<"\nYou have entered an invalid binary number\nThe program is terminating....";
					exit(1);
				}
			}
		}
		void operator -(Binary a);
		int operator [](int s);
};
int retdec(int b)
{
	int d=0,t=b,i=0,r;
	while(t)
	{
		r=t%10;
		d+=r*int(pow(2,i++));
		t/=10;
	}
	return d;
}
void Binary::operator -(Binary a)
{
	int m1,s1;
	m1=retdec(bin);
	s1=retdec(a.bin);
	if(m1<s1)
	{
		cout<<"\nYou have entered an invalid inputs\nThe program is terminating....";
		exit(1);
	}
	int sum=m1-s1;
	cout<<"The result of the subtraction is:";
	int mask=0x8000;
	while(mask>0)
	{
		if((sum&mask)==0)
		cout<<"0";
		else
		cout<<"1";
		mask=mask>>1;
	}
}
int Binary::operator [](int s)
{
	cout<<"\n\nWe are assuming starting index to be 1 from the right most i.e, LSB bit.........";
	int i=1,m=1;
	if(len<s)
	{
		cout<<"\nYou have entered an invalid subscript\nThe program is terminating....";
		exit(1);
	}
	while(i!=s)
	{
		i++;
		m=m<<1; 
	}
	int dec=retdec(bin);
	if((dec&m)==0)
	return 0;
	else
	return 1;
}
int main()
{
	int con;
	do
	{
		cout<<"1.Subtract two Binary Numbers\n2.Get subscipted positional value of a Binary Number\nEnter your choice:";
		int t;
		cin>>t;
		switch(t)
		{
			case 1:	Binary a,b;
					cout<<"\nEnter the Minuend:";a.getbin();
					cout<<"\nEnter the Subtrahend:";b.getbin();
					a-b;
					break;
			case 2:	Binary c;
					cout<<"\nEnter a Binary Number:";c.getbin();
					cout<<"\nEnter the subscipt/position to get value:";
					int p;cin>>p;
					cout<<"\nThe value at position BinaryNumber["<<p<<"]:"<<c[p];
					break;
			default:cout<<"\nSorry!!Your entered option is invalid.........\n\nTry again.........";
					break;
		};
		cout<<"\nDo you want to continue:(press 1 to continue......):";
		cin>>con;
	}while(con==1);
	return 0;
}
