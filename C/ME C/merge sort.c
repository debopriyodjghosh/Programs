#include<stdio.h>
void mpartision(int x[20],int low,int high);
void merge(int x[20],int low,int mid,int high);


void mpartision(int x[20],int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mpartision(x,low,mid);
mpartision(x,mid+1,high);
merge(x,low,mid,high);
}
}


void merge(int x[20],int low,int mid,int high)
{
int i,j,k,z[20];
i=low;
j=mid+1;
k=0;
while(i<=mid && j<=high)
{
if(x[i]<x[j])
{
z[k]=x[i];
i++;
}
else
{
z[k]=x[j];
j++;
}
k++;
}
while(i<=mid)
{
z[k]=x[i];
i++;
k++;
}
while(j<=high)
{
z[k]=x[j];
j++;
k++;
}
i=low;
for(j=0;j<k;j++)
{
x[i]=z[j];
i++;
}
}





main()
{
int i,n,a[20];
printf("\n enter the range: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n a[%d]=",i);
scanf("%d",&a[i]);
}
mpartision(a,0,n-1);
printf("\n");
for(i=0;i<n;i++)
{
printf("%5d",a[i]);
}
}
