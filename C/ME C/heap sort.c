#include<stdio.h>

#include<conio.h>
void createheap(int a[ ],int n,int item)
{
	int ptr,par;
	ptr=n;
	while(ptr!=1)
	{
		par=ptr/2;
		if(a[par]<item)
		a[ptr]=a[par];
		else 
		break;
		ptr=par;
	}
	a[ptr]=item;
}
void delheap(int a[ ],int n)
{
	int ptr,item;
	item=a[n];
	a[n]=a[1];
	n=n-1;
	ptr=1;
	while((2*ptr+1)<=n)
	{
		if(item>a[2*ptr]&&item>a[2*ptr+1])
		break;
		else if(a[2*ptr]>a[2*ptr+1])
		{
			a[ptr]=a[2*ptr];
			ptr=2*ptr;
		}
		else
		{
			a[ptr]=a[2*ptr+1];
			ptr=2*ptr+1;
		}
}
		if(2*ptr>n)
		a[ptr]=item;
		else if(item>2*ptr)
		a[ptr]=item;
		else
		{
			a[ptr]=a[2*ptr];
			a[2*ptr]=item;
		}
	
}
	int main()
	{
		int n,i,a[50],item;
		printf("enter no of elements");
		scanf("%d",&n);
		printf("enter the root element");
		scanf("%d",&a[1]);
		for(i=2;i<=n;i++)
		{
			printf("enter the element");
			scanf("%d",&item);
			createheap(a,i,item);
		}
			for(i=n;i>=2;i--)
			
				delheap(a,i);
				printf("sorted elements are\n");
				for(i=1;i<=n;i++)
				printf("%d",a[i]);
		
		
	}

