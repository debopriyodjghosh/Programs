#include<stdio.h>
#include<string.h>
main()
{
	int a[10],j,i,n,flag=0;
	printf("\nEnter how many no : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("/n enter dada : ");
		scanf("%d",&a[i]);
	}
	printf("\n enter the item to be searched : ");
	scanf("%d",&j);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==j)
		{
			flag=1;
		}
	}
	if(flag==1)
	printf("\nitem found at %d",i);
	else
	printf("\nitem not found");
}
