                 /*matrix element print */
#include<stdio.h>
#include<conio.h>
main()
{
	int x[10][10], i,j,r,c;                       //input of matrix
	printf("\n how many rows and column:\n");
	scanf("%d %d",&r,&c);
	printf("\n matrix \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("\n x[%d][%d]=",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	for(i=0;i<r;i++)                         //print matrix
	{
		for(j=0;j<c;j++)
		{
			printf("%5d",x[i][j]);
		}
		printf("\n");
	}
	getch();
}
