/* 		         surya rules			*/

/*			  name game:			*/
/*	   think of a name and i will tell u wat it is  */

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

	char *alphabets[7]={"1. abcd","2. efgh","3. ijkl","4. mnop","5. qrst","6. uvwx","7. yz"};
	char name[4][100];
	char output[100];
	int i,j,ch,temp[20],c=0,x,o=0,c1=1;

	clrscr();

	for(i=0;i<7;i++)
	{
		puts(alphabets[i]);
		printf("\n");
	}

	printf("\n");
	printf("  enter the row which has the first letter of the name: ");
	fflush(stdin);
	ch=getchar();

	for(i=0;i<4;i++)
	{
		name[i][c]=i+1+48;
	}

	while(ch!='\n')
	{
		x=3;
		c++;


		for(i=0;i<4;i++)
		{
			name[i][c]=alphabets[ch-48-1][x++];
		}


	   printf("\n enter the row which has the next letter of the name(enter to end): ");
	   fflush(stdin);
	   ch=getchar();

	}


	printf("\n\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<=c;j++)
		{
			printf("  %c",name[i][j]);
		}
		printf("\n\n");

	}

	printf("  enter the row which has the first letter of the name: ");
	fflush(stdin);
	ch=getchar();
	output[o++]=name[ch-48-1][c1++];

	for(j=1;j<c;j++)
	{
		printf("  enter the row which has the next letter of the name: ");
		fflush(stdin);
		ch=getchar();
		output[o++]=name[ch-48-1][c1++];

	}

	output[o]='\0';

	printf("\n\n\n the name u thought is..........");
	puts(output);





	getch();

}


