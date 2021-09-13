/* A programe to implement Euler Method

the problem=(dy/dx)=-y/(1+x)
*/

#include<stdio.h>

float f(float x,float y)
{
	return(-y/(1+x));
}

main()
{
	float x0,xn,h,y;
	printf("Enter the step size=");
	scanf("%f",&h);
	printf("Enter the initial of x=");
	scanf("%f",&x0);
	printf("Enter the initial of y=");
	scanf("%f",&y);
	printf("Enter the final of x=");
	scanf("%f",&xn);
	while(x0<xn)	
	{
		y=y+h*f(x0,y);
		x0=x0+h;
	}
	printf("ANS=%f",y);
}

