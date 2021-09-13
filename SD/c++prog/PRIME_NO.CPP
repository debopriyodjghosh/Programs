/* 			surya rules		*/

/*		prime numbers between a range		*/

/* 		the program is working fine		*/

#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"




void main()
{
	int upper,lower,i,j,k,flag=0;
	clrscr();
	printf("enter lower range:");
	scanf("%d",&lower);
	printf("\n enter upper range:");
	scanf("%d",&upper);

	printf("\n the required prime numbers are as follows........\n");

	for(i=lower;i<=upper;i++)
	{
		for(j=2;j<=i/2;j++)
		{

			if(i%j==0)
			{
				flag=1;
			}

		}
		if(flag==0 && i!=1)
			printf("%d  ",i);
		flag=0;
	}

	getch();

}