#include<stdio.h>
#include<conio.h>
void main()
{
 float a[10][10],x[10];
 int i,j,k,n;
 float r;
 clrscr();
 printf("\n\n\t\tEnter the order of the matrix:");
 scanf("%d",&n);
 printf("\n\n\t\tEnter the co-efficient matrix and Right Hand Side");
 for(i=0;i<n;i++)
 for(j=0;j<=n;j++)
 {
  printf("\n\n\t\tEnter the a[%d][%d]-th element:",i+1,j+1);
  scanf("%f",&a[i][j]);
 }
 for(k=0;k<n-1;k++)
 {
  for(i=k+1;i<n;i++)
  {
   r=a[i][k]/a[k][k];
   for(j=0;j<=n;j++)
   {
    a[i][j]=a[i][j]-a[k][j]*r;
   }
  }
 }
 x[n-1]=a[n-1][n]/a[n-1][n-1];
 for(i=n-2;i>=0;i--)
 {
  x[i]=a[i][n];
  for(j=n-1;j>i;j--)
  {
   x[i]=x[i]-a[i][j]*x[j];
  }
  x[i]=x[i]/a[i][i];
 }
 clrscr();
 printf("\n\n\t\tThe Solutions Are:");
 for(i=0;i<n;i++)
 {
  printf("x[%d]=%f\n\n\t\t",i+1,x[i]);
 }
getch();
}
