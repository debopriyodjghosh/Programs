//LINEAR LINKED LIST
//Sunday, September 22, 2013
#include<stdio.h>
#include<alloc.h>
//#include<conio.h>
typedef struct node
{
	int data;
	struct node *link;
}NODE;
void addend(NODE**,int);
void addbeg(NODE**,int);
void addafter(NODE**,int,int);
//void addspec(NODE**,int);
//void delet(NODE**,int);
void reverse(NODE**);
void sort(NODE**);
void count(NODE**);
void display(NODE**);
//void min(NODE**);
//void max(NODE**);
void main()
{
	NODE *p=NULL;
	addend(&p,3);
	addend(&p,4);
	addend(&p,1);
	addend(&p,2);
	count(&p);
	display(&p);
	addbeg(&p,5);
	addbeg(&p,9);
	addbeg(&p,8);
	addbeg(&p,10);
	addbeg(&p,7);
	addbeg(&p,6);
	count(&p);
	display(&p);
	addafter(&p,2,14);
	addafter(&p,5,45);
	addafter(&p,7,33);
	addafter(&p,3,58);
	count(&p);
	display(&p);
	//min(&p);
	//max(&p);
	/*delet(&p,58);
	delet(&p,9);
	delet(&p,11);
	count(&p);
	display(&p);*/
	reverse(&p);
	count(&p);
	display(&p);
	sort(&p);
	count(&p);
	display(&p);
}
/*void min(NODE**q)
	{
		NODE *temp;
		int i,t;
		temp=*q;
		i=temp->data;
		while(temp!=NULL)
		{
			if(i>=temp->data)
			{
				t=i;
				i=temp->data;
				temp->data=t;
			}
			temp=temp->link;
		}
		printf("\nTHE MINIMUM ELIMENT IS=%d",i);
	}
void max(NODE**q)
	{
		NODE *temp;
		int i,t;
		temp=*q;
		i=temp->data;
		while(temp!=NULL)
		{
			if(i<=temp->data)
			{
				t=i;
				i=temp->data;
				temp->data=t;
			}
			temp=temp->link;
		}
		printf("\nTHE MaxiMUM ELIMENT IS=%d",i);
	}*/


void addend(NODE**q,int item)
{
	NODE *temp,*r;
	if(*q==NULL)
	{
		temp=(NODE*)malloc(sizeof(NODE));
		temp->data=item;
		temp->link=NULL;
		*q=temp;
	}
	else
	{
		temp=*q;
		while(temp->link!=NULL)
			temp=temp->link;
		r=(NODE*)malloc(sizeof(NODE));
		r->data=item;
		r->link=NULL;
		temp->link=r;
	}
}
void addbeg(NODE**q,int item)
{
	NODE*temp;
	temp=(NODE*)malloc(sizeof(NODE));
	temp->data=item;
	temp->link=*q;
	*q=temp;
}
void addafter(NODE**q,int pos,int item)
{
	NODE *temp,*r;
	int i;
	temp=*q;

	for(i=1;i<pos;i++)
	{
		if(temp==NULL)
		{
			printf("\n INVALID POSITION");
			return;
		}
		temp=temp->link;
	}
	r=(NODE*)malloc(sizeof(NODE));
	r->data=item;
	r->link=temp->link;
	temp->link=r;
}
/*void delet(NODE**q,int item)
{
	NODE *temp,*r;
	temp=r=*q;
	while(temp!=NULL)
	{
		if(temp->data==item)
		{
			if(temp==*q)
				(*q)=(*q)->link;
			else
				r->link=temp->link;
			free(temp);
			return;
		}
		else
		{
			r=temp;
			temp=temp->link;
		}
	}
	printf("\n ITEM NOT FOUND=%d",item);
} */
void reverse(NODE**x)
{
	NODE *q,*r,*s;
	q=*x;
	r=NULL;
	while(q!=NULL)
	{
		s=r;
		r=q;
		q=q->link;
		r->link=s;
	}
	*x=r;

}
void sort(NODE**q)
{
	NODE *r,*t;
	int i,j,k;
	r=*q;
	t=r->link;
	if(r==NULL)
		{
			printf("\n THE LIST IS EMPTY....\n");
			return;
		}
	else
		{
			while(r!=NULL)
				{
					j=r->data;
					while(t!=NULL)
						{
							k=t->data;
							if(j<=k)
								{
									i=r->data;
									r->data=t->data;
									t->data=i;
									j=i;
									t=t->link;

								}
							else
								t=t->link;
						}
					r=r->link;
					t=*q;
				}
		}
}

void display(NODE**q)
{
	NODE *temp;
	temp=*q;
	printf("\n ELEMENTS ARE=");
	while(temp!=NULL)
	{
		printf("\t%d",temp->data);
		temp=temp->link;
	}
}
void count(NODE**q)
{
  NODE *temp;
	int a=0;
  temp=*q;
	while(temp!=NULL)
	{
		a++;
		temp=temp->link;
	}
	printf("\n NUMBER OF NODES=%d",a);
}



