#include<iostream>
#include<conio.h>
using namespace std;
class matrix
{
	private: 
	        int row;
	        int column;
	        int a[10][10];
	matrix()
	{
		roow=0;
		column=0;
	}
	matrix(int  m,int n)
	{
		row=m;
		column=n;
	}
	public:
	       void getdata();
	       void display();
	        friend matrix operator+(matrix,matrix);
};
void matrix::getdata()
{
	int i,j;
	for(i=0;o<row;i++)
	{
		cout<<"\n";
		for(j=0;j<column;j++)
		{
	    cout<<"a"<<"["<<i<<"]"<<"["<<j<<"]";
	    cin>>a[i][j];
	    }
	}
}
void matrix ::display()
{
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	}
}
matrix operator+(matrix m1,matrix m2)
{
	matrix m3(m1.row,m1.column);
	for(i=0;i<m1.row;i++)
	{
		for(j=0;j<)
	}
	
	
	
}

