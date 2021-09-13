//QUEUE USING LINKEDLIST
#include<stdio.h>
#include<alloc.h>
typedef struct node
{
	int data;
	struct node *link;
}NODE;
typedef struct queue
{
	struct node *front;
	struct node *rear;
}QUEUE;
void create(QUEUE*);
void addqueue(QUEUE*,int);
int delque(QUEUE*);
//void delqueue(QUEUE*);
void count(QUEUE*);
void display(QUEUE*);
void main()
{
	QUEUE a;
	int i;
	create(&a);
	addqueue(&a,1);
	addqueue(&a,2);
	addqueue(&a,3);
	addqueue(&a,5);
	addqueue(&a,4);
	addqueue(&a,6);
	addqueue(&a,9);
	addqueue(&a,10);
	addqueue(&a,12);
	addqueue(&a,25);
	addqueue(&a,13);
	addqueue(&a,70);
	count(&a);
	display(&a);
	i=delque(&a);
	printf("\n item deleted=%d",i);
		count(&a);
	display(&a);
	i=delque(&a);
	printf("\n item deleted=%d",i);
		count(&a);
	display(&a);
	i=delque(&a);
	printf("\n item deleted=%d",i);
		count(&a);
	display(&a);
	i=delque(&a);
	printf("\n item deleted=%d",i);
		count(&a);
	display(&a);
	i=delque(&a);
	printf("\n item deleted=%d",i);
	count(&a);
	display(&a);
}
void create(QUEUE*a)
{
	a->front=NULL;
	a->rear=NULL;
}
void addqueue(QUEUE*a,int item)
{
	NODE*temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=item;
	temp->link=NULL;
	if(a->front==NULL)
	{
		a->front=temp;
		a->rear=temp;
		return;
	}
	a->rear->link=temp;
	a->rear=a->rear->link;
}
int delque(QUEUE*a)
{
	NODE*temp;
	int item;
	if(a->front==NULL)
	{
		printf("\n nothing to delet");
		return 0;
	}
	item=a->front->data;
	temp=a->front;
	a->front=a->front->link;
	free (temp);
	return item;
}
void count(QUEUE*a)
{
	NODE *temp=a->front;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		temp=temp->link;
	}
	printf("\n elemet=%d",c);
}
/*void display(QUEUE*a)
{
	NODE *temp,*ptr;
	temp=a->front;
	ptr=a->rear->link;
	while(temp!=ptr)
	{
		printf("\n%d",temp->data);
		temp=temp->link;
	}
}*/

void display(QUEUE*q)
{
NODE *temp=q->front;
while(temp!=NULL)
{
	printf("\n\t%d",temp->data);
	temp=temp->link;
}
}
