#include<conio.h>
#include<stdio.h>
void main()
{
    long int decimalNumber,remainder,quotient;
    int i=0,j,temp;
    char hexadecimalNumber[100];
    clrscr();
    printf("Enter any decimal number: ");
    scanf("%ld",&decimalNumber);

    quotient = decimalNumber;

    while(quotient!=0)
    {
	 temp = quotient % 16;
      if( temp < 10)
	   temp =temp + 48;
      else
	 temp = temp + 55;

      hexadecimalNumber[i]= temp;
      quotient = quotient / 16;
      i++;
   }

    printf("Equivalent hexadecimal value of decimal number %d: ",decimalNumber);
    for(j = i -1 ;j>= 0;j--)
      printf("%c",hexadecimalNumber[j]);
      getch();
}