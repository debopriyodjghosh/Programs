#include<stdio.h>
main()
{
     int a[10],i,j,n,t;
    printf("\nEnter the no of elements :");
    scanf("%d",&n);
    a[0]=-32768;
    for(i=1;i<=n;i++)
    {
        printf("\nenter data :");
        scanf("%d",&a[i]);
    }
    insertion (a,n);

     printf("\nthe sorted elements are :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
    }
}
int insertion (int a[10],int n)
{
    int i,j,t;
     for(i=2;i<=n;i++)
    {
        t=a[i];
        j=i-1;
        while(a[j]>t)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
    }

}
