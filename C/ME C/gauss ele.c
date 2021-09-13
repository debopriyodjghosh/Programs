#include<stdio.h>		//header file declaration//
#include<conio.h>
int main()
{											//main//
	float a[10][10];
	float x1,x2,x3,i,j,t;
   char ans;
	clrscr();
   printf("\n\t***GAUSS ELIMINATION METHOD***");
	do
	{

		printf("\n\n\tEnter the matrix elements:");		//input from user//
		for(i=1;i<=3;i++)
		{
			for(j=1;j<=4;j++)
			{
				scanf("%f",&a[i][j]);
			}
			printf("\n");
		}
		for(i=2;i<=3;i++)
		{
			t=a[i][1];							// calculations//
			for(j=1;j<=4;j++)
			{
				a[i][j]=a[i][j]-((a[1][j]*t)/a[1][1]);
			}
		}
		t=a[3][2];
		for(j=2;j<=4;j++)
		{
			a[3][j]=a[3][j]-((a[2][j]*t)/a[2][2]);
		}
		x3=a[3][4]/a[3][3];
		x2=(a[2][4]-(a[2][3]*x3))/a[2][2];
		x1=(a[1][4]-(a[1][3]*x3)-(a[1][2]*x2))/a[1][1];
		printf("\n The solution of the given equation are as follows:\n");
		printf("x1=%f\t x2=%f\t x3=%f\t",x1,x2,x3);
		printf("Doyou want to continue??[y/n]");
		fflush(stdin);
		scanf("%c",&ans);
	}while(ans == 'y'|| ans=='Y');
	printf("\n\tEND OF THE PROGRAM");
	getch();
}


/* output

		  ***GAUSS ELIMINATION METHOD***

		  Enter the matrix elements:

		  2 3 1 9
		  1 2 3 6
		  3 1 2 8


 The solution of the given equation are as follows:
	x1=1.944445
	x2=1.611111
	x3=0.277778

	Doyou want to continue??[y/n]n

		  END OF THE PROGRAM    */
