#include<iostream>
using namespace std;
#include<conio.h>

template<class T>

void bubble(T a[],int n)
{
for(int i=0;i<n-1;i++)
{
	for(int j=n-1;i<j;j--)
	{
		if(a[j]<a[j-1])
			swap(a[j],a[j-1]);
	}
}
}

template<class X>

void swap(X &a,X &b)
{
X temp=a;
a=b;
b=temp;
}

int main()
{
int x[10],n,m;
float y[10];
cout<<"\nEnter the integer array :\n";
cout<<"\nEnter the number of elements :\n";
cin>>n;
for(int i=0;i<n;i++)
{
    cin>>x[i];
}
	cout<<"\nEnter the float array :\n";
cout<<"\nEnter the number of elements :\n";
cin>>m;
for(int i=0;i<m;i++)
{
    cin>>y[i];
}
bubble(x,n);
bubble(y,m);

cout<<"\nThe sorted integer array is:\n";
for(int i=0;i<5;i++)
	cout<<x[i]<<" ";
cout<<endl;

cout<<"\nThe sorted float array is:\n";
for(int j=0;j<5;j++)
	cout<<y[j]<<" ";
cout<<endl;

}
