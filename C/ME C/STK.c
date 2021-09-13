#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void push(int item);
void pop();
void display();

struct node
{
int data;
struct node *next;
};

struct node *top;

void main()
{
int ch,n,c;
do
{
printf("\n** Menu **");
printf("\nEnter 1 to push: ");
printf("\nEnter 2 to pop: ");
printf("\nEnter 3 to display: ");
printf("\nEnter 4 to exit: ");
scanf("%d",&ch);
switch(ch)
{
case 1: printf("\nEnter element to insert: ");
		  scanf("%d",&n);
		  push(n);
		  printf("\nPush successful! ");
		  break;

case 2: pop();
		  break;

case 3: display();

case 4:// printf("\nExiting program...");
		  break;
 }
printf("\n Do you wish to continue?  (n/y) (0/1) :");
scanf("%d",&c);
}while(c==1);

}

void push(int item)
{
 struct node *p;
 p=(struct node*)malloc(sizeof(struct node));
 p->data=item;
 if(top==NULL)
 {
	top=p;
	p->next=NULL;
  }
 else
 {
	p->next=top;
	top=p;
  }
 }

void pop()
{
 struct node *p;
 p=top;
 if(top==NULL)
	printf("\nStack Underflow");
 else if(top->next==NULL)
	top=NULL;
 else
	top=top->next;
 free(p);
 printf("\nPop successful!");
 }

void display()
{
  struct node *p=top;
  if(top==NULL)
  {
   printf("\nStack Empty!");
  return;
  }
  while(p!=NULL)
 {
	printf("\n %d  ",p->data);
	p=p->next;
  }
 }
