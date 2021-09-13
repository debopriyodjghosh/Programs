                        /* linear search */  
#include<stdio.h>
#include<conio.h>
main()
{
	int x[20],i,n,key;
	printf("\n enter the range of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n x[%d]=",i);
		scanf("%d",&x[i]);
	}
	printf("\n enter the number what do you want to searched ?: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(x[i]==key)
		{
			printf("\n position of the number is= %d",i);
		}
     	else
		{
			printf("\n not found");
		}
	}
	getch();
}
