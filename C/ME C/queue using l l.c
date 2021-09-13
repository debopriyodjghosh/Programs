#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct lqueue
{
	int n;
	struct lqueue* next;
}node;

node *q_insert(node *);
node *q_delete(node *);
void display(node *);

node *q =NULL;
static int flag=1;

void main()
{
	char i;
	node *h,*q1;
	while(1)
	{

	printf("\n\t\t\t MAIN MENU \
			\n\t1.INSERT ELEMENT INTO THE QUEUE (press: 1)\
			\n\t2.DELETE ELEMENT FROM THE QUEUE (press: 2)\
			\n\t3.DISPLAY ELEMENTS OF THE QUEUE (press: 3)\
			\n\t4.EXIT                          (press: 4)\
			\n\nEnter your choice:");

	scanf("%d",&i);
	switch(i)
	{
		case 1:
		if(flag==1)
		{
		flag=0;
		h=(node *)malloc(sizeof(node *));
		q=h;
		printf("\nEnter element:");
		scanf("%d",&h->n);
		h->next = NULL;
		break;
		}
		else
		{
		q = q_insert (q);
		break;
		}
		case 2:
		if(flag==1)
		{
		printf ("\nQueue is Empty");
		break;
		}
		else
		{
		q1 = q_delete(h);
		h=q1;
		break;
		}
		case 3:
		if(flag==1)
		{
		printf ("\nQueue is Empty");
		break;
		}
		else
		{
		display (h);
		break;
		}
		case 4:
                        exit(0);
		default : printf("\nWrong choice !");

	}
       }

}

node *q_insert(node *p)
{
	node *t;
	t=(node *)malloc(sizeof(node*));
	printf("\nEnter element:");
	scanf("%d",&t->n);
	p->next = t;
	t->next = NULL;
	return t;

}

node *q_delete(node *sq)
{
	node *st;
	st=sq;
	printf("\nRemoved element is: %d",sq->n);
	if(sq->next == NULL)
	{
	printf("\n\nRemoved element is the Last element");
	flag=1;
	return NULL;
	}
	else
	{
	sq = sq->next;
	free(st);
	return sq;
	}
}

void display(node *h)
{	node *p;
	p=h;
	printf("\n");
	while((p->next)!=NULL)
	{	printf(" | %d |",p->n);
		p=p->next;
	}
	printf(" | %d |\n ",p->n);

}
