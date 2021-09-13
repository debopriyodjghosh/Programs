#include<stdio.h>
#include<malloc.h>
#include<process.h>
void input();
void difference();

struct node* getnode(int,int,int);
struct node
{
	int x;
	int co;
	int y;
	struct node *next;
}*head1,*head2,*head3;

void display(struct node *p);
void main()
{
	input();
	printf("\nThe first polynomial is:");
	
	display(head1);
	printf("\nThe second polynomial  is:");
	display(head2);
	difference();
}

void input()
{
	int ch,x1,co1,y1;
	struct node *p,*m;
	printf("\nEnter the coefficient of the first node of the first poly:");
	scanf("%d",&co1);
	printf("\Enter the power of x of the first node of the first poly:");
	scanf("%d",&x1);
	printf("\nEnter the power of y of the first node of the first poly:");
	scanf("%d",&y1);
	p=getnode(co1,x1,y1);
	if(head1==NULL)
	head1=p;
	else m->next=p;
	m=p;
	printf("\nDo you want to add more nodes?(1/0)");
	scanf("%d",&ch);
	while(ch!=0)
	{
		
	printf("\nEnter the coefficient of the next node of the first poly:");
	scanf("%d",&co1);
	printf("\Enter the power of x of the next node of the first poly:");
	scanf("%d",&x1);
	printf("\nEnter the power of y of the next node of the first poly:");
	scanf("%d",&y1);
	p=getnode(co1,x1,y1);
	if(head1==NULL)
	head1=p;
	else m->next=p;
	m=p;	
	printf("\nDo you want to continue?(1/0)");
	scanf("%d",&ch);
	}
	
	printf("\nEnter the coefficient of the first node of the second poly:");
	scanf("%d",&co1);
	printf("\Enter the power of x of the first node of the second poly:");
	scanf("%d",&x1);
	printf("\nEnter the power of y of the first node of the second poly:");
	scanf("%d",&y1);
	p=getnode(co1,x1,y1);
	if(head2==NULL)
	head2=p;
	else m->next=p;
	m=p;
	printf("\nDo you want to add more nodes?");
	fflush(stdin);
	scanf("%d",&ch);
	while(ch!=0)
	{
		
	printf("\nEnter the coefficient of the next node of the second poly:");
	scanf("%d",&co1);
	printf("\Enter the power of x of the next node of the second poly:");
	scanf("%d",&x1);
	printf("\nEnter the power of y of the next node of the second poly:");
	scanf("%d",&y1);
	p=getnode(co1,x1,y1);
	if(head2==NULL)
	head2=p;
	else m->next=p;
	m=p;	
	printf("\nDo you want to continue?");
	scanf("%d",&ch);
	}
	
}

struct node* getnode(int co1,int x1,int y1 )
{
	struct node *p;
	p=(struct node*)malloc(sizeof(struct node));
	p->x=x1;
	p->y=y1;
	p->co=co1;
	p->next=NULL;
	return p;
}
void display(struct node *p)
{
	
	printf("\n");
	while(p!=NULL)
	{
		
		printf("%dx^%dy^%d",p->co,p->x,p->y);
		if(p->next!=NULL&&p->next->co>=0)
		{
			printf(" +");
			
		}
		
		
		p=p->next;
	}
}
void difference()
{
	int ch,flag;
	struct node *p,*q,*r,*m;
	printf("\nEnter 1 to subtract 2nd polynomial from 1st polynomial.");
	printf("\nEnter 2  to subtract 1st polynomial frrom 2nd polynomial");
	scanf("%d",&ch);
	if(ch==2)
	{
		p=head1;
		head1=head2;
		head2=p;
	}
	else if(ch!=1)
	{
		printf("\nInvalid option");
		exit(1);
	}
	
	p=head1;
	while(p!=NULL)
	{
			q=head2;
			flag=0;
			while(q!=NULL)
			{
				if((q->x==p->x)&&(q->y==p->y))
				{
					flag=1;
					m=getnode(p->co-q->co,p->x,p->y);
					if(head3==NULL)
					head3=m;
					else
					r->next=m;
					r=m;
					break;
				}
				q=q->next;
			}
			if(flag==0)
			{
			m=getnode(p->co,p->x,p->y);
					if(head3==NULL)
					head3=m;
					else
					r->next=m;
					r=m;	
			}
			p=p->next;
	}
	q=head2;
	
	while(q!=NULL)
	{
		r=head3;
		flag=0;
		while(r!=NULL)
		{
			if((r->x==q->x)&&(r->y==q->y))
			{
				flag=1;
				break;
		    }
		r=r->next;
	    }
		if(flag==0)
		{
				p=head3;
			while(p->next!=NULL)
			p=p->next;	
			m=getnode(0-q->co,q->x,q->y);
			p->next=m;
			
		    }
		    
		
		q=q->next;
	}
	
	printf("\nThe resultant polynomial after subtraction is:\n");
	display(head3);
	
}
