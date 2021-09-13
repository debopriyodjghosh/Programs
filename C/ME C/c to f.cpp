             /*convert a celsius to fahrenheit temperature*/
#include<stdio.h>
#include<conio.h>
int main(void)
{
	float C,F;
	printf("\n enter the celsius temperature: ");
	scanf("%f",&C);
	F=(9*C)/5+32;
	printf("\n the fahrenheit temperature is= %f",F);
	getch();
			 }             
