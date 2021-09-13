#include<stdio.h>
#include<conio.h>
#include<process.h>
void function(struct stack *s,int x,int max);
struct stack
{
 int top;
 int a[50];
};
void main()
{
  struct stack ss;
  int x;
  int max;
  ss.top=-1;
  clrscr();
  printf("\n\n\t\tENTER THE TOTAL NO. OF ELEMENTS:");
  scanf("%d",&max);
  while(1)
  {
  printf("\n\n\t\tENTER THE NO.");
  scanf("%d",&x);
  function(&ss,x,max);
  }
}
void function(struct stack *s,int x,int max)
{
   if(s->top<max-1)
   {
     s->top=s->top+1;
     (s->a[s->top])=x;
     printf("\n\n\t\tNUMBER IS INSERTED INTO STACK");
   }
   else
   {
    printf("\n\n\t\tSTACK OVERFLOW");
    exit(0);
   }
}