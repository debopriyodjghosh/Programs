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
	int p,q;
	printf("\n enter the number: ");
	scanf("%d",&q);
	p=digit(q);
	if(p==q)
	{
		printf("\n perfect no");
	}
	else
	printf("\n not perfect no");
}
