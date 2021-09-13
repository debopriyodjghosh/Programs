#include<stdio.h>
#include<conio.h>
 float f(float x)
 {
 	return(x*x*x-9*x+1);
 }
 
  int main()
{
	float a1,b1,a2,b2,a,b,y,x,err;
	int i;
	a1=0,b1=1,a2=0,b2=-1;
	while(!(f(a1)*f(b1)<0||f(a2)*f(b2)<0))
	{
		a1=b1;
		b1=b1+1;
		a2=b2;
		b2=b2+1;
	}
	if(f(a1)*f(b1)<0)
	{
		a=a1;
		b=b1;
	
	}
	printf("Enter the correction upto decimal places:");
	scanf("%f",&err);
	x=b;
	y=a-(f(a)/(f(a)-f(x)))*(a-x);
	printf("\n	%f	%f	%f",a,x,y);
	while(fabs(y-x)>=err)
	{
		x=y;
		y=a-(f(a)/(f(a)-f(x)))*(a-x);
		printf("\n	%f	%f	 %f	",a,x,y);
		
	}
	getch();
} 
