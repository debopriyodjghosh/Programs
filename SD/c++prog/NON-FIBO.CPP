/* 		         surya rules			*/

/*          non-fibonacci numbers of afibinacci series		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"



void main()
{

	int first_term=0,last_term=1,next_term,i,j,limit;
	clrscr();
	printf("enter the number upto which non-fibonacci numbers is to be displayed:");
	scanf("%d",&limit);
	printf("\n the non-fibonacci numbers are.........\n\n");

	for(i=1;i<=limit;i++)
	{
		next_term=first_term+last_term;
		for(j=last_term+1;j<next_term && j<=limit;j++)
			printf("%d  ",j);
		first_term=last_term;
		last_term=next_term;
	}

	getch();

}