            /*sum of n numbers if the sequence is odd*/       
#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,a,s;
	printf("enter the no \n");
	scanf("%d",&n);
	a=1;
	s=0;
	while(a<=2*n-1)
	{
	s=s+a;
	printf("%d+",a);
	a=a+2;
    }
    printf("\n sum=%d",s);
    getch();
}
