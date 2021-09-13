                     /* quick sort(disendring order) */
#include<stdio.h>
#include<conio.h>
void qsort(int x[20],int low,int high);
int position(int x[20],int low,int high);
void qsort(int x[20],int low,int high)
{
	int pos;
	if(low<high)
	{
		pos=position(x,low,high);
		qsort(x,low,pos-1);
		qsort(x,pos+1,high);
	}
}
int position(int x[20],int low,int high)
{
	int i,f=1,t;
	int pos=low;
	while(f==1)
	{
		for(i=high;i>pos;i--)
		{
			f=0;
			if(x[pos]>x[i])
			{
				t=x[pos];
				x[pos]=x[i];
				x[i]=t;
				pos=i;
				f=1;
				break;
			}
		}
		if(f==1)
		{
			for(i=1;i<pos;i++)
			{
				f=0;
				if(x[pos]<x[i])
				{
					t=x[pos];
					x[pos]=x[i];
					x[i]=t;
					pos=i;
					f=1;
					break;
				}
			}
		}
	}
	return(pos);
}
main()
{
	int i,n,a[20];
	printf("\n enter the range of array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=",i);
		scanf("%d",&a[i]);
	}
	qsort(a,0,n-1);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	getch();
}
