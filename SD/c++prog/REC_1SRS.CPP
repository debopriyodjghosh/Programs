/* 		         surya rules			*/

/*		recursion 1+1/(1+1/1+1+(1+1))		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"

float recsum(int terms)
{

	static int count=1;
	static float sum=1.5;

	if(count<terms)
	{
		count++;
		sum=(1+(1/(sum)))+recsum(terms)-sum;

	}
	return(sum);
}

void main()
{

	int terms;
	float sum=0.0;
	clrscr();

	printf("enter the number of terms:");
	scanf("%d",&terms);

	sum=recsum(terms);

	printf("the required sum is = %f",sum);

	getch();

}