#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],x,y,i,max=1,co=0;
 clrscr();
 printf("\n\n\t\tEnter first number:");
 scanf("%d",&x);
 printf("\n\n\t\tEnter second number:");
 scanf("%d",&y);
 for(i=1;i<=x;i++)
 {
  if(x%i==0&&y%i==0)
  {
   a[co]=i;
   co++;
   }
  }
  max=a[0];
  for(i=0;i<co;i++)
  {
   if(max<a[i])
   max=a[i];
  }
 printf("\n\n\t\tTHE G.C.D Of %d and %d is %d",x,y,max);
getch();
}