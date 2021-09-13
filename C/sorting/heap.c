#include<stdio.h>
#include<conio.h>
int main()
{
	printf("\n\n The Heap Sort\n");
	int i,elt,s,f,ivalue;
	int l,x=0,arr[20];
		printf("Enter the array limt:");
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		printf("\n Enter the %dth element: ",i);
		scanf("%d",&arr[i]);

	}
	printf("\n The given Array list list is:\n");
	for(l=0;l<x;l++)
	{
		printf("%d    ",arr[l]);
	}
	printf("\n\n The Sorting Steps are as follows: \n \n");
	printf("The Heapification of the given array list is : \n \n");
	for(i=1;i<x;i++)
	{
		elt=arr[i];
		s=i;
		f=(s-1)/2;
		while(s>0 && arr[f]<elt)
		{
			arr[s]=arr[f];
			s=f;
			f=(s-1)/2;
		}
		arr[s]=elt;
		for(l=0;l<x;l++)
		printf("%d   ",arr[l]);
		printf("\n \n");

	}
	printf("\n \n Sorting of the Heap:\n\n");
	for(i=x-1;i>0;i--)
	{
		ivalue=arr[i];
		arr[i]=arr[0];
		f=0;
		if(i==1)
			s=-1;
		else
			s=1;
		if(i>2 && arr[2]>arr[1])
			s=2;
		while(s>=0 && ivalue<arr[s])
		{
			arr[f]=arr[s];
			f=s;
			s=2*f+1;
			if(s+1<i-1 && arr[s]<arr[s+1])
				s=s+1;
			if(s>i-1)
				s=-1;

		}
		arr[f]=ivalue;
		for(l=0;l<x;l++)
		printf("%d   ",arr[l]);
		printf("\n\n");

	}
	printf("Therefore the sorted arry is :\n");
	for(l=0;l<x;l++)
	printf("%d   ",arr[l]);
	printf("\n\n");

	
	
}
