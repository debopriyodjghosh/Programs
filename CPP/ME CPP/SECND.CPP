#include<stdio.h>
#include<conio.h>
void main()
{
   int a[5],i,j,max;
   printf("\nInput element:");
   for(i=0;i<5;i++)
   {
     printf("\nEnter element:");
     scanf("%d",&a[i]);
   }
   max=a[0];
   for(i=1;i<5;i++)
   {
     if(max<a[i])
     {
       max=a[i] ;
       j=i;
     }
   }
   max=a[0];
   for(i=1;i<5;i++)
   {
      if(max<a[i] && max!=a[j])
	max=a[i];
   }
   printf("\nSecond highest=%d",max);
   getch();

}