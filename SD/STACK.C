#include<stdio.h>
#include<conio.h>
#include<process.h>
#define max 50
void push(int a[],int max1,int *top,int item)
{
clrscr();
if(*top<max1-1)
{
 *top=*top+1;
 a[*top]=item;
 printf("\n\n\t\t%d IS SUCCESSFULLY INSERT INTO THE STACK",item);
}
else
printf("\n\n\t\tSTACK IS OVERFLOW");
}
void pop(int a[],int *top)
{
 int item;
 clrscr();
 if(*top>=0)
 {
  item=a[*top];
  *top=*top-1;
  printf("\n\n\t\t%d IS SUCCESSFULLY DELETED FROM STACK",item);
 }
 else
 printf("\n\n\t\tSTACK IS UNDERFLOW");
}
void display(int a[],int *top)
{
 int i;
 clrscr();
 if(*top>=0)
 {
  printf("\n\n\t\tTHE STACK ELEMENTS ARE:\n\n\t");
  for(i=*top;i>=0;i--)
  printf("\t%d",a[i]);
 }
 else
 printf("\n\n\t\tTHERE IS NO ELEMENT IN THE STACK");
}
void main()
{
 int a[max],ch,item,max1,top=-1;
 clrscr();
 printf("\n\n\t\tENTER THE MAXIMUM LENGTH OF THE ARRAY:");
 scanf("%d",&max1);
 while(1)
 {
 printf("\n\n\n\n\t\t\tSTACK OPERATION\n");
 printf("\t\t\t_______________\n\n\t\t");
 printf("\n\n\t\t1.INSERT AN ELMENT INTO STACK\n\n\t\t2.DELETE AN ELEMENT FROM\n\n\t\t3.DISPLAY THE STACT ELEMENT\n\n\t\t4.EXIT");
 ch=getch();
 switch(ch)
 {
 case 49:
	 printf("\n\n\t\tENTER THE ELEMENT YOU WANT TO INSERT:");
	 scanf("%d",&item);
	 push(a,max1,&top,item);
	 break;
 case 50:
	 pop(a,&top);
	 break;
 case 51:
	 display(a,&top);
	 break;
 case 52:
	 exit(0);
 }
 }
}