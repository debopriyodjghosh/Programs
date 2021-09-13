/* 		         surya rules			*/

/*	        	insertion sort 			*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"



void main()
{
	int input[100],i,j,temp,n;
	clrscr();

	printf("enter the number of elements of the array:");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&input[i]);
	}

	for(i=1;i<n;i++)
	{
		temp=input[i];
		for(j=i-1;j>=0 && temp<input[j];j--)
		{
			input[j+1]=input[j];
		}
		input[j+1]=temp;
	}

	printf("the sorted array is as follows.........\n\n");
	for(i=0;i<n;i++)
		printf("%5d ",input[i]);

	getch();
}