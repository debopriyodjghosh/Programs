#include<stdio.h>
void radixsort(int*,int);
void main()
{
	int a[10],i;
	/*printf("\n*****ENTER THE SIZE OF ARRAY:-\n");
	scanf("%d",&n);*/
	printf("\n-----ENTER ELEMENTS IN ARRAY-----\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n                   #####THE UNSORTED ARRAY IS GIVEN BELOW#####\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	radixsort(a,10);
		printf("\n                   <<~~THE SORTED ARRAY IS~~>>\n");
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
}
void radixsort(int a[],int n)
{
	int bucket[10][10],bcount[10];
	int i,j,k,r,count=0,div=1;
	int max,pass;
	//find the maximum number input value
	for(i=1,max=a[0];i<n;i++)
	{
		if(max<a[i])
			max=a[i];
	}
	//count the number of digites in max
	while(max!=0)
	{
		count++;
		max=max/10;
	}
	for(pass=1;pass<=count;pass++)/*pass control*/
	{
		for(k=0;k<10;bcount[k++]=0);/*storing 0's in bcount array*/
			for(i=0;i<n;i++)/*enter eliment in bucket array*/
			{
				r=(a[i]/div)%10;
				bucket[r][bcount[r]]=a[i];
				bcount[r]++;
			}
		for(i=0,k=0;k<10;k++)
			for(j=0;j<bcount[k];j++)
			{
				a[i]=bucket[k][j];
				i++;
			}

	  div=(div*10);
	}/*end of pass*/
}/*end of function*/






