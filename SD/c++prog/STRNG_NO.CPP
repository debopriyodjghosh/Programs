/* 			surya rules		*/

/*		strong numbers between a range		*/

/* 		the program is working fine		*/




#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"

int factorial(int x)
{
	int i,fact=1;
	for(i=1;i<=x;i++)
		fact=fact*i;

	return(fact);
}



void main()
{
	int lower,upper,sum=0,digit,i,j,temp;
	clrscr();
	printf("enter lower range:");
	scanf("%d",&lower);
	printf("\n enter upper range:");
	scanf("%d",&upper);
	printf("the strong numbers are as follows..............\n");

	for(i=lower;i<=upper;i++)
	{
		temp=i;
		while(temp>0)
		{
			digit=temp%10;
			sum=sum+factorial(digit);
			temp=temp/10;
		}

		if(sum==i)
			printf("%d  ",i);

		sum=0;

	}

	getch();

}