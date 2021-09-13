/***************************************************************************/
/****   INTERPOLATION  BY  USING  LAGRANGE'S  INTERPOLATION  FORMULA    ****/
/***************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
   int r,n,i,j;
   static int c=0;
   float a[10][10],sum=0,t1,t2,x;

   printf("\n Enter the no. of data u want to input:");
   scanf("%d",&n);
   printf("\n Enter the data =>\n %d value of x first then corresponding f(x) =>\n",n);
   for(r=0;r<2;r++)
     {if(r==0)
       printf("\n Value of x=>\n");
      if(r==1)
       printf("\n Value of f(x)=>\n");
      for(c=0;c<n;c++)
       scanf("%f",&a[r][c]);
     }
   printf("\n Enter the value to be interpolated:");
   scanf("%f",&x);
   printf("\n The input is:\n");
   printf("-------------------------------------------------------------------\n");
   for(r=0;r<2;r++)
     {
       for(c=0;c<n;c++)
	   printf("%.5f\t",a[r][c]);

       printf("\n");
       printf("--------------------------------------------------------------------\n");
     }
   r=0;
   for(c=0;c<n;c++)
     {
       t1=1;
       t2=1;
       for(i=0;i<n;i++)
	 {
	   if(c!=i)
	   t1=t1*(x-a[r][i]);
	 }
       for(j=0;j<n;j++)
	 {
	   if(c!=j)
	   t2=t2*(a[r][c]-a[r][j]);
	 }
       sum+=(t1/t2)*a[r+1][c];
     }
   printf("\n The result is =>\n\t f(%f)=%f",x,sum);
   getch();
}
