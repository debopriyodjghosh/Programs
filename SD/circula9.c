#include<stdio.h>
#include<conio.h>
#include<malloc.h>
int create_list(int);
int addatbeg(int);
int addafter(int,int);
int del(int);
int display();
struct node
{
	int info;
	struct node *link;
}*last;

main()
{
	int choice,n,m,po,i,m1,m2,m3;
	last=NULL;
	while(1)
	{
		printf("1.Create List\n");
		printf("2.Add at begining\n");
		printf("3.Add after \n");
		printf("4.Delete\n");
		printf("5.Display\n");
		printf("6.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);

		switch(choice)
		{
		 case 1:
			printf("How many nodes you want : ");
			scanf("%d",&n);
			for(i=0; i < n;i++)
			{
				printf("Enter the element : ");
				scanf("%d",&m);
				create_list(m);
			}

			break;
		 case 2:
			printf("Enter the element : ");
			scanf("%d",&m1);
			addatbeg(m1);
			break;
		 case 3:
			printf("Enter the element : ");
			scanf("%d",&m2);
			printf("Enter the position after which this element is inserted : ");
			scanf("%d",&po);
			addafter(m2,po);
			break;
		 case 4:
			if(last == NULL)
			{
				printf("List underflow\n");
				continue;
			}
			printf("Enter the number for deletion : ");
			scanf("%d",&m3);
			del(m3);
			break;
		 case 5:
			display();
			break;
		 case 6:

			return(0);
			getch();

			break;
					 default:
			printf("Wrong choice\n");
		}/*End of switch*/
	}/*End of while*/
}/*End of main()*/

int create_list(int num)
{
	struct node *tmp;
	tmp=(struct node*)malloc(sizeof(struct node));
	tmp->info = num;

	if(last == NULL)
	{
		last = tmp;
		tmp->link = last;
	}
	else
	{
		tmp->link = last->link; /*added at the end of list*/
		last->link = tmp;
		last = tmp;
	}
	return(0);
	}
	/*End of create_list()*/

int addatbeg(int num)
{
	struct node *tmp;
	tmp =(struct node*)malloc(sizeof(struct node));
	tmp->info = num;
	tmp->link = last->link;
	last->link = tmp;
	return(0);
		}/*End of addatbeg()*/

int addafter(int num,int pos)
{

	struct node *tmp,*q;
	int i;
	q = last->link;
	for(i=0; i < pos-1; i++)
	{
		q = q->link;
		if(q == last->link)
		{
			printf("There are less than %d elements\n",pos);
			return(0);
		}
	}/*End of for*/
	tmp =(struct node*)malloc(sizeof(struct node) );
	tmp->link = q->link;
	tmp->info = num;
	q->link = tmp;
	if(q==last)    /*Element inserted at the end*/
		last=tmp;
		return(0);
		}/*End of addafter()*/

int del(int num)
{
	struct node *tmp,*q;
	if( last->link == last && last->info == num)  /*Only one element*/
	{
		tmp = last;
		last = NULL;
		free(tmp);
		return(0);
	}
	q = last->link;
	if(q->info == num)
	{
		tmp = q;
		last->link = q->link;
		free(tmp);
		return(0);
	}
	while(q->link != last)
	{
		if(q->link->info == num)     /*Element deleted in between*/
		{
			tmp = q->link;
			q->link = tmp->link;
			free(tmp);
			printf("%d deleted\n",num);
			return(0);
		}
		q = q->link;
	}/*End of while*/
	if(q->link->info == num)    /*Last element deleted q->link=last*/
	{
		tmp = q->link;
		q->link = last->link;
		free(tmp);
		last = q;

	}
	printf("Element %d not found\n",num);
	return(0);
	}/*End of del()*/
int display()
{
	struct node *q;
	if(last == NULL)
	{
		printf("List is empty\n");
		return(0);
	}
	q = last->link;
	printf("List is :\n");
	while(q != last)
	{
		printf("%d ", q->info);
		q = q->link;
	}
	printf("%d\n",last->info);
	return(0);
}/*End of display()*/
