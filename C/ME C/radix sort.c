#include<stdio.h>
#include<math.h>
int main()
{
	int a[20][10],len,i,j,k,n,b[20],top[10],p,pos;
	printf("Enter no. of elements and highest  length");
	scanf("%d%d",&n,&len);
	printf("Enter elements for sorting\n");
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&b[i]);
	}
	for(i=0;i<len;i++)
	{
		for(j=0;j<10;j++)
		top[j]=-1;
		for(j=0;j<n;j++)
		{
			pos=(int)(b[j]/pow(10,i))%10;
			a[pos][++top[pos]]=b[j];
		}
	}
	for(j=0,p=-1;j<10;j++)
	{
		for(k=0;k<=top[j];k++)
		b[++p]=a[j][k];
	}
	printf("\nsorted elements are\n");
	for(i=0;i<n;i++)
	printf("%d ",b[i]);
}
