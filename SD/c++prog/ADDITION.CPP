/* 		         surya rules			*/

/*	       adding two numbers of any size		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"ctype.h"


struct stack
{
	int data;
	struct stack *next;
};

void push(struct stack **top,int item)
{
	struct stack *temp;
	temp=(struct stack *)malloc(sizeof(struct stack));
	temp->data=item;
	temp->next=*top;
	*top=temp;
}


int pop(struct stack **top)
{
	int item;
	struct stack *temp;

	if(*top == NULL)
	{
		printf("stack is empty");

	}
	else
	{
		temp=*top;
		item=temp->data;
		(*top)=temp->next;
		free(temp);
		return(item);
	}

	return('\0');
}


void display(struct stack *top)
{
	while(top != NULL)
	{
		printf("%d",top->data);
		top=top->next;
	}
}



void main()
{
	int ch=-9;
	struct stack *top_1,*top_2,*top_3;
	top_1=top_2=top_3=NULL;
	int ch_1,ch_2,ch_3;
	int carry=0;

	clrscr();

	printf("enter a number: ");
	while((ch=getchar()) != '\n')
	{
		ch=ch-48;
		push(&top_1,ch);

	}

	printf("\nenter another number: ");
	while((ch=getchar()) != '\n')
	{
		ch=ch-48;
		push(&top_2,ch);

	}



	while(top_1 != NULL && top_2 != NULL)
	{
		ch_1=pop(&top_1);
		ch_2=pop(&top_2);

		ch_3=ch_1+ch_2+carry;

		if(ch_3<=9)
		{
			push(&top_3,ch_3);
			carry=0;
		}
		else
		{
			push(&top_3,ch_3%10);
			carry=ch_3/10;
		}


	}


	while(top_1 != NULL)
	{
		ch_3=pop(&top_1);
		ch_3=ch_3+carry;

		if(ch_3<=9)
		{
			push(&top_3,ch_3);
			carry=0;
		}
		else
		{
			push(&top_3,ch_3%10);
			carry=ch_3/10;
		}


	}


	while(top_2 != NULL)
	{
		ch_3=pop(&top_2);
		ch_3=ch_3+carry;

		if(ch_3<=9)
		{
			push(&top_3,ch_3);
			carry=0;
		}
		else
		{
			push(&top_3,ch_3%10);
			carry=ch_3/10;
		}

	}
	printf("\n\n\n\n\n\nthe required output is :");

	display(top_3);




	getch();

}


