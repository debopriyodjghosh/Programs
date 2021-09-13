#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<stdlib.h>
typedef struct node
{
   int data;
   struct node*link;
}NODE;
void add(NODE**,int);
void merge(NODE*,NODE*,NODE**);
void display(NODE*);
void main()
{
   int i,j,ch;
   NODE*first,*second,*third;
   first=second=third=NULL;
   while(1)
   { clrscr();
     printf("\nPress 1 to take input in the first list");
     printf("\nPress 2 to take input in the second list");
     printf("\nPress 3 to Merge");
     printf("\nPress 4 to exit");
     printf("\nPress 5 to display first list");
     printf("\nPress 6 to display second list");
     printf("\nPress 7 to display third list");
     printf("\nEnter Your Choice");
     scanf("%d",&ch);
     switch(ch)
     {
       case 1:printf("\nEnter the element to insert");
	      scanf("%d",&i);
	      add(&first,i);
	      getch();
	      break;
       case 2:printf("\nEnter the element to insert");
	      scanf("%d",&j);
	      add(&second,j);
	      getch();
	      break;
       case 3:printf("\nAfter merging.....");
	      merge(first,second,&third);
	      getch();
	      break;
       case 4:exit(0);
       case 5:display(first);
	      getch();
	      break;
       case 6:display(second);
	      getch();
	      break;
       case 7:display(third);
	      getch();
	      break;
       default:printf("\nWrong Input");
     }
   }
   getch();
}
void add(NODE**q,int item)
{
  NODE*r,*temp=*q;
  r=(NODE*)malloc(sizeof(NODE));
  r->data=item;
  if(*q==NULL||(*q)->data>item)
  {
    *q=r;
    (*q)->link=temp;
  }
  else
  {
    while(temp!=NULL)
    {
      if(temp->data<=item&&(temp->link->data>item||temp->link==NULL))
      {
	r->link=temp->link;
	temp->link=r;
	return;
      }
     temp=temp->link;
    }
   // r->link=NULL;
   // temp->link=r;
  }
}
void merge(NODE*p,NODE*q,NODE**s)
{
  NODE*z;
  if(p==NULL&&q==NULL)
  return;
  while(p!=NULL&&q!=NULL)
  {
    if(*s==NULL)
    {
      *s=(NODE*)malloc(sizeof(NODE));
      z=*s;
    }
    else
    {
      z->link=(NODE*)malloc(sizeof(NODE));
      z=z->link;
    }
    if(p->data<q->data)
    {
      z->data=p->data;
      p=p->link;
    }
    else if(q->data<p->data)
    {
      z->data=q->data;
      q=q->link;
    }
    else if(p->data==q->data)
    {
      z->data=p->data;
      p=p->link;
      q=q->link;
    }
  }
  while(p!=NULL)
  {
    if(*s==NULL)
    {
      *s=(NODE*)malloc(sizeof(NODE));
      z=*s;
    }
    else
    {
      z->link=(NODE*)malloc(sizeof(NODE));
      z=z->link;
    }
      z->data=p->data;
      p=p->link;
  }
  while(q!=NULL)
  {
    if(*s==NULL)
    {
      *s=(NODE*)malloc(sizeof(NODE));
      z=*s;
    }
    else
    {
      z->link=(NODE*)malloc(sizeof(NODE));
      z=z->link;
    }
    z->data=q->data;
    q=q->link;
   }
   z->link=NULL;
}
void display(NODE*q)
{
  printf("\n");
  while(q)
  {
    printf("%d\t",q->data);
    q=q->link;
   }
}


