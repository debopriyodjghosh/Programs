/**** implementation of switch case and function ****/
#include<stdio.h>          //header file inclusion
#include<conio.h>
#include<math.h>
void fib();
void quadratic();
void main()
{
	int s;        //variable declaration
	char ans;
	clrscr();
	do
	{
		printf("\n\t*** Implementation of switch case and function ***");
		printf("\n\n\t MENU: \n\t1.Fibonacci Series \n\t2.Quadratic Equation");
		printf("\n\n\t Enter your choice::  ");    //input from user
		scanf("%d",&s);
		switch(s)
		{
			case 1:
				fib();
				break;

			case 2:
				quadratic();
				break;

			default:
				printf("\n\t WRONG INPUT!!!");
		}
		printf("\n\n\t Do you want to continue (y/Y)?: ");    //asking for continuation
		fflush(stdin);
		scanf("%c",&ans);
	}while((ans=='y')||(ans=='Y'));
	printf("\n\n\t ....End of program....");
	getch();
}


//definition of function 'quadratic'
	void quadratic()
	{
			float q,x1,x2,x,y,d,a,b,c;
			printf("\n\n\t Enter three coefficients of x ");
			printf("\n Enter the coefficient of x^2:  ");
			scanf("%f",&a);
			printf("\n Enter the coefficient of x:  ");
			scanf("%f",&b);
			printf("\n Enter the constant:  ");
			scanf("%f",&c);

			//determination calculation and display the roots of the equation
			d=(b*b)-(4*a*c);
			if(d==0)
			{
				x1=(-b+sqrt(d))/(2*a);
				x2=(-b-sqrt(d))/(2*a);
				printf("\n The roots are equal and they are %f & %f",x1,x2);
			}
			else if(d>0)
			{
			  x1=(-b+sqrt(d))/(2*a);
			  x2=(-b-sqrt(d))/(2*a);
			  printf("\n The roots are %f & %f",x1,x2);
			}
			else
			{
				q=sqrt(-(d));
				x = -(b/(2*a));
				y=q/(2*a);
				printf("\n The roots are imaginary and they are\n");
				printf("%f+i(%f) & ",x,y);
				printf("%f-i(%f)",x,y);
			}
	}


	// definition of the function 'fib'
	void fib()
	{
		int f0=0,f1=1,f2=0,i,n;
		long s =0;
		printf("\n\t ***Fibonaci series & it's sum*** ");
		printf("\n\t Enter how many element:   ");
		scanf("%d",&n);
		if(n<=0)
			printf("\n Invalid input for Fibonacci series!!!");
		else
		{
		//calculation for each term and display
			for(i=0;i<n;i++)
			{
				printf("   %d ,",f2);
				s=s+f2;
				f0=f1;
				f1=f2;
				f2=f0+f1;
			}
			printf("\n\t The sum= %ld",s);
		}
	}


  /*

//***** OUTPUT ****


        *** Implementation of switch case and function ***

         MENU:
        1.Fibonacci Series
        2.Quadratic Equation

         Enter your choice::  1

         ***Fibonaci series & it's sum***
         Enter how many element:   15
   0 ,   1 ,   1 ,   2 ,   3 ,   5 ,   8 ,   13 ,   21 ,   34 ,   55 ,   89 ,
144 ,   233 ,   377 ,
         The sum= 986

         Do you want to continue (y/Y)?: y

        *** Implementation of switch case and function ***

         MENU:
        1.Fibonacci Series
        2.Quadratic Equation

         Enter your choice::  1

         ***Fibonaci series & it's sum***
         Enter how many element:   -10

 Invalid input for Fibonacci series!!!

         Do you want to continue (y/Y)?: y

        *** Implementation of switch case and function ***

         MENU:
        1.Fibonacci Series
        2.Quadratic Equation

         Enter your choice::  2


         Enter three coefficients of x
 Enter the coefficient of x^2:  1

 Enter the coefficient of x:  4

 Enter the constant:  4

 The roots are equal and they are -2.000000 & -2.000000

         Do you want to continue (y/Y)?: y

        *** Implementation of switch case and function ***

         MENU:
        1.Fibonacci Series
        2.Quadratic Equation

         Enter your choice::  2


         Enter three coefficients of x
 Enter the coefficient of x^2:  2

 Enter the coefficient of x:  6

 Enter the constant:  3

 The roots are -0.633975 & -2.366025

         Do you want to continue (y/Y)?: y

        *** Implementation of switch case and function ***

         MENU:
        1.Fibonacci Series
        2.Quadratic Equation

         Enter your choice::  2


         Enter three coefficients of x
 Enter the coefficient of x^2:  2

 Enter the coefficient of x:  3

 Enter the constant:  9

 The roots are imaginary and they are
-0.750000+i(1.984313) & -0.750000-i(1.984313)

         Do you want to continue (y/Y)?: y

        *** Implementation of switch case and function ***

         MENU:
        1.Fibonacci Series
        2.Quadratic Equation

         Enter your choice::  5

         WRONG INPUT!!!

         Do you want to continue (y/Y)?: n


         ....End of program....



*/



