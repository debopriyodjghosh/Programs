#include<stdio.h>
#include<malloc.h>
#include<ctype.h>
 struct node{
		      int data;
		      struct node *link;
	             };
 create(struct node *y,int n)
 {
	struct node *temp;
	int i;
	for(i=1;i<=n;i++)
	{
		if(i!=1)
		{
			y=malloc(sizeof(struct node));
			temp->link=y;
		}
		printf("\n Enter the data for node%2d : ",i);
		scanf("%d",&(y->data));
		temp=y;
	}
	y->link=NULL;
	return;
 }

 display(struct node *y,int n)
 {
	int i;
	for(i=1;i<=n;i++)
	{
		printf(" %2d->",y->data);
		y=y->link;
	}
	printf("NULL...");
	return;
 }

 insert(struct node **yy,int *n,int k)
 {
	struct node *y,*temp;
	int i;
	y=*yy;
	temp=malloc(sizeof(struct node));
	printf("\n Enter the data for new node : ");
	scanf("%d",&temp->data);
	if(k<=0)
	{
		temp->link=y;
		*yy=temp;
	}
	else
	{
		if(k>*n)k=*n;
		for(i=2;i<=k;i++)
			y=y->link;
		temp->link=y->link;
		y->link=temp;
	}
	*n=*n+1;
	return;
 }

 deleting(struct node **yy,int *n,int k)
 {
	struct node *temp,*y;
	int i;
	y=*yy;
	if(k<=1)
		*yy=y->link;
	else
	{
		if(k>*n)k=*n;
		for(i=2;i<=k;i++)
		{
			temp=y;
			y=y->link;
		}
		temp->link=y->link;
	}
	*n=*n-1;
	return;
 }

 void main()
 {
	struct node *p;
	int n=0,i,k;
	char ana='Y';
	//clrscr();
//	textcolor(10);
	//cprintf("S");
//	clrscr();
	while(ana!='N')
	{
		printf("\n\n 1.Create\t 2.Display\n 3.Insert\t 4.Delete");
		printf("\n Enter your choice : ");
		scanf("%d",&i);
		switch(i)
		{
			case 1:
				printf("\n How many nodes : ");
				scanf("%d",&n);
				if(n>0)
					p=malloc(sizeof(struct node));
					create(p,n);
			break;
			case 2:
				if(n<=0)
				{
				        printf("\n You Have to Create the node 1st...");
				        break;
				}
				display(p,n);
			break;
			case 3:
				if(n<=0)
				{
				        printf("\n You Have to Create the node 1st...");
				        break;
				}
				printf("Enter the node to be inserted : ");
				scanf("%d",&k);
				insert(&p,&n,k);
			break;
			case 4:
				if(n<=0)
				{
				        printf("\n You Have to Create the node 1st...");
				        break;
				}
				printf("Enter the node to be deleted : ");
				scanf("%d",&k);
				deleting(&p,&n,k);
			break;
			default:
				//clrscr();
				main();
			break;
		}
		printf("\nDo you wana More ?(y/n): ");
		ana=getche();
		ana=toupper(ana);
	}
}


