/* 		         surya rules			*/

/*		    circular linked list		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"ctype.h"
#include"process.h"

struct node
{
	int data;
	struct node *next;
};


struct node *getnode(int x)
{
	struct node *new1;
	new1=(struct node *)malloc(sizeof(struct node));
	new1->data=x;
	new1->next=NULL;
	return(new1);
}

struct node *head;

void display()
{
	struct node *ptr;
	ptr=head;

	clrscr();

	do
	{
		printf("%d  ",ptr->data);
		ptr=ptr->next;

	}while(ptr != head);

	getch();
}


void create_list()
{
	struct node *ptr,*new1;
	int x;
	ptr=head;
	printf("enter a value (-0 to stop): ");
	scanf("%d",&x);

	while(x != -0)
	{
		new1=getnode(x);



		if(head==NULL)
		{
			head=new1;
			new1->next=head;
		}
		else
		{
			ptr=head;
			while(ptr->next != head)
			{
				ptr=ptr->next;
			}
			ptr->next=new1;
			new1->next=head;
		}


		printf("enter a value (-0 to stop): ");
		scanf("%d",&x);
	}



}



void insert_at_beg()
{
	int x;
	struct node *new1,*ptr;
	if(head==NULL)
	{
		create_list();
	}
	printf("enter a value (-0 to stop): ");
	scanf("%d",&x);

	while(x != -0)
	{
		new1=getnode(x);
		new1->next=head;
		ptr=head;

		while(ptr->next != head)
		{
			ptr=ptr->next;
		}
		head=new1;
		ptr->next=new1;

		printf("enter a value (-0 to stop): ");
		scanf("%d",&x);

	}

	display();
}



void insert_at_end()
{
	create_list();
	display();
}

void insert_at_mid()
{
	struct node *new1,*ptr;
	int x,pos;

	if(head == NULL)
		create_list();

	printf("enter a value (-0 to stop): ");
	scanf("%d",&x);

	printf("enter the element after which u want to enter: ");
	scanf("%d",&pos);

	while(x != -0)
	{
		new1=getnode(x);
		ptr=head;

		while(ptr->next != head && ptr->data != pos)
			ptr=ptr->next;

		new1->next=ptr->next;
		ptr->next=new1;


	printf("enter a value (-0 to stop): ");
	scanf("%d",&x);

	printf("enter the element after which u want to enter: ");
	scanf("%d",&pos);
	}



	display();
}

void del_at_beg()
{
	struct node *ptr1,*ptr2;
	ptr1=ptr2=head;

	while(ptr1->next != head)
	{
		ptr1=ptr1->next;
	}

	head=head->next;
	ptr1->next=head;

	free(ptr2);

	display();
}

void del_at_end()
{
	struct node *ptr1,*ptr2;
	ptr1=ptr2=head;
	while(ptr1->next != head)
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
	}

	ptr2->next=head;
	free(ptr1);

	display();
}
void del_at_mid()
{
	struct node *ptr1,*ptr2;
	int item;
	ptr1=ptr2=head;
	printf("enter the element u want to delete: ");
	scanf("%d",&item);

	while(ptr1->next != head && ptr1->data != item)
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
	}
	ptr2->next=ptr1->next;
	free(ptr1);

	display();
}







void main()
{
	clrscr();
	int ch;


	do
	{

		clrscr();
		printf("				circular linked list");

		printf("\n\n\n\n\n");

		printf("1.create list\n");
		printf("2.insert at beg\n");
		printf("3.insert at mid\n");
		printf("4.insert at end\n");
		printf("5.delete from beg\n");
		printf("6.delete from mid\n");
		printf("7.delete from at end\n");
		printf("8.bye\n");

		printf("enter ur choice................");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
				create_list();
				display();
				break;
			case 2:
				insert_at_beg();
				break;
			case 3:
				insert_at_mid();
				break;
			case 4:
				insert_at_end();
				break;
			case 5:
				del_at_beg();
				break;
			case 6:
				del_at_mid();
				break;
			case 7:
				del_at_end();
				break;
			case 8:
				exit(0);
		}


	}while(1);



}


