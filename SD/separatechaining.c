#include<stdio.h>
#include<conio.h>
#include<alloc.h>
typedef struct node
	{
		int info;
		struct node *link;
	}NODE;
void insert(NODE*,int);
void search(NODE*,int);
void delet(NODE*,int);
void display(NODE*);
int h(int);
void main()
	{
		NODE *array[10];
		int i,choice;
		for(i=0;i<10;i++)
			array[i]=NULL;
		do
			{
				clrscr();
				printf("\n a: CHOOSE 1 FOR INSERT");
				printf("\n b: CHOOSE 2 FOR SEARCH");
				printf("\n c: CHOOSE 3 FOR DELETE");
				printf("\n d: CHOOSE 4 FOR EXIT");
				printf("\n ENTER YOUR CHOICE:-\t");
				scanf("%d",&choice);
				if(choice<1 || choice>4)
					{
						printf("\n INVALID CHOICE");
						continue;
					}
				switch(choice)
					{
						case 1:printf("\nENTER ITEM TO INSERT=\t");
								 scanf("%d",&i);
								 insert(*array,i);
								 break;
						case 2:printf("\nENTER ITEM TO SEARCH=\t");
								 scanf("%d",&i);
								 search(*array,i);
								 break;
						case 3:printf("\nENTER ITEM TO DELETE=\t");
								 scanf("%d",&i);
								 delet(*array,i);
								 break;
						case 4:printf("\n PROGRAM ENDS..........");
								 break;
					}
					display(*array);
			}while(choice!=4);
	}
void insert(NODE *t[],int x)
	{
		NODE *ptr;
		int i;
		i=h(x);
		ptr=(NODE*)malloc(sizeof(NODE));
		ptr->info=x;
		ptr->link=t[i];
		t[i]=ptr;
	}
void search(NODE *t[],int x)
	{
		NODE *ptr;
		int i;
		i=h(x);
		ptr=t[i];
		while((ptr!=NULL)&&(ptr->info!=NULL))
			ptr=ptr->link;
		if(ptr->info==x)
			{
				printf("\n %d ITEM PRESENT AT SLOAT %d",x,i);
				return;
			}
		else
				printf("\n %d IS NOT PRESENT IN THE SLOAT %d",x,i);
	}
void delet(NODE *t[],int x)
	{
		NODE *ptr1,*ptr2;
		int i,j;
		i=h(x);
		ptr1=NULL;
		ptr2=t[i];
		while((ptr2!=NULL)&&(ptr2->info!=x))
			{
				ptr1=ptr2;
				ptr2=ptr2->link;
			}
		if(ptr2==NULL)
			{
				printf("\n ELIMENT %d NOT FOUND IN THE TABLE");
				return;
			}
		else
			{
				printf("\n ELIMENT %d FOUND IN THE TABLE AT SLOAT %d",ptr2->info,i);
				ptr1->link=ptr2->link;
				free (ptr2);
			}
	}
int h(int x)
	{
		int i;
		i=x%9;
		return i;
	}

