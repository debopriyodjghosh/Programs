#include<stdio.h>
#include<conio.h>
void main()
{
 float a[10][10],b[10][10],r;
 int i,j,k,n;
 clrscr();
 printf("\n\n\t\tEnter the order of the matrix:");
 scanf("%d",&n);
 printf("\n\n\t\tEnter the MATRIX");
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
  {
   printf("\n\n\t\tEnter the a[%d][%d]-th element:",i+1,j+1);
   scanf("%f",&a[i][j]);
  }
 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
  if(i==j)
  b[i][j]=1;
  else
  b[i][j]=0;
 }
 for(k=0;k<n;k++)
 for(i=0;i<n;i++)
 {
  if(i==k)
  continue;
  r=a[i][k]/a[k][k];
  for(j=0;j<n;j++)
  {
   a[i][j]=a[i][j]-a[k][j]*r;
   b[i][j]=b[i][j]-b[k][j]*r;
  }
 }
   for(k=0;k<n;k++)
  {
   r=a[k][k];
   for(i=0;i<n;i++)
   {
    a[k][i]=a[k][i]/r;
    b[k][i]=b[k][i]/r;
   }
  }
  clrscr();
  printf("\n\n\t\tTHE INVERSE MATRIX IS\n");
  for(i=0;i<n;i++)
  for(j=0;j<n;j++)
  {
   printf("\n\nb[%d][%d]=%f",i+1,j+1,b[i][j]);
  }
getch();
}