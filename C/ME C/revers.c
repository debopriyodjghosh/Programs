#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,s=0;
	printf("\n enter the number: ");
	scanf("%d",&n);
	while(n!=0)
	{
	i=n%10;
	s=s*10+i;
	n=n/10;
    }
    printf("\n revers= %d",s);
    getch();
}
