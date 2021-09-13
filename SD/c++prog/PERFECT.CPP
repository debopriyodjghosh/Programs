			/* PERFECT NUMBER */

#include<stdio.h>
#include<conio.h>
void main()
{
 int x,i,s=0;
 clrscr();
   printf("enter any number");
       scanf("%d",&x);
   for(i=1;i<=x/2;i++)
      {
       if(x%i==0)
	 s=s+i;
      }
  if(s==x)
       printf("%d is a perfect number",x);
  else
       printf("%d is not a perfect number",x);
getch();
}