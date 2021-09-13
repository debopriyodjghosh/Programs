                /* sum of n^2 term*/
    #include<stdio.h>
	#include<conio.h>
	main()
	{
		int n,s,a;
		printf("\n enter the number: ");
		scanf("%d",&n);
		s=0;
		a=1;
		while(a<=n)
		{
		s=s+(a*a);
		printf(" %d^2+",a);
		a++;
	    }
	    printf("\n sum= %d",s);
	    getch();
				}            
