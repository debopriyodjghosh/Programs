/* 		         surya rules			*/

/*	       graph theory - floyds algorithm	        */

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"

void main()
{

	int adjacency_matrix[10][10],order,path_matrix[10][10];
	int i,j,k,infinity=32700,sum=0;


	clrscr();


	/* taking input */

	printf("enter order of the matrix: ");
	scanf("%d",&order);

	for(i=1;i<=order;i++)
	{
		for(j=1;j<=order;j++)
		{
			if(i==j)
			{
				adjacency_matrix[i][j]=0;
				printf("adjacency matrix[%d][%d]: %d\n",i,j,adjacency_matrix[i][j]);
			}
			else
			{
				printf("adjacency matrix[%d][%d](enter -1 for infinity): ",i,j);
				scanf("%d",&adjacency_matrix[i][j]);

				if(adjacency_matrix[i][j] == -1)
					adjacency_matrix[i][j]=infinity;
			}
		}
	}


	/* creating the path matrix */

	for(i=1;i<=order;i++)
	{
		for(j=1;j<=order;j++)
		{
			if(i==j)
				path_matrix[i][j]=0;
			else
				  path_matrix[i][j]=j;
		}
	}

	/* calculating */

	for(k=1;k<=order;k++)
	{
		for(i=1;i<=order;i++)
		{
			if(adjacency_matrix[i][k] < infinity)
			{
				for(j=1;j<=order;j++)
				{
					if(adjacency_matrix[j][k] < infinity)
					{
						sum=adjacency_matrix[i][k]+adjacency_matrix[j][k];
						if(sum < adjacency_matrix [i][j])
						{
							adjacency_matrix[i][j]=sum;
							path_matrix[i][j]=k;
						}
					}
				}
			}
		}
	}


	/* displaying the matrices */

	printf("\n\nthe adjacency matrix is :\n");
	for(i=1;i<=order;i++)
	{
		for(j=1;j<=order;j++)
		{
			printf("%6d",adjacency_matrix[i][j]);
		}
		printf("\n");
	}


	printf("\n\nthe path matrix is :\n");
	for(i=1;i<=order;i++)
	{
		for(j=1;j<=order;j++)
		{
			printf("%6d",path_matrix[i][j]);
		}
		printf("\n");
	}



	getch();

}


