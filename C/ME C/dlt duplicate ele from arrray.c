#include<stdio.h>
main()
{
    int a[100];
    int i,j,k,n;
    printf("\n how many elements ? ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter data : ");
        scanf("%d",&a[i]);
    }



    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                for(k=j;k<n;k++)
                {
                    a[k]=a[k+1];
                }
                n--;
                j--;
            }
        }
    }

    for(j=0;j<n;j++)
    {
        printf(" %d",a[j]);
    }
}
