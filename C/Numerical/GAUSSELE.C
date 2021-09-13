/*The Gauss Elimination Method*/



#include<stdio.h>
#include<conio.h>
int main()
{
   float u,in[5][5],x[10],sum;
   int n,r,c,i,j,k;
   printf("\nTHE GUASS ELIMINATION METHOD\n\n2x+3y+5z=23\n3x+4y+z=14\n6x+7y+2z=26\n");
    printf("\n -----------------------------------------------------------");
    printf("\n Enter the no. of eqn. :");
   scanf("%d",&n);
   printf("\n Enter the eqns:");
   for(i=0;i<n;i++)
     {
      printf("\n Enter coeff. of x,y,z,c of the %d eqn.",i+1);
      for(j=0;j<n+1;j++)
	{
	  scanf("%f",&in[i][j]);
	}
      printf("\n");
     }
   for(i=0;i<n;i++)
     { for(j=0;j<n+1;j++)
	 {
	  printf("  %f   ",in[i][j]);
	 }
       printf("\n\n");
     }
   for(k=0;k<n-1;k++)
      for(i=k+1;i<n;i++)
	{ u=in[i][k]/in[k][k];
	  for(j=k;j<n+1;j++)
	     in[i][j]-=u*(in[k][j]);
	}
    printf("\n The output is: \n");
    printf("\n -----------------------------------------------------------\n ");
    for(i=0;i<n;i++)
      { for(j=0;j<n+1;j++)

	    printf("  %f   ",in[i][j]);

	printf("\n\n");
      }
    for(i=n-1;i>=0;i--)
       {
	  sum=0;
	 for(j=0;j<n-1-i;j++)
	    {
	     sum+=in[i][n-1-j]*x[n-1-j];
	    }
	 x[i]=(in[i][n]-sum)/(in[i][i]);
	}
	printf("\n -------------------------------------------------------\n ");
	printf("\n The solution is:\n ");
     for(i=0;i<n;i++)
     {
	printf("\n  x[%d]=%f",i,x[i]);
      }
   getch();
}
