#include <stdio.h>
void read(int m[10][10],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
	 for(j=0;j<c;j++)
	 {
		printf("\n m[%d][%d]=",i,j);
		scanf("%d",&m[i][j]);
	 }
  }
}

void disp(int m[10][10],int r,int c)
{
  int i,j;
  for(i=0;i<r;i++)
  {
	 for(j=0;j<c;j++)
	 {
		printf("%4d",m[i][j]);
	 }
	 printf("\n");
  }
}

 main()
{
  int x[10][10],y[10][10],z[10][10],i,j,k,r1,c1,r2,c2;
  printf("\n enter row & col of 1st mat :");
  scanf("%d %d",&r1,&c1);

  printf("\n 1st mat:");
  read(x,r1,c1);

  printf("\n enter row & col of 2nd mat :");
  scanf("%d %d",&r2,&c2);

  printf("\n 2nd mat:");
  read(y,r2,c2);

  if(c1==r2)
  {
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
		 z[i][j]=0;
		 for(k=0;k<c1;k++)
		 {
			z[i][j]=z[i][j]+(x[i][k]*y[k][j]);
		 }
		}
	}
	 printf("\n 1st mat :\n");
	 disp(x,r1,c1);
	 printf("\n 2nd mat :\n");
	 disp(y,r2,c2);
	 printf("\n result :\n");
	 disp(z,r1,c2);
	}
	else
	  printf("\n mult. not possible");

}


