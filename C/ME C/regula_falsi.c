/* A program to implement Regula felsi method

the problem = x*x*x - x - 1
*/

#include<stdio.h>
#include<math.h>

float f(float x)
{
	return(x*x*x-x-1);
}

main()
{
	float h,x,y,a0,b0,a,b,e,temp;
	a=0;b=1;
	a0=0;b0=-1;
	printf("Enter the error=");
	scanf("%f",&e);
	while(!((f(a)*f(b)<0)||(f(a0)*f(b0)<0)))
	{
		a=b;
		b=b+1;
		a0=b0;
		b0=b0-1;
	}
	if(f(a0)*f(b0)<0)
	{
		a=a0;
		b=b0;
	}
	if(f(a)>0)
	{
		temp=a;
		a=b;
		b=temp;
	}
	h=(fabs(a)/(fabs(a)+fabs(b)))*(b-a);
	y=a+h;
	do
	{
		x=y;
		if(f(y)>0)
		 b=y;
		else
		 a=y;
		h=(fabs(a)/(fabs(a)+fabs(b)))*(b-a);
		y=a+h;
	}while(fabs(y-x)>e);
	printf("root =%f",y);
} 
