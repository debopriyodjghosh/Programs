#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#define NULL 0
	struct node2;
	struct node1
		{
			char vertex;
			struct node1 *next;
			struct node2 *adjacent;
		};
	struct node2
		{
			struct node1  *address1;
			struct node2  *address2;
		};
void createlist1(struct node1 **h, char x);
void createlist2(struct node1 **h,struct node1 **ptr,char y);
void displayadjclist(struct node1 **h);
void main()
	{
		struct node1 *head,*ptr;
		char x,y;
		clrscr();
		head=NULL;
		printf("\n \n Enter Vertex (press <enter> for stop)");
		fflush(stdin);
		scanf("%c",&x);
		while(x!='\n')
		{
			createlist1(&head,x);
			printf("\n \n Enter Vertex(press <enter> for Stop)");
			fflush(stdin);
			scanf("%c",&x);
		}
		ptr=head;
		while(ptr!=NULL)
		{
			printf("\n Enter Adjacent Vertices of %c <enter> for stop):",ptr->vertex);
			fflush(stdin);
			scanf("%c",&y);
			while(y!='\n')
			{
				createlist2(&head,&ptr,y);
				printf("\n Enter Adjacent Vertices of %c <enter> for stop):",ptr->vertex);
				fflush(stdin);
				scanf("%c",&y);
			}
			ptr=ptr->next;
		}
		displayadjclist(&head);
		getch();
	}


void createlist1(struct node1 **h,char x)
	{
		struct node1 *new1,*ptr;
		new1=(struct node1*)malloc(sizeof(struct node1));
		new1->vertex=x;
		new1->next = NULL;
		new1->adjacent=NULL;
		if(*h==NULL)
			*h=new1;
		else
		       {
			ptr=*h;
			while(ptr->next != NULL)
			     ptr=ptr->next;
			ptr->next=new1;
		       }
	 }



void createlist2(struct node1 **h,struct node1 **ptr,char y)
{
	struct node2 *new1,*check1;
	struct node1 *ptr1,*check;
	ptr1=*h;
	check=*ptr;
	while(y != ptr1->vertex)
		ptr1=ptr1->next;
	new1=(struct node2*)malloc(sizeof(struct node2));
	new1->address1=ptr1;
	new1->address2=NULL;

	if(check->adjacent==NULL)
		check->adjacent=new1;
	else
	{
		check1=check->adjacent;
		while(check1->address2!=NULL)
			check1=check1->address2;
		check1->address2=new1;
	}
   }

void displayadjclist(struct node1 **h)
{
	struct node1 *ptr;
	struct node2 *ptr1;
	ptr=*h;
	printf("\n \n The Adjacency list is \n \n");
	while(ptr!=NULL)
	{
		printf("\n \t %c : ",ptr->vertex);
		ptr1=ptr->adjacent;
		while(ptr1!=NULL)
		{
			printf("%c  ",ptr1->address1->vertex);
			ptr1=ptr1->address2;
		}
	ptr=ptr->next;
	}
}




























