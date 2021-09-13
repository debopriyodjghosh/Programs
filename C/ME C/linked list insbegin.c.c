       INSERT NODE BEGIN

#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
typedef struct node node;
/*node *insbegin(node *f)
 node *c,*cur;
 cur=(node*)malloc(sizeof(node));
 printf("\n data: ");
 scaanf("%d",& cur->data);
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
}*/

node *insbegin(node *f)
{
node *cur;
cur=(node *)malloc(sizeof(node));
printf("\n data: ");
scanf("%d",& cur->data);
cur->next=f;
f=cur;
return(f);
}
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
main()
{
 int m;
 node *start=NULL;
 do
 {
  printf("\n1. ins begin");
  printf("\n2. list");
  printf("\n3. exit");
  printf("\n choice: ");
  scanf("%d",&m);
  switch(m)
  {
   case 1:
    start=insbegin(start);
    list(start);
    break;
   case 2:
    list(start);
    break;
  }
 }
 while(m!=3);
}
