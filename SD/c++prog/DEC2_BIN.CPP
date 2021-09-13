/* 		         surya rules			*/

/*              decimal to binary using mask		*/

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
	int a,b,m,count,nbits;
	unsigned mask;
	clrscr();

	nbits=8*sizeof(int);
	m= 0x1 << (nbits-1);
	printf("mask= %d\n",mask);

	do
	{
		printf("\n\n enter an integer value (0 to stop): ");
		scanf("%d",&a);

		mask=m;
		//printf("mask= %u\n",mask);
		printf("\n");
		for(count=1;count<=nbits;count++)
		{
			b=(a&mask)?1:0;
			//printf("mask= %u\n  ",mask);
			printf("%d",b);
			if(count%4==0)
				printf(" ");
			mask>>=1;
		}
	}while(a!=0);




	getch();

}


