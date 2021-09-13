#include<stdio.h>
#include<conio.h>
void Convert(int); //Function declaration of function Convert//
void main(void)
{
char Suffix[5][15] ={" Crore ", " Lakh ", " Thousand ", " Hundred ", " "};
unsigned long int Factor[5] ={10000000L, 100000L, 1000, 100, 1},Number;
	int K;

	printf("\n\nEnter the number  : "); //Takes input the number//
	scanf("%lu", &Number);
	printf("%lu = ", Number);
	if(Number==0)
	{
		printf("Zero ");
	}
	else
	{
		for(K=0;K<5;K++) //Converts the number into  words//
		{
			if(Number/Factor[K]!=0)
			{
				Convert(Number/Factor[K]); //Function call to the function Convert to convert the number into word//
				printf(Suffix[K]);
				Number%=Factor[K];
			}
		}
	}
	getch();
}
void Convert(int Number)
{
	char UnitNames[10][10] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"} ;
	char TenNames[10][10] = {"", "", "Twenty", "Thirty", "Fourty", "Fiftty", "Sixty", "Seventy", "Eighty", "Ninety"} ;
char TeenNames[10][10] = {"Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"} ;
	if(Number/10==1)
	{
		printf("%s",TeenNames[Number%10]);
		return;
	}
printf("%s%s",TenNames[Number/10],UnitNames[Number%10]);
} //Function definition of function Convert//
