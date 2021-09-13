                /* sum of n^2 term (for loop) */
    #include<stdio.h>
	#include<conio.h>
	main()
	{
		int n,s,a;
		printf("\n enter the number: ");
		scanf("%d",&n);
		s=0;
		for(a=1;a<=n;a++)
		{
		s=s+(a*a);
		printf(" %d^2+",a);
	    }
	    printf("\n sum= %d",s);
	    getch();
				}            
