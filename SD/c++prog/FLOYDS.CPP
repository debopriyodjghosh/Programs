/* 		         surya rules			*/

/*			floyd's triangle		*/

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

	int i,j,start=1;
	clrscr();

	for(i=1;i<=13;i++)
	{
		for(j=start;j<start+i;j++)
			printf("%6d",j);

		printf("\n\n");

		start=start+i;
	}


	getch();

}