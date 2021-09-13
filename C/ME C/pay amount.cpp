                     /* pay amount */
    #include<stdio.h>
	#include<conio.h>
	main()
	{
		float a=0,A;
		printf("\n enter the amount: ");
		scanf("%f",&a);
		if(a<=5000)
		{
			A= a-(a*0.05);
		}
		else if(a>5000 && a<10000)
		{
			A= a-(a*0.07);
		}
		else
		{
			A= a-(a*0.1);
		}
		printf("\n the final amount is= %f",A);
		getch();
					 }                 
