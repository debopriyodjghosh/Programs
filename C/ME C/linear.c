/*LINEAR SEARCH TO FIND ELIMENT FROM AN ARRAY*/
/*Saturday, September 21, 2013*/

#include<stdio.h>
void main()
{
	int num[10],i,count=0,n;
	printf("\n ENTER ELIMENTS IN ARRAY:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<10;i++)
	{
		printf("\n num[%d]= %d",i,num[i]);
	}
	printf("\n ENTER ITEM TO BE FOUND= ");
	scanf("%d",&n);
	for(i=0;i<10;i++)
	{
		if(num[i]==n)
		{
			
			count++;
			break;
		}
	}
	
	if(count==1)
	{
		printf("\n THE ITEM IS FOUND AT num[%d]=%d",i,num[i]);

	}
	else
		printf("ITEM IS NOT FOUND ");
}
