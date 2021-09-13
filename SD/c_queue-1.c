#include<stdio.h>
#include"conio.h"
#include"stdlib.h"
#define max 4
#define false 0
#define true 1
int a[max];
int f,r;
void insrt(void);
void delet(void);
void front(void);
int isempty(void);

void main(void)
{
 int ch,l,item;
 f=r=-1;
 clrscr();
 do
  {
   clrscr();
   printf("\n\n\n\n                       ****----    MENU    ----****");
   printf("\n\nTo insert a value --> Press 1..");
   printf("\n\nTo delete -->Press 2..");
   printf("\n\nTo check the queue is empty or not-->Press 3..");
   printf("\n\nTo print the front element -->Press 4..");
   printf("\n\nTo exit -->Press 5..");
   printf("\n\n\nNow enter your choice: ");
   scanf("%d",&ch);
   switch(ch)
    {
     case 1:
       insrt();
       break;
     case 2:
       delet();
       break;
     case 3:
       l=isempty();
       if(l)
	printf("\n\nThe queue is empty!!!");
       else
	printf("\n\nThe queue is not empty...");
       getch();
       break;
     case 4:
       front();
       break;
     default:
       exit(0);
    }
 }while(1);
}
void insrt()
{
 int x;
 if(f==-1)
   f=r=0;
 else
  {
   if((f==0&&r==max-1)||(r+1==f))
    {
     printf("\n\nThe queue is Full!!!");
     getch();
     return;
    }
   else
    {
     r=r+1;
     r=r%max;
    }
  }
 printf("\n\nEnter the value to be inserted: ");
 scanf("%d",&x);
 a[r]=x;
}
void delet()
{
 if(f==-1)
  {
   printf("\n\nThe queue is empty!!!");
   getch();
   return;
  }
 else
  {
   if(f==r)
    {
     printf("\n\nThe deleted item is:%d",a[f]);
     f=r=-1;
    }
   else
    {
     if(f==max-1)
      {
       printf("\n\nThe deleted item is:%d",a[f]);
       f=0;
      }
     else
      {
       printf("\n\nThe deleted item is:%d",a[f]);
       f++;
      }
    }
  }
 getch();
}
void front()
{
 if(f==r)
  printf("\n\nThe queue is Empty!!!");
 else
  printf("\n\nThe front element is: %d",a[f]);
 getch();
}
int isempty()
{
 if(f==r)
  return(true);
 else
  return(false);
}
