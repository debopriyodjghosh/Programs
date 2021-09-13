//****GAUSS ELIMINATION METHOD****//
#include<stdio.h>
#include<math.h>

main()
{
  float a[10][10],x[10],r;
  int i,j,k,n;

  printf("\t\tEnter the order of co-efficient matrix:");
  scanf("%d",&n);
  printf("\tEnter the matrix with right hand side:\n");

  for(i=0;i<n;i++)
    {
    for(j=0;j<=n;j++)
      {
        printf("\t\ta[%d][%d]=",i,j);
        scanf("%f",&a[i][j]);
      }
    }

  for(k=0;k<n;k++)
    {
    for(i=k+1;i<n;i++)
      {
        r=a[i][k]/a[k][k];
        for(j=0;j<=n;j++)
	         a[i][j]=a[i][j]-r*a[k][j];
       }
     }

    x[n-1]=a[n-1][n]/a[n-1][n-1];
       for(j=n-2;j>=0;j--)
        {
	       x[j]=a[j][n];
	       for(i=n-1;i>j;i--)
	          x[j]=x[j]-a[j][i]*x[i];
	       x[j]=x[j]/a[j][j];
       }
    printf("\n\n\n \t\t::SOLUTION IS::\n\n");
    for(i=0;i<n;i++)
	    printf("\tx[%d]=%lf  \n",i,x[i]);
    return 0;
}
