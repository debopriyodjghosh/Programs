/* 		         surya rules			*/

/*	 number sequence from balagurusamy pg-78 3.5	*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"


int firstdigit(int num)
{
	while(num)
	{
		num=num/10;
		if(num<10)
			return(num);
	}
}

int countdigit(int num)
{
	int c=0;
	while(num)
	{
		c++;
		num=num/10;
	}
	return c;
}

void main()
{
	int number,i,count_digit,first_digit;
	clrscr();

	printf("enter a number: ");
	scanf("%d",&number);

	count_digit=countdigit(number);
	while(count_digit)
	{
		printf("\n\n %-4d",number);

		number=(number-(firstdigit(number)*(pow(10,countdigit(number)-1))));

		count_digit--;
	}





	getch();

}