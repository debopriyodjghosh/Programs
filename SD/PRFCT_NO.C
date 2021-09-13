//show all perfect no. from 1 to 1000,perfect no->6=1+2+3;(sum of factors=that no.).
#include<stdio.h>
#include<conio.h>
void main(void)
{
 int i,j,sum=0;
 clrscr();
 fflush(stdin);
 printf("\n\nThe perfect no.s are:(RANGE 1 TO 1000):\n\n");
 printf("1\n\n");
 for(i=2;i<=1000;i++)
  {
   sum=0;
   for(j=1;j<i;j++)
    {
     if(!(i%j))
       sum=sum+j;
    }
   if(sum==i)
     printf("%d\n\n",i);
  }
 getch();
}
