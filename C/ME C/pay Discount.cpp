                     /* pay Discount */
    #include<stdio.h>
	#include<conio.h>
	main()
	{
		float a=0,D;
		printf("\n enter the amount: ");
		scanf("%f",&a);
		if(a<=5000)
		{
			D= (a*0.05);
		}
		else if(a>5000 && a<10000)
		{
			D= (a*0.07);
		}
		else
		{
			D= (a*0.1);
		}
		printf("\n the final discount is= %f",D);
		getch();
					 }                 
