/*IMPLEMENTATION Of NUMERICAL  INTEGRATION  BY  USING  SIMPSON'S  1/3rd  RULE */
#include<stdio.h>                 //header file inclusion
#include<conio.h>
#include<math.h>
float f(float);                  //function declaration
void main()
{
	int n,i;                       //variable declaration
	float sum,h,u,l,y0,yn,so,se,x,y,j;
	char ans;
	sum=0,so=0,se=0;
	clrscr();
	do
	{
		printf("\n Given function is \n\t f(x)=x/1+x\n We have to find out the intregration of f(x) by Simpson's One-third Rule\n");
		printf("\n Enter the number of interval: ");        //input from user
		scanf("%d",&n);
		n=2*n;
		printf("\n Enter the lower limit:");
		scanf("%f",&l);
		printf("\n Enter the upper limit:");
		scanf("%f",&u);
		h=(u-l)/n;
		y0=f(l);
		yn=f(u);
		x=l+h;
		printf("\n\t  x \t\t\t f(x)");
		for(j=l;j<=u;j=j+2*h)
		{
			printf("\n\t %f \t\t %f",j,f(j));
		}
		for(i=1;i<n;i++)
		{
			y=f(x);
			if(i%2==0)
				se=se+y;
			else
				so=so+y;
			x=x+h;
		}
		sum=((h/3)*(y0+yn+(4*so)+(2*se)));
		printf("\n\n sum= %.6f",sum);     //output to user
		printf("(correct upto six decimal places)");
		fflush(stdin);
		printf("\n\n\t Do you want to continue(y/Y)?= "); //asking for continuation
		scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\n\t ....End Of Program....");
	getch();
}
//definition of the function f
float f(float x)
{
	return(x/(1+x));
}

/*
 Given function is
			f(x)=x/1+x
 We have to find out the intregration of f(x) by Simpson's One-third Rule

 Enter the number of interval: 4

 Enter the lower limit:0

 Enter the upper limit:3

			 x                      f(x)
			0.000000                0.000000
			0.750000                0.428571
			1.500000                0.600000
			2.250000                0.692308
			3.000000                0.750000

 sum= 1.613195(correct upto six decimal places)

			Do you want to continue(y/Y)?= y

 Given function is
			f(x)=x/1+x
 We have to find out the intregration of f(x) by Simpson's One-third Rule

 Enter the number of interval: 3

 Enter the lower limit:0

 Enter the upper limit:3

			 x                      f(x)
			0.000000                0.000000
			1.000000                0.500000
			2.000000                0.666667
			3.000000                0.750000

 sum= 3.638229(correct upto six decimal places)

			Do you want to continue(y/Y)?= n


			....End Of Program....
/*

