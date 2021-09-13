//STACK USING ARRAY
#include<stdio.h>
#define MAX 10
typedef struct stack
{
	int a[MAX];
	int top;
}STACK;
void initstack(STACK*);
void push(STACK*,int);
int pop(STACK*);
int count(STACK*);
void display(STACK*);
void main()
{
	STACK s;
	int p;
	initstack(&s);
	push(&s,10);
	push(&s,20);
	push(&s,30);
	push(&s,90);
	push(&s,70);
	push(&s,50);
	push(&s,80);
	push(&s,40);
	push(&s,100);
	push(&s,60);
	printf("\n*-*-*NUMBER OF ELEMENT PRESENT IN THE SYACK~>%d\n",count(&s));
	display(&s);
	p=pop(&s);
	printf("\nITEM POP=%d\n",p);
	printf("\n*-*-*NUMBER OF ELEMENT PRESENT IN THE SYACK~>%d\n",count(&s));
	display(&s);
	p=pop(&s);
	printf("\nITEM POP=%d\n",p);
	printf("\n*-*-*NUMBER OF ELEMENT PRESENT IN THE SYACK~>%d\n",count(&s));
	display(&s);
	p=pop(&s);
	printf("\nITEM POP=%d\n",p);
	printf("\n*-*-*NUMBER OF ELEMENT PRESENT IN THE SYACK~>%d\n",count(&s));
	display(&s);
}
void initstack(STACK*s)
{
	s->top=-1;
}
void push(STACK*s,int item)
{
	if(s->top==MAX-1)
	{
		printf("\n STACK IS FULL\n");
		return;
	}
	s->top++;
	s->a[s->top]=item;
}
int pop(STACK*s)
{
	int t;
	if(s->top==-1)
	{
		printf("\nSTACK IS EMPTY\n");
		return 0;
	}
	t=s->a[s->top];
	s->top--;
	return t;
}
int count(STACK*s)
{
	int c=0;
	c=(s->top);
	return c;
}
void display(STACK*s)
{
	int i=0;
	while(i<=s->top)
	{
		printf("\ns->a[%d]=%d",i,s->a[i]);
		i++;
	}
}




