                   /* linear search using function*/
#include<stdio.h>
#include<conio.h>
int lsearch(int a[20],int m,int k)
{
	int i;
	for(i=0;i<m;i++)
	{
		if(a[i]==k)
		{
			return(i);
		}
	}
	return(-1);
}
main()
{
	int x[20],i,n,key,p;
	printf("\n enter the range of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n x[%d]=",i);
		scanf("%d",&x[i]);
	}
	printf("\n enter the number what do you want to searched ?: ");
	scanf("%d",&key);
	p=lsearch(x,n,key);
		if(p!=-1)
		{
			printf("\n position of the number is= %d",p);
		}	
		else
		{
			printf("\n not found");
		}
		getch();
}
