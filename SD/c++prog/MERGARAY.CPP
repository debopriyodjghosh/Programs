/* 		         surya rules			*/

/*	        merging of two sorted array		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"


void main()
{

	int input_1[50],input_2[50],output[100];
	int i,j,size_1,size_2,size_output,flag_1=0,flag_2=0,big_size,flag=0,input;
	clrscr();
	printf("enter the number of elements u want to enter in array 1:");
	scanf("%d",&size_1);
	printf("enter the elements of array 1:\n");
	for(i=0;i<size_1;i++)
	{
		printf("array[%d]",i);
		scanf("%d",&input_1[i]);
	}

	printf("\nenter the number of elements u want to enter in array 2:");
	scanf("%d",&size_2);
	printf("enter the elements of array 2:\n");
	for(i=0;i<size_2;i++)
	{
		printf("array[%d]",i);
		scanf("%d",&input_2[i]);
	}

	size_output=size_1+size_2;

	/*	sorting and pushing elements into the output array	*/

	while(flag_1<size_1 && flag_2<size_2)
	{
		if(input_1[flag_1]<=input_2[flag_2])
		{
			output[flag++]=input_1[flag_1++];
		}
		else
		{
			output[flag++]=input_2[flag_2++];
		}
	}

	/*	pushing remaining elements into the array	*/

	       while(flag_1<size_1)
			output[flag++]=input_1[flag_1++];


		while(flag_2<size_2)
			output[flag++]=input_2[flag_2++];


	/*	printing the merged and sorted array	*/

	printf("\n\n\n  the merged sorted array is ..............\n\n");

	for(i=0;i<size_output;i++)
		printf("%d  ",output[i]);


	getch();

}