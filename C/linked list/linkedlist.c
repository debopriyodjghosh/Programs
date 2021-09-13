#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
 int data;
 struct node *next;
};
typedef struct node node;
void list(node *first)
{
 node *c;
 printf("\n");
 for(c=first;c!=NULL;c=c->next)
 {
  printf("%5d",c->data);
 }
}
node *insend(node *first,int d)
{
 node *c,*cur;
 cur=(node*)malloc(sizeof(int));
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
void reverse(node *first)
{
    node *c,*x;
    x=NULL;
    while(x!=first)
    {
        c=first;
        while(c->next!=x)
        {
            c=c->next;
        }
        printf("%5d",c->data);
        x=c;
    }
}
main()
{
 int i,n,d;
 node *start=NULL;
 do
 {
  printf("\n 1.insend \n 2.list \n 3.reverse \n 4.exit");
  printf("\n enter any choice?");
  scanf("%d",&n);
  switch(n)
  {
   case 1:
       for(i=0;i<5;i++)
       {


    printf("\n data:");
    scanf("%d",&d);
    start=insend(start,d);
    list(start);
    }
    break;
   case 2:
    list(start);
    break;
   case 3:
    printf("\n reverse");
    reverse(start);
    list(start);
    break;
  }
 }while(n!=4);
}
