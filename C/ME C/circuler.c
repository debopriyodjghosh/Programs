
#include<stdio.h>
#include<alloc.h>
typedef struct node
{
	int data;
	struct node *next;
}NODE;
void addcirculer(NODE**,NODE**,int);
void delcirculer(NODE**,NODE**);
void display(NODE**);
void count(NODE**);
void main()
{
	NODE *f,*r;
	f=r=NULL;
	 addcirculer(&f,&r,10);
	 addcirculer(&f,&r,20);
	 addcirculer(&f,&r,30);
	 addcirculer(&f,&r,40);
	 addcirculer(&f,&r,50);
	 addcirculer(&f,&r,60);
	 addcirculer(&f,&r,70);
	 addcirculer(&f,&r,80);
	 addcirculer(&f,&r,90);
	 addcirculer(&f,&r,100);
	 addcirculer(&f,&r,111);
	 display(&f);
	 delcirculer(&f,&r);
	 delcirculer(&f,&r);
	 delcirculer(&f,&r);
	  display(&f);
}
void addcirculer(NODE**f,NODE**r,int item)
{
	NODE *q;
	q=(NODE*)malloc(sizeof(NODE));
	q->data=item;
	if(*f==NULL)
		*f=q;
	else
		(*r)->next=q;
	*r=q;
   (*r)->next=*f;
}
void delcirculer(NODE**f,NODE**r)
{
	NODE *q;
	int item;
	if(*f==NULL)
		printf("\nLIST IS EMPTY");
	else
	{
		if(*f==*r)
		{
			item=(*f)->data;
			free (*f);
			*f=*r=NULL;
		}
		else
		{
			q=*f;
			item=q->data;
			*f=(*f)->next;
			(*r)->next=*f;
		}
		free (q);
	}
	printf("\nITEM DELETED=%d",item);
}

void display(NODE**f)
{
	NODE *q,*p;
	q=*f;
	p=NULL;
	while(q!=p)
	{
		printf("\n%d",q->data);
		q=q->next;
		p=*f;
	}
}
