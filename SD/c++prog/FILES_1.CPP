 /* 		         surya rules			*/

/*		 reading from keyboard                  */
/*	and writting in the file in upper charecters	*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"ctype.h"

void main()
{
	FILE *fpt;
	char c;
	clrscr();

	fpt=fopen("sample.dat","w+");

	do
	{
		putc(toupper(c=getchar()),fpt);

	}while(c!='\n');

	fclose(fpt);

	getch();

}


