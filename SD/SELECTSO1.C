#include<stdio.h>
#include<conio.h>
void selectionsort(int x[],int n);
void main()
{
 int x[20],n,i;
 clrscr();
 printf("\n\n\t\tEnter the no.of elements:");
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  printf("\n\n\t\tEnter the no[%d]-th element:",i+1);
  scanf("%d",&x[i]);
 }
 selectionsort(x,n);
getch();
}
void selectionsort(int x[],int n)
{
 int i,j,large,index;
 for(i=n-1;i>0;i--)
 {
  large=x[0];
  index=0;
  for(j=1;j<=i;j++)
  if(x[j]>large)
  {
   large=x[j];
   index=j;
  }
  x[index]=x[i];
  x[i]=large;
 }
 printf("\n\n\t\tThe sorted array is:");
 for(i=0;i<n;i++)
 {
  printf("\t%d",x[i]);
 }
}