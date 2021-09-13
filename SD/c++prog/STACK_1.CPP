/* 		         surya rules			*/

/*	        stack insertion and deletion		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"

//#define MAX 50

void stack_push(int input[],int max,int *top,int *item)
{
	*top=-1;
	if(*top<max-1)
	{
		*top++;
		input[*top]=*item;
		printf("top=%d ",*top);
		getch();
	}
	else
		printf("the stack is full............");
}

void stack_pop(int input[],int *top,int *item)
{
	if(*top>-1)
	{
		*item=input[*top];
		*top=*top-1;
	}
	else
		printf("the stack is empty");
		getch();
}

void main()
{

	int input[50],i,max,top=-1;
	clrscr();

      /*	printf("enter the maximum number of elements you want to enter:");
	scanf("%d ",&max);

	for(i=0;i<max;i++)
	{
		printf("input[%d]=",i);
		scanf("%d",&input[i]);
	}
	printf("\n the original array.........\n");
	for(i=0;i<max;i++)
		printf("%d  ",input[i]);

	getch();

	for(i=0;i<max;i++)
	{
		stack_push(input,max,&top,&input[i]);
	}
	printf("\n\n\n\n the stack..................");


	for(i=0;i<top;i++)
		printf("%d  ",input[i]);


	printf("\n\n\n\n top=%d",top);

       */
	getch();

}