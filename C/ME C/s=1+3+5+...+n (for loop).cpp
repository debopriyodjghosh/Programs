                /*  s=1+3+5+...+n (for loop) */
#include<stdio.h>
#include<conio.h>
main()
{
	int n,a,s;
	printf("\n enter the number: ");
	scanf("%d",&n);
	s=0;
	for(a=1;a<=(2*n)-1;a=a+2)
	{
		s=s+a;
		printf(" %d+",a);
	}
	printf("\n sum=%d",s);
	getch();
}
