/*greter among 3 numbers*/
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf ("enter a,b,c \n");
scanf ("%d%d%d",&a,&b,&c);
if (a>b)
{
if (a>c)
	{
	printf ("The gretest number is %d \n",a);
	}
	else
	{
	printf ("The gretest number is %d\n",c);
	}
  }
else
{
	if (b>c)
	{
	printf ("The gretest number is %d\n",b);
	}
	else
	{
	printf ("The gretest number is %d\n",c);
	}
}

getch();
}