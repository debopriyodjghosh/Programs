                /* factorial of n numbers (for loop) */
   #include<stdio.h>
   #include<conio.h>
   main()
   {
   	int n,a,fact;
   	printf("\n enter the number: ");
   	scanf("%d",&n);
   	fact=1;
   	for(a=1;a<=n;a++)
   	{
   	fact=fact*a;
   	printf(" %d*",a);
    }
   	printf("\n factorial= %d",fact);
   	getch();
				}             
