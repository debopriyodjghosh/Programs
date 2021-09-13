#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct node
{
  int data;
  struct node *prev;
  struct node *next;
};
typedef struct node node;

node* ins(node *f)
{
   int i,p;
	node *cur,*c;
	cur=(node*) malloc(sizeof(node));

	printf("\n data=");
	scanf("%d",&cur->data);
	if(f==NULL)
	{
	 f=cur;
	 cur->next=cur;
	 cur->prev=cur;
	 return f;
	}
	printf("\n pos=");
	scanf("%d",&p);
	if(p==1)
	{
	  f->prev->next=cur;
	  cur->prev=f->prev;
	  cur->next=f;
	  f->prev=cur;
	  f=cur;
	  return f;
	}
	i=0;
	for(c=f;;c=c->next)
	{
		i++;
		if(i==p-1)
		{
		  cur->next=c->next;
		  cur->prev=c;
		  c->next=cur;
		  cur->next->prev=cur;
		  break;
		}
	}
	return f;
}

node* del(node *f)
{
	int p,i;
	node *c,*t;
	if(f==NULL)
	{
	 printf("\n empty");
	 return f;
	}
	if(f->next==f)
	{
		free(f);
		f=NULL;
		return f;
	}
	printf("\n pos=");
	scanf("%d",&p);
	if(p==1)
	{
	  t=f;
	  f->prev->next=f->next;
	  f->next->prev=f->prev;
	  f=f->next;
	  free(t);
	  return f;
	}
	i=0;
	for(c=f;;c=c->next)
	{
		i++;
		if(i==p-1)
		{
		  t=c->next;
		  c->next=t->next;
		  c->next->prev=c;
		  free(t);
		  break;
		}
	}
	return f;
}

void list(node *f)
{
  node *c;
  for(c=f;c->next!=f;c=c->next)
  {
		printf("%5d",c->data);
  }
  printf("%5d\n",c->data);
  for(;c->prev!=f->prev;c=c->prev)
  {
	 printf("%5d",c->data);
  }
  printf("%5d\n",c->data);
}

 main()
{
	node *f=NULL;
	int v;
	do
	{
		printf("\n 1. ins ");
		printf("\n 2. del");
		printf("\n 3. exit");
		printf("\n Enter your choice ?");
		scanf("%d",&v);
		switch(v)
		{
			case 1:
			 f=ins(f);
			 list(f);
			 break;
			case 2:
			 f=del(f);
			 if(f!=NULL)
				list(f);
			 break;
		}
	}while(v!=3);
}




