//creation of single linked list
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<alloc.h>
//#define NULL 0
typedef struct node
{
 int data;
 struct node *link;
}som;
void main(void)
{
 som *p,*t,*x;
 char a='y';
 int count=0;
 clrscr();
 fflush(stdin);
 p=(som*)malloc(sizeof(som));
 printf("\nenter the value for the node: ");
 scanf("%d",&p->data);
 p->link=NULL;
 t=p;
 printf("\nwant to continue again?(y/n): ");
 fflush(stdin);
 scanf("%c",&a);
 while(a=='y'||a=='Y')
 {
  x=(som*)malloc(sizeof(som));
  printf("\nenter the value for the node: ");
  scanf("%d",&x->data);
  t->link=x;
  t=x;
  printf("\nwant to continue again?(y/n): ");
  fflush(stdin);
  scanf("%c",&a);
  x->link=NULL;
 }
 printf("\n\n");
 t=p;
 printf("\n\nYour entered list: ");
 while(t!=NULL)
 {
  count++;
  printf(" %d->",t->data);
  t=t->link;
 }
 printf("NULL.");
 printf("\n\nThe no. of nodes: %d",count);
 getch();
}

