
/* 		         surya rules			*/

/*	               selection sort			*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"



void main()
{
	int input[100],n,i,j,min,pos,temp;
	clrscr();
	printf("enter the length of the array:");
	scanf("%d",&n);

	printf("enter the values of the array..\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&input[i]);

	}

	for(i=n-1;i>0;i--)
	{
		min=input[0];
		pos=0;
		for(j=1;j<=i;j++)
		{
			if(min<input[j])
			{
				min=input[j];
				pos=j;
			}

		}

			input[pos]=input[i];
			input[i]=min;
	}

	printf("the sorted array is as follows.........\n");

	for(i=0;i<n;i++)
		printf("%5d ",input[i]);
	getch();

}