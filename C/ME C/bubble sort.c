#include<stdio.h>
main()
{
    int a[10],i,j,n,t,flag=0;
    printf("\nEnter the no of elements :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter data :");
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                //flag=1;
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    //if(flag==0)
       // return;
    printf("\nthe sorted elements are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
