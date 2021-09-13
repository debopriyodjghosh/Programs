// A program for gauss jordan

#include<stdio.h>

main()
{
	float a[20][20],r,x[20];
	int n,i,j,k;
	printf("Enter the Order of the Matrix=");
	scanf("%d",&n);
	printf("entr the coefficeant & RHS:-\n");
	for(i=1;i<=n;i++)
	 for(j=1;j<=n+1;j++)
	  scanf("%f",&a[i][j]);
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=n+1;i++)
		{
			if(i==k)
			 continue;
			r=a[i][k]/a[k][k];
			for(j=1;j<=n+1;j++)
			 a[i][j]=a[i][j]-r*a[k][j];
		}
	}
	for(i=1;i<=n;i++)
	 x[i]=a[i][n+1]/a[i][i];
	printf("ANS=\n");
	for(i=1;i<=n;i++)
	 printf("x(%d) = %f\n",i,x[i]);
}
