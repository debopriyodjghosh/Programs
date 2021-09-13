#include<stdio.h>
int sort(int a[10],int b[10],int z[20],int ni,int n2);
int main()
{
    int a[10],b[10],z[20],n,n2,m,i,k;
    printf("\nenter the no of elements : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d] : ",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter the no of elements : ");
    scanf("%d",&n2);
    for(i=0;i<n2;i++)
    {
        printf("\nb[%d] : ",i);
        scanf("%d",&b[i]);
    }
    k=sort(a,b,z,n,n2);
    printf("the sorted array is : ");
    for(i=0;i<k;i++)
    {
        printf("\nz[%d] = %d ",i,z[i]);

    }
}
int sort(int a[10],int b[10],int z[20],int n,int n2)
{
    int i,j,k;

i=0;
    j=0;
    k=0;
    while(i<n&&j<n2)
    {
        if(a[i]<b[j])
        {
            z[k]=a[i];
            k++;
            i++;
        }
        else if(a[i]>b[j])
        {
            z[k]=b[j];
            k++;
            j++;
        }
        else
        {
            z[k]=a[i];
            k++;
            j++;
            i++;
        }
    }
    while(i<n)
    {
        z[k]=a[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        z[k]=b[j];
        k++;
        j++;
    }
    return (k);
}
