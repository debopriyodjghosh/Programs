/**************************************************************************/
/**       NUMARICAL  INTEGRATION  BY  USING  TROPIZOIDAL  RULE       ******/
/**************************************************************************/


#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx(float);
int main()
{
   int r,c,n;
   float a[10][10],sum=0,h,upper,lower,temp;

   printf("\n Given function is \t f(x)=1/(1+x^2)\n we have to find out the intregration of f(x) by Trapezoidal Rule\n");
   printf("------------------------------------------------------------------\n ");
   printf("\n Enter the number of sub-intervals => ");
   scanf("%d",&n);
   printf("\n Enter the lower limits => ");
   scanf("%f",&lower);
   printf("\n Enter the upper limits => ");
   scanf("%f",&upper);
   h=(upper-lower)/n;
   temp=lower;
   for(r=0,c=0;c<=n;c++)
     {
	a[r][c]=temp;
	a[r+1][c]=fx(a[r][c]);
	temp=temp+h;
     }
     printf("\n----------------------------------------------------------\n ");
   for(r=0;r<2;r++)
     {  if(r==0)
	  printf("x    => ");
	else
	  printf("f(x) => ");
	for(c=0;c<=n;c++)
	  {
	    printf("\t%f\b",a[r][c]);
	  }
	printf("\n");
     }
     printf("\n----------------------------------------------------------\n ");
   sum=a[1][0]+a[1][n];
   for(r=1,c=1;c<n;c++)
     {
	sum+=2*a[r][c];
     }
   sum=(h/2)*sum;
   printf("\n The result is => %.6f",sum);
   printf(" (correct up to 6 significant figures) ");
   getch();
}

float fx(float t)
   {
     float ele;

     ele=t;
     return(1/(1+ele*ele));

   }
