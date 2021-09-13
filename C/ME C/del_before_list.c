#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node
{
	int data;
struct node *next;
}node;
node *getnode(int x)
	{
		node *p;
		p=(node *)malloc(sizeof(node));
		p->data=x;
		p->next=NULL;
	}
node *createlist(node *h)
{
	int x;
	char ch='y';
	node *p,*q;
	h=NULL;
	do
	{
		printf("enter the data");
		scanf("%d",&x);
		p=getnode(x);
		if(h==NULL)
		h=p;
		else
		q->next=p;
		q=p;
		printf("do u wanna continue(y/n)\n");
		fflush(stdin);
		scanf("%c",&ch);
	}while(ch=='y'||ch=='Y');
	return h;
}
node *delbefore(node *h)
{
	node *p,*q,*r;
	int x;
if(h==NULL)
{
	printf("list not exist");
	return;
	}	
	p=h;
	q=h;
printf("enter the elemnts to be deleted");
scanf("%d",&x);
p=q=h;
while(q->next!=NULL&&q->data!=x)
{
	p=q;
	q=q->next;
}
if(q->data!=x)
{
	printf("item not exist");
	return;
}
if(q==h)
{
	printf("item is in 1st position");
	return;
}
if(p==h)
{
	h=h->next;
	p->next=NULL;
}
else
{
r=h;
while(r->next!=p)
{
	r=r->next;
	}	
	r->next=q;
	p->next=NULL;
free(p);
return h;
}
}
void display(node *h)
{
	while(h!=NULL)
	{
		printf("%d",h->data);
		h=h->next;
	}
}
int main()
{
int item1;
	node *head=NULL;
	int ch;
		do{
			printf("\n1.create list\n 2.delete the nodeof ur choice\n 3.display forward\n 5 exit\n enter your choice");
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					head=createlist(head);
					break;
					case 2:
						head=delbefore(head);
						break;
						case 3:
						{
							printf("the elements are\n");
							display(head);
							break;
									}
									case 5:
									exit(0);
									default:
																					printf("wrong choice");		
			}
		}while(1);
		return(0);
}
