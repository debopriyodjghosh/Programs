/* 		         surya rules			*/

/*     writting a  string with words from the back	*/
/*  example: this is doon school as scool doon is this	*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"math.h"


 main()
{

	char string[100],words[10][10];
	int row=0,col=0,i,j,length;

	printf("enter a string: ");
	fflush(stdin);
	gets(string);

	length=strlen(string);

	for(i=0;i<length;i++)
	{
		if(string[i]!=' ' && string[i]!='.' && string[i]!='\n')
		{
			words[row][col]=string[i];
			col++;
		}
		else
		{
			words[row][col]='\0';
			row++;
			col=0;
		}

	}


	printf("the required output is: ");


/*	for(i=length-1;i>=0;i--)
	{
		puts(words[i]); //printf(" ");
	}
					       */

	for(i=0;i<=row;i++)
	{
		for(j=strlen(words[i])-1;j>=0;j--)
		{
			printf("%c",words[i][j]);
		}
		printf(" ");
	}


	getch();

}


