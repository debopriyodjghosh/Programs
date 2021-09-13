/*****Implementation Of Matrix Inverse  By  Using  GAUSS JORDON Inverse Rule ****/
#include<stdio.h>
#include<conio.h>       //heder file inclusion
#include<math.h>
void main()
{
	int i,n,j;            // variable declearation
	float mat[10][10],temp,temp1,x,y,z;
   char ans;
	clrscr();
	do
	{

		printf("\n Enter The Matrix Range = ");
		scanf("%d",&n);
      fflush(stdin);
		printf("\n implementation of matrix inveres");
		for(i=0;i<n;i++)
		{
			printf("\n \n enter the value of %d equvation",i+1);
			for(j=0;j<n;j++)
			{
				printf("\n enter the value of coeffcient %d: ",j+1);
				scanf("%f",&mat[i][j]);
			}
			printf("\n enter the value of constant : ");
			scanf("%f",&mat[i][j]);
		}
		printf("\n * * * *your matrix* * * *\n\n");
		for(i=0;i<n;i++)
		{
			for(j=0;j<n+1;j++)
			{
				printf(" %g ",mat[i][j]);
			}
			printf("\n\n");
		}
		temp=mat[1][0]/mat[0][0];
		temp1=mat[2][0]/mat[0][0];
		for(i=0,j=0;j<n+1;j++)
		{
			mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
			mat[i+2][j]=mat[i+2][j]-(mat[i][j]*temp1);
		}
		temp=mat[2][1]/mat[1][1];
		temp1=mat[0][1]/mat[1][1];
		for(i=1,j=0;j<n+1;j++)
		{
			mat[i+1][j]=mat[i+1][j]-(mat[i][j]*temp);
			mat[i-1][j]=mat[i-1][j]-(mat[i][j]*temp1);
		}
		temp=mat[0][2]/mat[2][2];
		temp1=mat[1][2]/mat[2][2];
		for(i=0,j=0;j<n+1;j++)
		{
			mat[i][j]=mat[i][j]-(mat[i+2][j]*temp);
			mat[i+1][j]=mat[i+1][j]-(mat[i+2][j]*temp1);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n+1;j++)
			{
				printf(" %.3f",mat[i][j]);
			}
			printf("\n\n");
		}
		z=mat[2][3]/mat[2][2];
		y=mat[1][3]/mat[1][1];
		x=mat[0][3]/mat[0][0];
		printf("\n\nx = %.3f",x);
		printf("\n\ny = %.3f",y);
		printf("\n\nz = %.3f",z);
	fflush(stdin);
	printf("\n\n\t Do you want to continuen For Loop(y/Y)? ");    //asking for continuation
	fflush(stdin);
	scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\n\t ....End Of Program....");
getch();
}