	/*matrix multiplication*/

#include<iostream.h>
#include<conio.h>
int main()
{
    int m1[10][10],i,j,k,m2[10][10],mult[10][10],r1,c1,r2,c2;
    clrscr();
    cout<<"Enter number of rows and columns of first matrix (less than 10)\n";
    cin>>r1>>c1;
    cout<<"Enter number of rows and columns of second matrix (less than 10)\n";
    cin>>r2>>c2;
    if(r1==c2)
    {
	cout<<"Enter rows and columns of First matrix \n";
	cout<<"Row wise\n";
	for(i=0;i<r1;i++)
	{
	    for(j=0;j<c1;j++)
	    {
		cin>>m1[i][j];
	    }
	    }
		cout<<"First Matrix is :\n";
	for(i=0;i<r1;i++)
	{
	    for(j=0;j<c1;j++)
	    {
		cout<<"\t"<<m1[i][j];
	    }
	    cout<<"\n";
	}
	cout<<"Enter rows and columns of Second matrix \n";
	cout<<"Row wise\n";
	for(i=0;i<r2;i++)
	    for(j=0;j<c2;j++)
		cin>>m2[i][j];
	cout<<"Second Matrix is:\n";
	for(i=0;i<r2;i++)
	{
	    for(j=0;j<c2;j++)
	    {
		cout<<"\t"<<m2[i][j];
	    }
	    cout<<"\n";
	}
	cout<<"Multiplication of the Matrices:\n";
	for(i=0;i<r1;i++)
	{
	    for(j=0;j<c2;j++)
	    {
		mult[i][j]=0;
		for(k=0;k<r1;k++)
		{
		    mult[i][j]+=m1[i][k]*m2[k][j];
	       }
		cout<<"\t"<<mult[i][j];
	    }
	    cout<<"\n";
	}
    }
    else
    {
	cout<<"Matrix multiplication cannot be done";
    }
    getch();
    return 0;

}