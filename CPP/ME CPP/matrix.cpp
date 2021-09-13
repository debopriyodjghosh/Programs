#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
int **p,d1,d2;
public:
matrix(int x,int y);
void get(int i,int j,int val)
{
	p[i][j]=val;
}
int &put(int i,int j)
{
	return(p[i][j]);
}
};

matrix::matrix(int x,int y)
{
d1=x;
d2=y;
p=new int *[d1];
for(int i=0;i<d1;i++)
	p[i]=new int[d2];
}

int main()
{
int m,n;
cout<<"\nEnter size of natrix:";
cin>>m>>n;
matrix a(m,n);
cout<<"\nEnter matrix elements:\n";
int i,j,val;
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
		cin>>val;
		a.get(i,j,val);
	}
	cout<<"\n";
}
cout<<"\nEntered matrix is:\n";
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	   val=a.put(i,j);
	   cout<<val<<"\t";
	}
	cout<<"\n";
}
int x,y;
cout<<"\nEnter the position you want to see:";
cin>>x>>y;
cout<<"\nThe element is: "<<a.put(x,y);
getch();
return(0);
}
