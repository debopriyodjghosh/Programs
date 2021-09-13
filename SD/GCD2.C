#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,c,d;
 clrscr();
 printf("\n\n\t\tEnter the small number:");
 scanf("%d",&a);
 c=a;
 printf("\n\n\t\tEnter the large number:");
 scanf("%d",&b);
 d=b;
 while(a!=b)
 {
  if(b>a)
  b=b-a;
  else
  a=a-b;
 }
 printf("\n\n\t\tTHE G.C.D OF %d AND %d IS %d",c,d,b);
getch();
}