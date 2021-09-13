/* 		         surya rules			*/

/*		     pascal's triangle			*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"

void main()
{
	int p[20][20];
	int i=0,j=0,k=0;
	clrscr();

	for(i=0;i<10;i++)
		p[i][j]=1;

	for(i=0;i<10;i++)
		p[i][j++]=1;

	for(i=0;i<10;i++)
	{
		for(k=0;k<10-i;k++)     /* printing spaces */
			printf("  ");

		for(j=0;j<=i;j++)
		{
			if(j!=0  && j!=i)
				p[i][j]=p[i-1][j-1]+p[i-1][j];

			printf("%4d",p[i][j]);
		}

		printf("\n");
	}
	getch();

}