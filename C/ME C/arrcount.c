 #include<stdio.h>
main()
{
    int x[20],n,count,m,a,j,i;
    printf("\n Enter the number of element in the array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nx[%d]=",i);
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            m=x[j];
            while(m!=0)
            {
                a=m%10;
                if(a==i)
                    count++;
                m=m/10;
            }
        }
        if(count!=0)
            printf("\n%d->%d",i,count);
    }

}
