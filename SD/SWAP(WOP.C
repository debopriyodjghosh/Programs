#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y;
 clrscr();
 printf("\n\n\t\tENTER THE VALUE OF x:");
 scanf("%d",&x);
 printf("\n\n\t\tENTER THE VALUE OF y:");
 scanf("%d",&y);
 x=x^y;
 y=x^y;
 x=x^y;
 printf("\n\n\t\tTHE VALUE OF x IS:%d",x);
 printf("\n\n\t\tTHE VALUE OF y IS:%d",y);
getch();
}