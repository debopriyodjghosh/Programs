                /*structure of diagram*/
#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,n;
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
	printf("%2d",i);	
	}
	printf("\n");
    }
    getch();
}
