#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node;


void list(node *f)
{
node *c;
int i=0;
for(c=f;c!=NULL;c=c->next)
{
printf("%5d",c->data);
i++;
}
printf("\n count nodes=%d",i);
}

node *insend(node *f)
{
 node *c,*cur;
 cur=(node *)malloc(sizeof(node));
 printf("\n data: ");
 scanf("%d",&cur->data);
 cur->next=NULL;
 if(f==NULL)
 {
  f=cur;
  return f;
 }
 c=f;
 while(c->next!=NULL)
 {
  c=c->next;
 }
 c->next=cur;
 return f;
}

node *del(node *f)
{
int p;
node *c,*t;
if(f==NULL)
{
printf("\n list is empty");
return f;
}
printf("\n position: ");
scanf("%d",&p);
if(p==1)
{
t=f;
f=f->next;
free(t);
return f;
}
}
main()
{
int m,i;
node *start=NULL;
do
{
printf("\n 1. ins end");
printf("\n 2. delete");
printf("\n 3. list");
printf("\n 4. exit");
printf("\n choice: ");
scanf("%d",&m);
switch(m)
{
case 1:
start=insend(start);
list(start);
break;
case 2:
start=del(start);
list(start);
break;
case 3:
list(start);
break;
}
}
while(m!=4);
}
