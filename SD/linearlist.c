//LINEAR LINKED LIST
//Sunday, September 22, 2013
#include<stdio.h>
#include<alloc.h>
//#include<conio.h>
typedef struct node
{
	int data;
	struct node *link;
}NODE;
void addend(NODE**,int);
void addbeg(NODE**,int);
void addafter(NODE**,int,int);
void addspec(NODE**,int);
void delet(NODE**,int);
void reverse(NODE**);
void count(NODE**);
void display(NODE**);
void main()
{
	NODE *p=NULL;
	addend(&p,1);
	addend(&p,2);
	addend(&p,3);
	addend(&p,7);
	addend(&p,3);
	count(&p);
	display(&p);
	addbeg(&p,1);
	addbeg(&p,10);
	addbeg(&p,99);
	count(&p);
	display(&p);
	addafter(&p,2,14);
	addafter(&p,5,45);
	addafter(&p,7,33);
	addafter(&p,3,58);
	count(&p);
	display(&p);
	delet(&p,58);
	delet(&p,9);
	delet(&p,11);
	count(&p);
	display(&p);
	reverse(&p);
	count(&p);
	display(&p);
}
void addend(NODE**q,int item)
{
	NODE *temp,*r;
	if(*q==NULL)
	{
		temp=(NODE*)malloc(sizeof(NODE));
		temp->data=item;
		temp->link=NULL;
		*q=temp;
	}
	else
	{
		temp=*q;
		while(temp->link!=NULL)
			temp=temp->link;
		r=(NODE*)malloc(sizeof(NODE));
		r->data=item;
		r->link=NULL;
		temp->link=r;
	}
}
void addbeg(NODE**q,int item)
{
	NODE*temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=item;
	temp->link=*q;
	*q=temp;
}
void addafter(NODE**q,int pos,int item)
{
	NODE *temp,*r;
	int i;
	temp=*q;

	for(i=1;i<pos;i++)
	{
		if(temp==NULL)
		{
			printf("\n INVALID POSITION");
			return;
		}
		temp=temp->link;
	}
	r=(NODE*)malloc(sizeof(NODE));
	r->data=item;
	r->link=temp->link;
	temp->link=r;
}
void delet(NODE**q,int item)
{
	NODE *temp,*r;
	temp=r=*q;
	while(temp->link!=NULL)
	{
		if(temp->data==item)
		{
			if(temp==*q)
				(*q)=(*q)->link;
			else
				r->link=temp->link;
			free(temp);
			return;
		}
		else
		{
			r=temp;
			temp=temp->link;
		}
	}
	printf("\n ITEM NOT FOUND=%d",item);
}
void reverse(NODE**x)
{
	NODE *q,*r,*s;
	q=*x;
	r=NULL;
	while(q!=NULL)
	{
		s=r;
		r=q;
		q=q->link;
		r->link=s;
	}
	*x=r;

}
void display(NODE**q)
{
	NODE *temp;
	temp=*q;
	printf("\n ELEMENTS ARE=");
	while(temp!=NULL)
	{
		printf("\t%d",temp->data);
		temp=temp->link;
	}
}
void count(NODE**q)
{
  NODE *temp;
	int a=0;
  temp=*q;
	while(temp!=NULL)
	{
		a++;
		temp=temp->link;
	}
	printf("\n NUMBER OF NODES=%d",a);
}



