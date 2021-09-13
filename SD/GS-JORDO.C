#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,n;
 float a[10][10],x[10],r;
 clrscr();
 printf("\n\n\t\tEnter the order of the matrix:");
 scanf("%d",&n);
 printf("\n\n\t\tEnter the co-efficient matrix and RIGHT HAND SIDE");
 for(i=0;i<n;i++)
 {
   for(j=0;j<=n;j++)
   {
    printf("\n\n\t\tEnter the a[%d][%d]-th element:",i+1,j+1);
    scanf("%f",&a[i][j]);
   }
  }
  for(k=0;k<n;k++)
  for(i=0;i<n;i++)
  {
   if(i==k)
   continue;
   r=a[i][k]/a[k][k];
   for(j=0;j<=n;j++)
   a[i][j]=a[i][j]-a[k][j]*r;
   }
  for(k=0;k<n;k++)
  {
   r=a[k][k];
   for(i=k;i<=n;i++)
   a[k][i]=a[k][i]/r;
  }
  printf("\n\n\t\tTHE ROOTS ARE");
  for(i=0;i<n;i++)
  printf("\n\n\t\tx[%d]=%f",i,a[i][n]);
getch();
}