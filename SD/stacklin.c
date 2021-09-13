#include<stdio.h>
#include<alloc.h>
#include<conio.h>
typedef struct stack
	{
		int data;
		struct stack*link;
	}STACK;
void push(STACK**,int);
int pop(STACK**);
void display(STACK*);
void main()
	{
		STACK *s=NULL;
		int choice,i;
		do
			{
				clrscr();
				printf("\n 1 FOR PUSH....");
				printf("\n 2 FOR POP.....");
				printf("\n 3 FOR EXIT\n");
				scanf("%d",&choice);
				if(choice<1 || choice>3)
					continue;
				switch(choice)
					{
						case 1:
								 printf("\nENTER VALUE TO INSERT= ");
								 scanf("%d",&i);
								 push(&s,i);
								 //getch();
								 break;
						case 2:
								 i=pop(&s);
								 printf("\n ITEM POP=%d",i);
								 //getch();
								 break;
						case 3:
								 printf("\nPROGRAM ENDS......");
								 //getch();
								 break;
					}
				printf("\n");
				display(s);
			}while(choice!=3);
	}
void push(STACK**x,int item)
	{
		STACK *q;
		q=(STACK*)malloc(sizeof(STACK));
		q->data=item;
		q->link=*x;
		*x=q;
	}
int pop(STACK**x)
	{
		STACK *q;
		int i;
		if(*x==NULL)
			{
				printf("\nSTACK IS EMPTY....");
				return NULL;
			}
		q=*x;
		i=q->data;
		*x=q->link;
		free (q);
		return i;
	}
void display(STACK*x)
	{
		while(x!=NULL)
			{
				printf("\t%d_",x->data);
				x=x->link;
			}
		getch();
	}

