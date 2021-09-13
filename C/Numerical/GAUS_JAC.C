/***************************************************************************/
       /* SOLVING A SET OF EQUATIONS BY USING GAUSS-JACOBI METHOD */
/**************************************************************************/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int condition(float x[],float x1[],int n);
int main()
{
 int i,j,n,f,k,flag=0,i1;
 float x[' '],x1[' '],sum,a[10][10],d[10][10],t[10],a1,a2,big;
 printf("\n Enter the no. of rows:");
 scanf("%d",&n);
 printf("\n Enter the matrix:");
 for(i=0;i<n;i++)
     {printf("\n ENTER ELEMENTS OF %d-th ROW =>\n",i+1);
      for(j=0;j<n+1;j++)
	scanf("%f",&a[i][j]);
      }
 printf("\n The matrix is:\n");
 for(i=0;i<n;i++)
 { for(j=0;j<=n;j++)
      printf("%f\t",a[i][j]);
   printf("\n");
 }
 for(i=0;i<n;i++)
    {  a1=fabs(a[i][i]);
       a2=0;
       //if(i==0)
       for(j=0;j<n;j++)
	 if(i!=j)
	   a2=a2+fabs(a[i][j]);
       //if(i==1)
       //a2=(fabs(a[i][0])+fabs(a[i][2]));
       //if(i==2)
       //a2=(fabs(a[i][0])+fabs(a[i][1]));
       if(a2>a1)
	{  for(i1=0;i1<n;i1++)
	     { big=fabs(a[i1][0]);
	       t[i1]=0;
	       for(j=0;j<n-1;j++)
		  {
		    if(big<fabs(a[i1][j+1]))
		      { big=fabs(a[i1][j+1]);
			t[i1]=j+1;
		      }//if loop
		  }//for loop

	     }//2-nd for loop
	   i=5;
	   flag=1;
	}//if loop

    }//1-st for loop
    if(flag==1)
      {
	for(i=0;i<n;i++)
	  { j=t[i];
	    for(k=0;k<n+1;k++)
	      d[j][k]=a[i][k];
	  }
	for(i=0;i<n;i++)
	  for(j=0;j<n+1;j++)
	     a[i][j]=d[i][j];
	printf("\n The system is not diagonally dominant.\n");
	printf("\n The diagonally dominant matrix is(we re-arrange the system as)=>\n");
	for(i=0;i<n;i++)
	  {
	    for(j=0;j<=n;j++)
	       printf("%f\t",a[i][j]);
	    printf("\n");
	  }
      }
    else
      printf("\n The given system is diagonally dominant\n");
 for(i=0;i<n;i++)
   {
    x[i]=0;
    x1[i]=0;
  }
 while(1)
    {
	f=0;
	for(i=0;i<n;i++)
	  {
	    sum=0;
	    for(j=0;j<n;j++)
	      {
		if(j!=i)
		  sum=sum+a[i][j]*x[j];
	      }
	    x1[i]=(a[i][n]-sum)/a[i][i];


	  }
	if(condition(x,x1,n))
	  {  for(i=0;i<n;i++)
	       x[i]=x1[i];
	  }
	else
	  f=1;
	if(f)
	  break;
    }
 printf("\n The solution of the given system of equation is =>\n");
 for(i=0;i<n;i++)
   printf("\n x[%d]=%.5f",i+1,x1[i]);
 printf("\n (Correct up to 5 decimal places)");
 getch();
}

int condition(float x[],float x1[],int n)
 {
  int flag=0,i;
  for(i=0;i<n;i++)
    {
      if((fabs(x1[i]-x[i]))>0.00001)
      flag=1;
    }
  return (flag);
 }

