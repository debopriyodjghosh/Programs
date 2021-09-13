#include<stdio.h>
#include<math.h>
int prime(int);
int main()
{
	int n,m,r,lb,ub,k;
	printf("Enter lower bound");
	scanf("%d",&lb);
	while(lb<0)
	{
		printf("enter a +ve lower bound");
		scanf("%d",&lb);
	}
	printf("Enter upper bound");
	scanf("%d",&ub);
	while((ub<0)||(ub<lb))
	{
		printf("Enter a +ve upper bound greater than lower bound");
		scanf("%d",&ub);
	}

	for(k=lb;k<=ub;k++)
	{
		n=prime(k);
		m=prime(k+2);
		if((n==1)&&(m==1))
		printf("   %d %d",k,k+2);
	
		}
	return 0;
}

int prime(int n)
{
	int flag=0;
	int  i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		   {
		      flag=1;
		      break;
		   }
		
	}
	if(flag==0)
	{
	   return 1;
	
	}
	else
	    return 0;
}
