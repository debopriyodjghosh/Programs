#include<stdio.h>
#include<alloc.h>
typedef struct stack
{
	int data;
	struct stack *link;
}STACK;
void createstack(STACK**);
void addstack(STACK**,int);
void delstack(STACK**);
void count(STACK**);
void display(STACK**);
void main()
{
	STACK *top;
	createstack(&top);
	addstack(&top,10);
	addstack(&top,52);
	addstack(&top,45);
	addstack(&top,44);
	addstack(&top,55);
	addstack(&top,75);
	addstack(&top,14);
	addstack(&top,54);
	addstack(&top,86);
	addstack(&top,75);
	addstack(&top,65);
	addstack(&top,19);
	addstack(&top,32);
	count(&top);
	display(&top);
	delstack(&top);
	delstack(&top);
	delstack(&top);
	count(&top);
	display(&top);
	addstack(&top,78);
	addstack(&top,26);
	count(&top);
	display(&top);
}
void createstack(STACK**top)
{
	*top=NULL;
}
void addstack(STACK**top,int item)
{
	STACK *ptr;
	ptr=(STACK*)malloc(sizeof(STACK));
	ptr->data=item;
	ptr->link=*top;
	*top=ptr;
}
void delstack(STACK**top)
{
	STACK *ptr;
	int value;
	value=(*top)->data;
	ptr=*top;
	*top=(*top)->link;
	free (ptr);
	printf("\n ITEM DELET=%d",value);
}
void count(STACK**top)
{
	STACK *temp;
	int c=0;
	temp=*top;
	while(temp!=NULL)
	{
		c++;
		temp=temp->link;
	}
	printf("\n NUMBER OF ITEM=%d",c);
}
void display(STACK**top)
{
	STACK *temp;
	temp=*top;
	while(temp!=NULL)
	{
		printf("\n\t %d",temp->data);
		temp=temp->link;
	}
}




