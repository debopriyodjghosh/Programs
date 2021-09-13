/* 		         surya rules			*/

/*                   initials of a name			*/

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

	char name[100];
	int i,j,c,pos,length=0,space=0;

	clrscr();
	printf("enter ur full name: ");
	gets(name);

	length=strlen(name);

	for(i=0;i<length;i++)
	{
		if(name[i]==' ')
			space++;
	}

	//words=space+1;

	printf("the initials are: %c.",name[0]);

	if (space != 1)
	{
		for(i=0;i<length && space>1 ;i++)
		{
			if(name[i]==' ')
			{
				printf("%c.",name[i+1]);
				space--;
			}

		      // printf("space= %d\n");
		}
	}

	if(space==1)
	{
		for(i=0;i<length;i++)
		{
			if(name[i]==' ')
				pos=i;
		}
		for(i=pos+1;i<length;i++)
			printf("%c",name[i]);
	}


	getch();

}