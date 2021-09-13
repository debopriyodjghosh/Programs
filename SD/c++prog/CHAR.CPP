#include<stdio.h>
#include<conio.h>
void main()
{
int i=1,x=7,j=1;
clrscr();
char n='a',m='g';
while(i<=x)
{
j=1;
while(j<=x-i+1)
{
printf("a");
n++;
j++;
}
j=1;
while(j<2*i-1)
{
printf("-");
j++;
}
j=1;
while(j<=x-i+1)
{
printf("g");
m++;
j++;
}
i++;
printf("\n");
}
getch();
}