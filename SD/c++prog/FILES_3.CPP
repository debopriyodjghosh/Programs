/* 		         surya rules			*/

/*							*/

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

	clrscr();
	FILE *stream;

	stream = fopen("MYFILE.TXT", "w+");
	fprintf(stream, "This is a test");
	printf("The file pointer is at byte %ld\n", ftell(stream));
	fclose(stream);

	getch();

}


