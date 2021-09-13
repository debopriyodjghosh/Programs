// A programe to compute the series sin(x)=1-(x^3)/3!+(x^5)/5!-(x^7)/7!+....

#include<stdio.h>
#include<math.h>

int fact(x)
{
	int f=1;
	while(x>0)
	{
		f=f*x;
		x--;
	}
	return f;
}

main()
{
	int i=1;
	float x,e,n,p,s;
	printf("Enter the X of SIN(X)=");
	scanf("%f",&x);
	x=x*3.14/180;
	printf("Enter the error=");
	scanf("%f",&e);
	n=s=x;
	do
	{
		p=n;
		if(i%2==0)
		 n=pow(x,i*2+1)/fact(i*2+1);
		else
		 n=-pow(x,i*2+1)/fact(i*2+1);
		s=s+n;
		i++;
	}while(fabs(fabs(n)-fabs(p))>e);
	printf("SIN(%.4f)=%.4f",x,s);
}
