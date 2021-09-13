#include<stdio.h>
int digit(int);
int digit(int n)
{
	int i,s=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
		s=s+i;
	    }
	    if(n==s)
        {
    return(s);
        }
    }
}
main()
{
	int p,q,x,j;
	printf("\n enter two numbers:\n");
	scanf("%d%d",&p,&q);
	printf("\n the perfect numbers are: ");
	for(j=p;j<=q;j++)
	{
	x=digit(j);
	if(x==j)
	{
		printf("\t %d",j);
	}
    }
}
