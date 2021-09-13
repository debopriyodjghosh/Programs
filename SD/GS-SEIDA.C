#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float a[10][10],x[10],y[10],r;
 int i,j,n,flag=0;
 clrscr();
 printf("\n\n\t\tEnter the order of the matrix:");
 scanf("%d",&n);
 printf("\n\n\t\tEnter element rowwise with RIGHT HAND SIDE");
 for(i=0;i<n;i++)
 for(j=0;j<=n;j++)
 {
  printf("\n\n\t\tEnter the a[%d][%d]-th element:",i+1,j+1);
  scanf("%f",&a[i][j]);
 }
 for(i=0;i<n;i++)
 {
  x[i]=0.0;
  y[i]=0.0;
 }
do
{
 for(i=0;i<n;i++)
 {
  x[i]=a[i][n];
  for(j=0;j<n;j++)
  {
   if(i==j)
   continue;
   x[i]=x[i]-a[i][j]*x[j];
   }
  x[i]=x[i]/a[i][i];
 }
 flag=0;
 for(i=0;i<n;i++)
 {
  if(fabs(x[i]-y[i])>.0005)
  {
   flag=1;
   for(j=0;j<n;j++)
   y[j]=x[j];
   break;
  }
 }
}while(flag);
for(i=0;i<n;i++)
printf("\n\nx[%d]=%f",i,x[i]);
getch();
}