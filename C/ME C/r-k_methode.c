#include<stdio.h>
#include<math.h>
float f(float x,float y)
{
	return(x*x+y*y);
}
int main()
{
	float h,d1,d2,d3,d4,y,x,x1;
	printf("enter initial length of x & y");
	scanf("%f%f",&x,&y);
	printf("enter final value of x1");
	scanf("%f",&x1);
	h=(x1-x)/10;
	while(x!=x1)
	{
		d1=h*f(x,y);
		d2=h*f(x+h/2,y+d1/2);
		d3=h*f(x+h/2,y+d2/2);
		d4=h*f(x+h,y+d3);
		y=y+(1/6)*(d1+2*d2+2*d3+d4);
		x=x+h;
	}
	printf("value of y = %f for x= %f",y,x1);
}
