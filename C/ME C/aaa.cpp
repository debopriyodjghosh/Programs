                /*structure of diagram A,B,C,D*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,n,x=65;
	printf(" \n enter the range: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
		printf(" ");
        }
	for(j=1;j<=i;j++)
    {
	printf("%2c",x);
	}
	x++;
	printf("\n");
    }
    x=x-2;
    	for(i=n-1;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
		{
		printf(" ");
        }
	for(j=1;j<=i;j++)
    {
	printf("%2c",x);
	}
	x--;
	printf("\n");
    }
    getch();
}





