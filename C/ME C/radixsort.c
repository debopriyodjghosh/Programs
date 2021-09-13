/*Program of RADIX SORT*/
#include <stdio.h>
#include <math.h>
main()
{
	int a[20][10],len,i,j,k,n,b[20],top[10],p,pos;
	printf("Enter no. of elements: ");
	scanf("%d",&n);
	printf("Enter the highest length: ");
	scanf("%d",&len);
	puts("Enter elements:");
	for(i=0;i<n;i++)
	{
		printf("Enter data= ");
		scanf("%d",&b[i]);
	}
	//RADIX SORT TECHNIQUE STARTS
	for(i=0;i<len;i++)
	{
		//INITIALIZE THE STACK
		for(j=0;j<10;j++)
		    top[j]=-1;
		/*Separate digit from the number and
		put it in stack*/
		for(j=0;j<n;j++)
		{
			pos=(int)(b[j]/pow(10,i))%10;
			a[pos][++top[pos]]=b[j];
		}
		//COLLECT ELEMENT FROM STACK
		for(j=0,p=-1;j<10;j++)
		{
			for(k=0;k<=top[j];k++)
			    b[++p]=a[j][k];
		}       
	}
	//PRINT THE SORTED ARRAY
	puts("SORTED ELEMENTS ARE:");
	for(i=0;i<n;i++)
	    printf("%d ",b[i]);
	return 0;    
}
