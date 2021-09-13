/* 			surya rules		*/

/*	          prime factors of a number 		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"


int isprime(int x)
{
	int flag=0,i;

	for(i=2;i<x;i++)
	{
		if(x%i==0)
			flag=1;
	}
	if(flag==0)
		return 1;
	else
		return 0;

}
void main()
{
	int input,i,j,prime;
	clrscr();
	printf("enter a number:");
	scanf("%d",&input);
	printf("the prime factors of the given number are as follows........\n\n");

	for(i=1;i<=input;i++)
	{
		if(input%i==0)
		{
			prime=isprime(i);
			if(prime == 1)
				printf("%d  ",i);
		}
	}

	getch();

}