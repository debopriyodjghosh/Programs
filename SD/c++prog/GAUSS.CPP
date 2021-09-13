/* 		         surya rules			*/

/*	      gauss elimination and gauss jordan        */
/*         and matrix inversion using gauss jordan	*/

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

	float matrix[10][10],solution[10],inverse[10][10];
	int i,j,k,order;
	float ratio;
	clrscr();

	printf("enter the order of the augmented matrix: ");
	scanf("%d",&order);

	for(i=0;i<order;i++)
	{
		for(j=0;j<=order;j++)
		{
			printf("matrix[%d][%d]= ",i,j);
			scanf("%f",&matrix[i][j]);
		}
	}

	/* gauss elimination */

	/* converting into upper triangular matrix */


	for(k=0;k<order;k++)
	{
		for(i=k+1;i<order;i++)
		{
			ratio=matrix[i][k]/matrix[k][k];
			for(j=0;j<=order;j++)
			{
				matrix[i][j]=matrix[i][j]-ratio*matrix[k][j];
			}
		}
	}

	/* back tracking */

	solution[order-1]=matrix[order-1][order]/matrix[order-1][order-1];

	for(j=order-2;j>=0;j--)
	{
		solution[j]=matrix[j][order];
		for(i=order-1;i>j;i--)
		{
			solution[j]=solution[j]-matrix[j][i]*solution[i];
		}
			solution[j]=solution[j]/matrix[j][j];

	}


	/* printing the solution using the gauss elimination technique */

	for(i=0;i<order;i++)
	{
		printf("solution[%d]= %f\n",i,solution[i]);
	}



	/* gauss jordon */


	/* converting into upper and lower triangular matrix */

	for(k=0;k<order;k++)
	{
		for(i=0;i<order;i++)
		{
			if(i==k)
				continue;

			ratio=matrix[i][k]/matrix[k][k];

			for(j=0;j<=order;j++)
			{
				matrix[i][j]=matrix[i][j]-ratio*matrix[k][j];
			}
		}
	}

	/* finding the solution directly */

	for(i=0;i<order;i++)
	{
		ratio=matrix[i][i];
		for(j=0;j<=order;j++)
		{
			matrix[i][j]=matrix[i][j]/ratio;
		}
	}


	/* printing the solution using gauss jordan method */

	for(i=0;i<order;i++)
	{
		printf("solution[%d]= %f\n ",i,matrix[i][order]);
	}



	/* inversion of matrix using gauss jordan */

	/* creating the inverse identity matrix */

	for(i=0;i<order;i++)
	{
		for(j=0;j<order;j++)
		{
			if(i==j)
				inverse[i][j]=1;
			else
				inverse[i][j]=0;
		}
	}





	/* calculating inverse */

	for(k=0;k<order;k++)
	{
		for(i=0;i<order;i++)
		{
			if(i==k)
				continue;

			ratio=matrix[i][k]/matrix[k][k];

			for(j=0;j<=order;j++)
			{
				//matrix[i][j]=matrix[i][j]-ratio*matrix[k][j];
				inverse[i][j]=inverse[i][j]-ratio*inverse[k][j];
			}
		}
	}



	for(i=0;i<order;i++)
	{
		ratio=matrix[i][i];
		for(j=0;j<=order;j++)
		{
			//matrix[i][j]=matrix[i][j]/ratio;
			inverse[i][j]=inverse[i][j]/ratio;

		}
	}



	printf("\n----------------------------------------------------\n");
	printf("\n\nprinting the inverse \n\n");

	for(i=0;i<order;i++)
	{
		for(j=0;j<order;j++)
		{

			printf("%f ",inverse[i][j]);

		}

		printf("\n");
	}

	getch();

}


