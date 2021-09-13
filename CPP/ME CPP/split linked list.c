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
cur=(node*)malloc(sizeof(node));
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


void dec_sort(node *first)
{
node *i,*j;
int t;
printf("\n sorted (decending order)linked list is:\n");
for(i=first;i->next!=NULL;i=i->next)
{
for(j=i->next;j!=NULL;j=j->next)
{
if(i->data < j->data)
{
t=i->data;
i->data=j->data;
j->data=t;
}
}
}
}



void split(node *first)
{
node *c,*f1=NULL,*f2=NULL;
int p,k;
printf("\n enter position: ");
scanf("%d",&p);
k=0;
for(c=first;c!=NULL;c=c->next)
{
k++;
if(k<=p)
{
  f1=insend(c->data,f1);
}
else
{
  f2=insend(c->data,f2);
}
}
list(f1);
list(f2);
}




int main()
{
int v,g;
node *start=NULL;
do
{
printf("\n 1.insend");
printf("\n 2.list");
printf("\n 3.sorting");
printf("\n 4.split linked list");
printf("\n 5.exit");
printf("\n enter your choice ?:");
scanf("%d",&v);
switch(v)
{
case 1:
printf("\n data : ");
scanf("%d",&g);
start=insend(g,start);
list(start);
break;

case 2:
list(start);
break;
case 3:
dec_sort(start);
list(start);
break;
case 4:
split(start);
break;
}
}
while(v!=5);
return 0;
}
