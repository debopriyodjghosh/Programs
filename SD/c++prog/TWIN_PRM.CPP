/* 			surya rules		*/

/*		prime number between a range		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"


void main()
{
	int lower,upper,flag=0,i,j,first_prime=0,second_prime=0;
	clrscr();
	printf("enter lower range:");
	scanf("%d",&lower);
	printf(" enter upper range:");
	scanf("%d",&upper);
	printf("\nthe twin prime numbers are as follows..............\n\n");

	for(i=lower;i<=upper;i++)
	{
		for(j=2;j<i-1;j++)
		{
			if(i%j==0)
			{
				flag=1;
			}
		}

		if(flag==0)
		{
			first_prime=i;
		}
		if(first_prime - second_prime==2)
		{
			printf("%d  %d \n\n",second_prime,first_prime);
		}

		second_prime=first_prime;

		flag=0;
	}

	getch();

}