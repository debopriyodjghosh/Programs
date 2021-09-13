/* 		         surya rules			*/

/*		     palindrome	     			*/

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
	 char str1[20],str2[20];
	 int i,j,len,c=0;
	 clrscr();

	 printf("enter a string:");
	 gets(str1);

	 len=strlen(str1);

	 for(i=len-1;i>=0;i--)
	 {

		str2[c]=str1[i];c++;

	 }

	 str2[c]='\0';


	 if(strcmp(str1,str2)==0)
		printf("\n\n palindrome.");
	 else
		printf("\n\n not palindrome.");







	getch();

}