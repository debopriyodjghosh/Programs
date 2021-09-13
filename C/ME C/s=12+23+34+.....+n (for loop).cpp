                    /* s=1*2+2*3+3*4+.....+n (for loop) */       
#include<stdio.h>
#include<conio.h>
int main(void)
{
	int n,a,s;
	printf("enter the no \n");
	scanf("%d",&n);
	s=0;
	for(a=1;a<=n;a++)
	{
	s=s+(a*(a+1));
	printf(" %d+",a);
    }
    printf("\n sum= %d",s);
    getch();
}
