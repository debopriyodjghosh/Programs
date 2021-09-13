#include<stdio.h>
#include<conio.h>
void quicksort(int*,int,int);
int split(int*,int,int);
void main()
{	int n,a[50],lower=0,upper=n-1;
	printf("\nEnter size of array:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("Enter the value at %dth position",i);
		scanf("%d",&a[i]);
    }
	printf("\nArray before sorting:");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t",a[i]);
		printf("\n");
	}
	quicksort(a,lower,upper);
	printf("the Array after sorting");
	for(i=0;i<n;i++)
		printf(" %d\t",a[i]);
	getch();
}
void quicksort(int a[],int lower,int upper)
{
	int i;
	if(upper>lower)
	{
		i=split(a,lower,upper);
		quicksort(a,lower,i-1);
        quicksort(a,i+1,upper);
	}
}
int split(int a[],int lower,int upper)
{
	int i,p,q,t;
	p=lower+1;
	q=upper;
    i=a[lower];
	while(q>=p)
	{
		while(a[p]<i)
			p++;
		while(a[q]>i)
			q--;
		if(q>p)
		{
			t=a[p];
			a[p]=a[q];
			a[q]=t;
        }
	}
	
	t=a[lower];
	a[lower]=a[q];
	a[q]=t;
	return q;
}