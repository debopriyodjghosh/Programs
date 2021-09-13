/* 		         surya rules			*/

/*		    sorting a linked list		*/
/*			changing values			*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"


struct node
{
	int data;
	struct node *next;
};

add(struct node **sr,int val)
{
	struct node *temp,*new1;
	temp=*sr;
	new1=(struct node *)malloc(sizeof(struct node));
	new1->data=val;
	new1->next=NULL;

	if(*sr==NULL)     	/* when first node is added */
	{
		*sr=new1;
		(*sr)->next=temp;
	}

	else                                /* travelling to the end of the list otherwise */
	{
		while(temp->next!=NULL)
			temp=temp->next;
	}

	temp->next=new1;
}

void display(struct node *sr)
{
	while(sr!=NULL)
	{
		printf("%5d",sr->data);
		sr=sr->next;
	}
}


int count(struct node *sr)
{
	int c=0;
	while(sr!=NULL)
	{
		c++;
		sr=sr->next;
	}
	return c;
}


bubble_sort(struct node **sr,int num)
{
	int i,j,temp,flag=0;
	struct node *temp_1,*temp_2;

	for(i=0;i<num && flag==0;i++)
	{
		flag=1;
		temp_1=*sr;
		temp_2=temp_1->next;

		for(j=0;j<num-i-1;j++)
		{
			if(temp_1->data > temp_2->data)
			{
				flag=0;
				temp=temp_1->data;
				temp_1->data=temp_2->data;
				temp_2->data=temp;
			}
			temp_1=temp_1->next;
			temp_2=temp_2->next;
		}
	}

}






void main()
{
	struct node *head;
	int num;
	head= NULL;
	add(&head,77);
	add(&head,22);
	add(&head,44);
	add(&head,66);
	add(&head,99);
	add(&head,88);

	num=count(head);
	clrscr();
	printf("\n original linked list:  ");
	display(head);
	printf("\n number of nodes= %d",num);


	bubble_sort(&head,num);
	printf("\n\n linked list after selection sort: ");
	display(head);
	printf("\n number of nodes= %d",num);

	getch();

}