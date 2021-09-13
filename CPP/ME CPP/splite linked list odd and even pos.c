#include<stdio.h>
#include<stdlib.h>

struct node
{
int data;
struct node *next;
};

typedef struct node node;


node *insend(int d,node *first)
{
node *cur,*c;
cur=(node *)malloc(sizeof(node));
cur->data=d;
cur->next=NULL;
if(first==NULL)
{
first=cur;
return first;
}
c=first;
while(c->next!=NULL)
{
c=c->next;
}
c->next=cur;
return first;
}



void list(node *first)
{
node *c;
printf("\n");
for(c=first;c!=NULL;c=c->next)
{
printf("%5d",c->data);
}
}



void splite(node *first)
{
node *c,*f1=NULL,*f2=NULL;
for(c=first;c!=NULL;c=c->next)
{
if((c->data)%2==1)
{
  f1=insend(c->data,f1);
}
else
{
  f2=insend(c->data,f2);
}
}
printf("\n odd list:\n");
list(f1);
printf("\n");
printf("\n even list:\n");
list(f2);
}


int main()
{
int z,x;
node *start=NULL;
do
{
printf("\n 1. insert node");
printf("\n 2. list");
printf("\n 3. splite node(odd position)");
printf("\n 4. exit");
printf("\n enter your choice:? ");
scanf("%d",&z);
switch(z)
{
case 1:
printf("\n data: ");
scanf("%d",&x);
start=insend(x,start);
list(start);
break;
case 2:
list(start);
break;
case 3:
splite(start);
break;
}
}
while(z!=4);
return 0;
}
