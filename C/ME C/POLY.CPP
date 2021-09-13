
 /* polynomial addition and multiplication

f1-> 3x^4 + 2x^2 + 3x^0
f2-> 2x^3 + 4x^2 + 5x^1 + 4x^0
f3-> 3x^4 + 2x^3+6x^2 + 5x^1 + 7x^0

*/

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node
{
 int coef;
 int pw;
 struct node *next;
};

typedef struct node node;

node* ins(node *f,int c,int p)
{
 int i;
 node *cur,*x;
 cur=(node *)malloc(sizeof(node));
 cur->coef=c;
 cur->pw=p;
 cur->next=NULL;
 if(f==NULL)
 {
	f=cur;
	return f;
 }
 x=f;
 while(x->next!=NULL)
 {
     x=x->next;
 }
 x->next=cur;
 return f;
}

void list(node *f)
{
 node *c;
 printf("\neq = ");
 for(c=f;c!=NULL;c=c->next)
 {
  printf("%dX^%d+",c->coef,c->pw);
 }
}

node* polyadd(node *f1,node *f2)
{
	node *f3=NULL;
	while(f1!=NULL && f2!=NULL)
	{
	if(f1->pw==f2->pw)
	{
		f3=ins(f3,f1->coef+f2->coef,f1->pw);
		f1=f1->next;
		f2=f2->next;
	}
	else if(f1->pw>f2->pw)
	{
	  f3=ins(f3,f1->coef,f1->pw);
	  f1=f1->next;
	}
	else
	{
	  f3=ins(f3,f2->coef,f2->pw);
	  f2=f2->next;
	}
	}
	  while(f1!=NULL)
	  {
		 f3=ins(f3,f1->coef,f1->pw);
		 f1=f1->next;
	  }
	  while(f2!=NULL)
	  {
		 f3=ins(f3,f2->coef,f2->pw);
		 f2=f2->next;
	  }
	 return f3;
}
/******************************************/
node* mul(node *f,node *p)
{
	node *i,*j;
	node *s=NULL;
	for(i=f;i!=NULL;i=i->next)
	{
		s=ins(s,(p->coef*i->coef),(p->pw+i->pw));
	}
	return s;
}
/****************************/

 main()
{
  int n1,n2,n3,k,c,p;

  node *i,*j;
  node *f1=NULL,*f2=NULL,*f3=NULL,*f4;

  printf("\n enter no. of nodes of 1st list :");
  scanf("%d",&n1);

  for(k=1;k<=n1;k++)
  {
	printf("\n coef & pow : ");
	scanf("%d%d",&c,&p);
	f1=ins(f1,c,p);
  }

  printf("\n enter no. of nodes of 2nd list :");
  scanf("%d",&n2);
  for(k=1;k<=n2;k++)
  {
	printf("\n coef & pow : ");
	scanf("%d%d",&c,&p);
	f2=ins(f2,c,p);
  }

  list(f1);
  list(f2);
  //f3=polyadd(f1,f2);


	j=f2;
	for(i=f1;i!=NULL;i=i->next)
	{
	  f4=mul(j,i);
	  f3=polyadd(f3,f4);
	}

	list(f3);


  getch();
 }
