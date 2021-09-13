                    /* s=1*2+2*3+3*4+.....+n */       
#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,a,s;
	printf("enter the no \n");
	scanf("%d",&n);
	a=1;
	s=0;
	while(a<=n)
	{
	s=s+(a*(a+1));
	printf(" %d+",a);
	a=a+1;
    }
    printf("\n sum= %d",s);
    getch();
}
