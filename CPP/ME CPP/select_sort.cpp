#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int a[20],i,j,t,d;
cout<<"Enter dimention:";
cin>>d;
cout<<"\nEnter array elements:\n";
for(i=0;i<d;i++)
	cin>>a[i];
cout<<"\nThe entered elements are:\n";
for(i=0;i<d;i++)
	cout<<a[i]<<"\t";
for(i=0;i<d;i++)
{
	for(j=i+1;j<d;j++)
	{
		if(a[i]>a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}
	}
}
cout<<"\nAfter sorting:\n";
for(i=0;i<d;i++)
	cout<<a[i]<<"\t";
getch();
}
