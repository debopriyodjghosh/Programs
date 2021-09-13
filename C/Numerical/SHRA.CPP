/*power finding*/
#include<stdio.h>
#include<conio.h>
  void main()
  {
  int n,i,j,l,a[10];
  clrscr();
  printf("Enter the number:\n");
  scanf("%d",&n);
  i=0;
  while(n!=0)
   {
   for(j=2;j<=n;j++)
	 {
	 if(n%j==0)
	  {
	  a[i]=j;
	  break;
	  }
	 }
   n=n/j;
   i++;
   }
  l=i;
  for(i=0;i<l-1;i++)
	 printf("%d\t",a[i]);
  printf("1");
  getch();
  }