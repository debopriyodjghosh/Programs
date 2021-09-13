                /*  s=1+2+3+...+n */
#include<stdio.h>
#include<conio.h>
main()
{
	int n,a,s;
	printf("\n enter the number: ");
	scanf("%d",&n);
	s=0;
	a=1;
	while(a<=n)
	{
		s=s+a;
		printf(" %d+",a);
		a++;
	}
	printf("\n sum=%d",s);
	getch();
}
