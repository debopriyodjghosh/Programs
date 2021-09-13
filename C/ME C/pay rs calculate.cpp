                 /*calculate the dalily payment*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
	int h,p;
	printf("\n enter the hours: ");
	scanf("%d",&h);
	if(h<=8)
	{
	p=50;
    }
	else if(h<=12)
	{
		p=50+(h-8)*10;
	}
	else if(h<=16)
	{
		p=90+(h-12)*20;
	}
	else
    {
	    p=(50+40+80+25);
    }
	printf("\n the pay RS is=%d",p);
	getch();
}
