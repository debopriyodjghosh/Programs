/* decimal to binary */
#include<stdio.h>
#include<conio.h>
void main()
{
  long int b=0,s=0;
  int d,r,i=0;
  printf("\n Enter a decimal number:");
  scanf("%d", &d);
   while(d>0)
   {
     r=d%2;
     d=d/2;
     s=s*10+r;
   }
   while(s>0)
   {
     r=s%10;
     b=b*10+r;
     s=s/10;
   }
   while(i>0)
   {
     //b=b*10;
     i--;
   }
   printf("\n The equevalent binary is %d", b);
}
