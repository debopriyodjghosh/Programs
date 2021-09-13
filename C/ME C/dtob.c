/* decimal to binary */
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
  int b=0,s=0;
  int d,r,i=1,flag=0;
  printf("\n Enter a decimal number:");
  scanf("%d", &d);
   while(d>0)
   { r=d%2;
     s= (s+pow(10,i));
     d=d/2;
     i++;
   }
   while(s>0)
   {
       b=(s%10)+(b*10);
       s=s/10;
   }
   printf("\n The equevalent binary is %d", b);
return(0);
}
