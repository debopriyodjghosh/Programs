#include<stdio.h>
#include<conio.h>
void main()
{
int x[5][5],i,j,sr,sl,n,m;
clrscr();
printf("no. of element in row and coloum=");
scanf("%d%d",&n,&m);
printf("enetr value in matrix=");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
scanf("%d",&x[i][j]);
}
}
printf("matrix is=\n");
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
printf("\t%d",x[i][j]);
}
printf("\n");
}
sr=0;
sl=0;
for(i=0;i<n;i++)
{
for(j=0;j<m;j++)
{
if(i==j)
{
sr=sr+x[i][j];
}
if(i+j==n-1)
{
sl=sl+x[i][j];
}
}
}
printf("\n sum of right diagonal is=%d",sr);
printf("\n sum of left diagonal is=%d",sl);
printf("\n sum of both diagonal is=%d",sr+sl);
getch();
}