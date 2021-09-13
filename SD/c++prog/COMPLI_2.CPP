/* 		         surya rules			*/

/*             twos compliment to decimal number	*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"stdlib.h"

void main()
{
	char char_twos_compliment[100];
	int  int_twos_compliment[100];
	int i=0,c=0,length,decimal=0;
	clrscr();

	printf("enter a twos compliment number:");
	gets(char_twos_compliment);

	while(char_twos_compliment[i] != '\0')
		int_twos_compliment[c++] = (char_twos_compliment[i++])-48;

	length=strlen(char_twos_compliment);
	for(i=0;i<length;i++)
	{
	   int_twos_compliment[i] = 1-int_twos_compliment[i];
	   printf("int= %d\n",int_twos_compliment[i]);
	}

	printf("-------------------------------------------------------\n");


	c=1;
	for(i=length-1;i>=0;i--)
	{
	    int_twos_compliment[i]=int_twos_compliment[i]+c;
	    if(int_twos_compliment[i] == 2)
		int_twos_compliment[i] = 0;
	    else
		c=0;

	    printf("int= %d\n",int_twos_compliment[i]);
	}
	length=length-1;

	for(i=0;i<=length;i++)
	{
		decimal=decimal+(int_twos_compliment[i]*pow(2,length-i));
	}

	printf("the decimal equivalent is: %d",decimal);

	getch();

}