#include<stdio.h>
#include<conio.h>
 main()
{
	int k,i=0,j=0,n,n1,temp[i][j];
	printf("Enter the no of Row  : ");
	scanf("%d",&n);
	printf("Enter the Number of coloum  : ");
	scanf("%d",&n1);


	int a[n][n1];


	for(i=0;i<n;i++)

	{
		for(j=0;j<n1;j++)
		{
			printf("Enter %d %d Position Element ",i+1,j+1);
			scanf("%d",&a[i][j]);

		}

	}
	// for Print
	printf("\n\nBefore Sorting The elements are on this 2D array   ");

	for(i=0;i<n;i++)

	{
		for(j=0;j<n1;j++)
		{
			printf(" %d ",a[i][j]);


		}
		printf("\n                                                   ");
	}


	// for Sort

for (i = 0; i <n; i++)
{

	for(j=0;j<n1;j++)
	{

		for (k = 0; k < n1-j-1; k++)
      {

        if(a[i][k] > a[i][k+1])

        {
            temp[i][k] = a[i][k];
            a[i][k] = a[i][k+1];
            a[i][k+1] = temp[i][k];


        }

      }

	}

}
	printf("\nAfter Sorting The elements are on this 2D array   \n");

	for(i=0;i<n;i++)

	{
	    printf("\n              ");
		for(j=0;j<n1;j++)
		{
			printf(" %d ",a[i][j]);


		}
		printf("\n              ");
	}



}


