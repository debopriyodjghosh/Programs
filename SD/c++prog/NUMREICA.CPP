/* 		         surya rules			*/

/*		       bisection method			*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"ctype.h"
#include"process.h"

float f(float x)
{
	return(x*x*x-8*x-4);
}

float f_(float x)
{
	return(3*x*x-8);
}



void main()
{

	float mid,lower,upper,temp,Xn,Xn_1;
	int flag=0,count=1;
	clrscr();
	printf("enter lower limit: ");
	scanf("%f",&lower);
	printf("enter upper limit: ");
	scanf("%f",&upper);

	Xn=lower;

       /* this segment calculates the lower and upper limits of a function */

/*	while( f(upper)*f(lower) >= 0 )
	{

		upper=count;
		lower=count-1;
		if(count%2 != 0)
		{
			upper=lower;
			lower=lower-1;
		}
		else
		{
			lower=upper;
			upper=upper+1;
		}

		count++;

		printf("upper= %f   lower= %f\n",upper,lower);


	}
*/

	if(f(upper)<0 && f(lower)>0)
	{
		temp=upper;
		upper=lower;
		lower=temp;
	}
	else if(f(upper)*f(lower)>0)
		exit(0);

	/* bisection starts */

	temp=upper;

	do
	{
		flag=0;
		mid=(upper+lower)/2;
		if(fabs(mid-temp)>.0005)
		{
			flag=1;
			temp=mid;
			if(f(mid)>0)
				upper=mid;
			else
				lower=mid;
		}

		printf("mid = %f \n",mid);

	}while(flag);

	printf("one root the equation by bisection is: %.2f\n\n\n",mid);

	getch();


	/* newton raphson method */





	do
	{
		flag=0;
		Xn_1=Xn-( f(Xn) / f_(Xn));

		printf("\nXn= %f		Xn_1= %f",Xn,Xn_1);

		if(fabs(Xn-Xn_1)>.00005)
		{
			flag=1;
			Xn=Xn_1;
		}


	}while(flag);

	printf("\n\n one root the equation by newton raphson is: %.4f",Xn);


	  getch();

}


