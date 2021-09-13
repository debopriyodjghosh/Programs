#include<stdio.h>
#include<conio.h>
main()
{
	int n,i,s=0,p;
	printf("\n enter the number: ");
	scanf("%d",&n);
	p=n;
	while(n!=0)
	{
	i=n%10;
	s=s*10+i;
	n=n/10;
    }
    if(s==p)
    printf("\n palindrom= %d",s);
	else
	printf("\n not palindrom");
	getch();
}
