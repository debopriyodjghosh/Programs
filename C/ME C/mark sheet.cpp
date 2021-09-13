                 /*print the mark sheet for the stduent*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
	float m;
	printf("\n enter the mark: ");
	scanf("%f",&m);
	if(m>80)
	{
	printf("\n the grade is: A+");
    }
    else if(m>70)
    {
    	printf("\n the grade is: A");
	}
	else if(m>60)
	{
		printf("\n the grade is: B");
	}
	else if(m>=50)
	{
		printf("\n the grade is: C");
	}
	else
	printf("\n the grade is: F");
	getch();
				 }
