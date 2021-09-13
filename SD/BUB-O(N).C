#include<stdio.h>
#include<conio.h>
void main()
{
 int a[20],i,j,n,t;
 clrscr();
 printf("\n\n\t\tHOW MANY NUMBERS YOU WANT TO INSERT:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n\n\t\tENTER a[%d]-th NUMBER:",i+1);
  scanf("%d",&a[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n-i-1;j++)
  {
   if(a[j]>a[j+1])
   {
    t=a[j];
    a[j]=a[j+1];
    a[j+1]=t;
   }
  }
 }
 printf("\n\n\t\tThe BUBBLE-SORTED Numbers are:");
 for(i=0;i<n;i++)
 {
  printf(" %d",a[i]);
 }
getch();
}