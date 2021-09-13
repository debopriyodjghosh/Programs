#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
struct node *ll;
int data;
struct node *rl;
};

void append(struct node **);
void add_beg(struct node **);
void add_after(struct node **);
void Delete(struct node **);
void display(struct node *);
void main()
{
	struct node *list;
	int ch,y,x;
	clrscr();
	list=NULL;
	printf("DOUBLY LINKED LIST OPERATIONS");
	while(1)
	{
	printf("\nMENU\n1.Append\n2.Add at the beginning\n3.Add after a particular node\n4.Delete a node\n5.Display\n6.exit\nEnter your choice: ");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:append(&list);
	       break;
	case 2:add_beg(&list);
	       break;
	case 3:add_after(&list);
	       break;
	case 5:display(list);
	       break;
	case 4:Delete(&list);
	       break;
	case 6:exit(0);
	default:printf("Error!!!Try again");
	}
	}
	}
void append(struct node **list)
 {
	struct node *p,*q;
	int y;
	p=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&y);
	if(*list==NULL)
	{
	p->data=y;
	p->rl=NULL;
	p->ll=NULL;
	(*list)=p;
	}
	else
	{
		q=*list;
		while(q->rl!=NULL)
			q=q->rl;
		q->rl=p;
		p->data=y;
		p->ll=q;
		p->rl=NULL;
	}
 }
 void add_beg(struct node **list)
 {
	struct node *p;
	int x;
	p=(struct node *)malloc(sizeof(struct node));
	printf("\nEnter the data: ");
	scanf("%d",&x);
	if(*list==NULL)
		{
		p->data=x;
		p->rl=NULL;
		p->ll=NULL;
		*list=p;
		}
	else
	{
	p->data=x;
	p->rl=*list;
	(*list)->ll=p;
	*list=p;
	}
  }
  void add_after(struct node **list)
  {
	struct node *p,*q;
	int m,n;
	printf("\nEnter the data after which you want to insert: ");
	scanf("%d",&m);
	printf("\nEnter the data you want to insert: ");
	scanf("%d",&n);
	if(*list==NULL)
	{
	p->data=n;
	p->ll=NULL;
	p->rl=NULL;
	*list=p;
	}
	else
	{
	q=*list;
	while(q->data!=m)
		q=q->rl;
	if(q->data==m)
	{
	p=(struct node *)malloc(sizeof(struct node));
	p->data=n;
	p->rl=q->rl;
	q->rl->ll=p;
	p->ll=q;
	q->rl=p;
	}
	else
		printf("\nData not found");
	}
	}
 void Delete(struct node **list)
 {
	struct node *p,*q;
	int r;
	printf("\nEnter the data you want to delete: ");
	scanf("%d",&r);
	if(*list==NULL)
		{
		printf("\nList is empty.");
		return;
		}
	if((*list)->data==r)
		{
		p=(*list);
		(*list)=(*list)->rl;
		(*list)->ll=NULL;
		printf("\nThe item deleted is %d",p->data);
		free(p);
		return;
		}
	p=*list;
	while(p->data!=r)
		p=p->rl;
	if(p->data==r)
		{
		q=p;
		q->ll->rl=p->rl;
		q->rl->ll=p->ll;
		printf("\nThe item deleted is %d",p->data);
		free(p);
		}
	else
		printf("\nItem is not present in the list.");
   }

 void display(struct node *list)
	{
	struct node *p;
	if(list==NULL)
	{
	printf("\nNo element is present.");
	return;
	}
	p=list;
	while(p!=NULL)
	{
	printf("%d ",p->data);
	p=p->rl;
	}
	}


