                /*  s=1+2+3+...+n (for loop) */
#include<stdio.h>
#include<conio.h>
main()
{
	int n,a,s;
	printf("\n enter the number: ");
	scanf("%d",&n);
	s=0;
	for(a=1;a<=n;a++)
	{
		s=s+a;
		printf(" %d+",a);
	}
	printf("\n sum=%d",s);
	getch();
}
