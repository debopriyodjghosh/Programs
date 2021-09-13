//QUEUE USING ARRAY
#include<stdio.h>
#define MAX 15
typedef struct queue
{
	int front,rear;
	int a[MAX];
}QUEUE;
void createqueue(QUEUE*);
void inqueue(QUEUE*,int);
int delqueue(QUEUE*);
//void delque(QUEUE*);
void count(QUEUE*);
void display(QUEUE*);
void main()
{
	QUEUE q;
	int i;

	createqueue(&q);

	inqueue(&q,526);
	inqueue(&q,120);
	inqueue(&q,987);
	inqueue(&q,124);
	inqueue(&q,77);
	inqueue(&q,54);
	inqueue(&q,453);
	inqueue(&q,123);
	inqueue(&q,1011);
	inqueue(&q,1236);

	count(&q);
	display(&q);

	i=delqueue(&q);
	printf("\nITEM DELETED:-%d",i);
	i=delqueue(&q);
	printf("\nITEM DELETED:-%d",i);
	i=delqueue(&q);
	printf("\nITEM DELETED:-%d",i);
	i=delqueue(&q);
	printf("\nITEM DELETED:-%d",i);
	i=delqueue(&q);
	printf("\nITEM DELETED:-%d",i);

	count(&q);
	display(&q);

	inqueue(&q,26);
	inqueue(&q,10);
	inqueue(&q,87);
	inqueue(&q,12);
	inqueue(&q,7);
	inqueue(&q,5);
	inqueue(&q,53);
	inqueue(&q,23);
	inqueue(&q,11);
	inqueue(&q,136);

	count(&q);
	display(&q);
}

void createqueue(QUEUE*q)
{
	q->front=(-1);
	q->rear=(-1);
}
void inqueue(QUEUE*q,int item)
{
	int i;
	if(q->front==-1)
	{
		q->front=q->rear=0;
	}
	else if(q->rear==(MAX-1))
	{
		for(i=q->front;i<=q->rear;i++)
				q->a[i-(q->front)]=q->a[i];
			q->rear=q->rear-q->front+1;
			q->front=0;
	}
	else
	{
		q->rear++;
	}
	q->a[q->rear]=item;
}
int delqueue(QUEUE*q)
{
	int temp;
	temp=q->a[q->front];
	if(q->front==-1)
	{
		printf("\nNOTHING TO DELET");
		return 0;
	}
	else if(q->front==q->rear)
	{
		q->front=-1;
		q->rear=-1;
	}
	else
	{
		q->front++;
	}
	return temp;
}
void count(QUEUE*q)
{
	int i=0,j=0,k;
	i=q->rear;
	j=q->front;
	k=(i-j);
	printf("\nNUMBER OF ELEMENTS:-%d",k);
}
void display(QUEUE*q)
{
	int i=0;
	i=q->front;
	while(i<=q->rear)
	{
		printf("\n q->a[%d]=%d",i,q->a[i]);
		i++;
	}
}




