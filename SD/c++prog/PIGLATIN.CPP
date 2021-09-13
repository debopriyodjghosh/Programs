/* 		         surya rules			*/

/*       send the first charecter of each word          */
/*    of a string to the end of the word and add 'a'    */

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
	char string[50],piglatin[75];
	int i,j,k,count=0,m1=0,m2;
	clrscr();

	printf("enter a string: ");
	fflush(stdin);
	gets(string);

	int words=1;

	for(i=0;i<strlen(string);i++)
	{
		if(string[i]==' ')
			words++;
	}

	for(i=1;i<=words;i++)
	{
		count=m1;
		while(string[count] != ' ' && string[count] !='\0' )
			m2=count++;

		for(j=m1;j<m2;j++)
			piglatin[j+(i-1)]=string[j+1];

		piglatin[m2+(i-1)]=string[m1];
		piglatin[m2+i]='a';
		piglatin[m2+i+1]=' ';
		m1=m2+2;
	}




	printf(" the required piglatin is:  ");
	puts(piglatin);

	getch();

}


