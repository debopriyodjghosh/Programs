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
	printf("%2d",j);
	}
	printf("\n");
    }
    getch();
}


o/p:

 enter the range: 5
     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
