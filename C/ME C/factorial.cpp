                /*factorial of n numbers*/
   #include<stdio.h>
   #include<conio.h>
   main()
   {
   	int n,a,fact;
   	printf("\n enter the number: ");
   	scanf("%d",&n);
   	fact=1;
   	a=1;
   	while(a<=n)
   	{
   	fact=fact*a;
   	printf(" %d*",a);
   	a++;
    }
   	printf("\n factorial= %d",fact);
   	getch();
				}             
