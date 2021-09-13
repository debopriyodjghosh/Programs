#include<stdio.h>
main()
{
    int a[10],i,j,k,m,n,p;
    printf("\n how many nos ? ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter data ");
        scanf("%d",&a[i]);
    }

     for(i=0;i<n;i++)
    {
        printf("\ndata %d",a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        m=a[i];
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<m)
            {
                m=a[j];
                p=j;
            }
        }
        a[p]=a[i];
        a[i]=m;
    }
    for(i=0;i<n-1;i++)
    {
        m=a[i];
        p=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<m)
               {
                    m=a[j];
                        p=j;
               }
        }
        a[p]=a[i];
        a[i]=m;

    }
    printf("after sorting : ");
     for(i=0;i<n;i++)
    {
        printf("\ndata %d",a[i]);
    }

}
