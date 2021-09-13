/* 		         surya rules			*/

/*             gauss siedel and gauss jacobi   		*/

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"ctype.h"

void main()
{

	/* gauss siedel */

	float matrix[10][10],solution[10],temp[10];
	int i,j,k,order,flag=1;
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

	for(i=0;i<order;i++)
	{
		solution[i]=0.0;
		temp[i]=0.0;
	}

	/* calculating the solution */

	do
	{
		for(i=0;i<order;i++)
		{
			solution[i]=matrix[i][order];

			for(j=0;j<order;j++)
			{
				if(i==j)continue;
				solution[i]=solution[i]-matrix[i][j]*solution[j];
				/* for gauss jacobi apply in the previous stage */
				/* solution[i]=solution[i]-matrix[i][j]*temp[j]; */
			}
			solution[i]=solution[i]/matrix[i][i];
		}


		for(i=0;i<order;i++)
		{
			flag=0;
			if(fabs(solution[i]-temp[i]) > 0.05)
			{
				flag=1;
				for(j=0;j<order;j++)
				{
					temp[j]=solution[j];
				}
				for(j=0;j<order;j++)
					printf(" solution[%d]= %f  ",j,solution[j]);
				printf("\n");
				break;
			}
		}
	}while(flag);

	for(j=0;j<order;j++)
		printf(" solution[%d]= %f  ",j,solution[j]);

	getch();

}


