/* 		         surya rules			*/

/*          insertion of an element into a sorted array		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"



void main()
{
	int input[50],length,element,i,j,temp,min,pos,flag,temp_1;
	clrscr();
	printf("enter the elements you want to be present in the array initially:");
	scanf("%d",&length);
	for(i=0;i<length;i++)
	{
		printf("input[%d]=",i);
		scanf("%d",&input[i]);
	}

	/* 	sorting the entered array	*/

	for(i=0;i<length-1;i++)
	{
		min=input[i];
		pos=i;
		for(j=0;j<length-i-1;j++)
		{
			if(input[j]>input[j+1])
			{
				temp=input[j];
				input[j]=input[j+1];
				input[j+1]=temp;
			}
		}
	}

	printf("\n\n the sorted array is........\n\n");
	for(i=0;i<length;i++)
		printf("%2d ",input[i]);

	printf("\n\n enter an element for insertion....");
	scanf("%d",&element);

	/* 	searching the correct position of the new element	*/

	for(i=0;i<length;i++)
	{
		if(element<input[i])
		{
			pos=i;
			break;
		}

	}

	/*	inserting the element into the array	*/

	temp=input[pos];
	input[pos]=element;
	for(j=pos+1;j<length+1;j++)
	{
		temp_1=input[j];
		input[j]=temp;
		temp=temp_1;
	}

	/* printing the final array	*/

	printf("\n\n printing the final array...........\n");
	for(i=0;i<length+1;i++)
		printf("%2d ",input[i]);

	getch();

}