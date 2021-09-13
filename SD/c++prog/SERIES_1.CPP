/* 		         surya rules			*/

/*              series 1,8,2,10,3,12,4,15,16		*/

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

	int i,j,add=7;
	clrscr();
	for(i=1;i<=10;i++)
	{
		printf("%4d,%d",i,i+add);
		add++;
	}

	getch();

}