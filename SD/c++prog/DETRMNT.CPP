/* 		         surya rules			*/

/*	          value of a determinant		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"



void main()
{

	float a[10][10],r;
	int i,j,k,n,det=1;
	clrscr();
	printf("enter the value of n:");
	scanf("%d",&n);

	/* 	taking elements into the array		*/

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%f",&a[i][j]);
		}
	}

	/* 	display the matrix	*/

	printf("\n the matrix is ..............\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%10.2f  ",a[i][j]);
		}
		printf("\n");
	}

	/*	caculating the determinant value	*/

	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			if(k==i)
				continue;

			r=a[i][k]/a[k][k];
			for(j=0;j<n;j++)
			{
				a[i][j]=a[i][j]-r*a[k][j];
			}
		}
	}

	for(i=0;i<n;i++)
	{
		det=det*a[i][i];
	}

	/*	printing the determinant value		*/

	printf("\n\n\n the value of the determinant is....%d",det);
	getch();

}