#include<stdio.h>
#include<conio.h>
void main()
{
 int k=0,n,x,a[100],i;
 clrscr();
 printf("\n\n\t\tEnter the decimal number:");
 scanf("%d",&x);
 n=x;
 while(n!=0)
 {
  a[k]=n%2;
  n=n/2;
  k++;
  }
 printf("\n\n\t\tThe binary conversion of %d is: ",x);
 for(i=k-1;i>=0;i--)
 printf("%d",a[i]);
getch();
}