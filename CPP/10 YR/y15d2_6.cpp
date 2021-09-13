#include<iostream>
#include<math.h>
#include<stdlib.h>
using namespace std;
class Binary
{
	int bin;
	public:
		void getbin();
		Binary operator-(Binary b);
		int operator[](int k);
		friend ostream & operator<<(ostream &din,Binary &b);
		
};
void Binary::getbin()
{
	int temp,f,t,i;
	do
	{
		f=2;
		cout<<"Enter a Binary Number:";
		cin>>temp;
		t=temp;
		while(t!=0)
		{
			i=t%10;
			if(i!=0 && i!=1)
			{
				cout<<"\nInvalid Binary Number!";
				f=0;
				break;
			}
			t=t/10;
		}
		if(f!=0)
		{
			f=1;
			bin=temp;
		}		
	}while(f==0);
}
int btod(int b)
{
	int t=b,n=0,len=0,i;
	while(t!=0)
	{
		i=t%10;
		n=n+i*pow(2,len);
		len=len+1;
		t=t/10;
	}
	return n;
}
Binary Binary::operator-(Binary b)
{
	Binary sum;
	int b1=btod(bin);
	int b2=btod(b.bin);
	if(b1<b2)
	{
		cout<<"\nInvalid Subtrahend!";
		exit(0);
	}
	sum.bin=b1-b2;
	return sum;
}
int Binary::operator[](int k)
{
	int i=-1,t=bin,j,rev=0;
	while(t!=0)
	{
		j=t%10;
		rev=rev*10+j;
		t=t/10;
	}
	while(i!=k)
	{
		j=rev%10;
		i++;
		rev=rev/10;
	}
	return j;
}
ostream & operator<<(ostream &dout,Binary &b)
{
	int mask=0x8000,f=0;
	for(int i=1;i<=16;i++)
	{
		if((mask&b.bin)==0 && f==0)
			mask=mask>>1;
		else 
		{
			f=1;
			if((mask&b.bin)==0)
			cout<<"0";
			else
			cout<<"1";
		
		}		
	}
	return dout;
}
int main()
{
	int ch,yn;
	do
	{
		cout<<"1.Subtract two binary numbers\n2.Show indexed value\nEnter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:Binary sub,b1,b2;
			b1.getbin();
			b2.getbin();
			sub=b1-b2;
			cout<<"The result is:"<<sub;
			break;
			case 2:Binary b;
			b.getbin();
			int it;
			cout<<"\nEnter Position of the bit:";
			cin>>it;
			int an=b[it];
			cout<<"\nThe value at position "<<it<<" is:"<<an;
			break;	
		};
		cout<<"\nDo you want to continue?press 1...";
		cin>>yn;
	}while(yn==1);
	return 0;
}
