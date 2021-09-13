#include<stdio.h>
int main()
{
    int a[10][10];
int i,j,c,k,r,m,n,o,p;

printf("\nEnter no of row : ");
scanf("%d",&r);
printf("\nEnter the no of coloumn : ");
scanf("%d",&c);
for(i=0;i<r;i++)
{
    for(j=0;j<r;j++)
    {
        printf("\nenter data : ");
        scanf("%d",&a[i][j]);
    }
}
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d",a[i][j]);
        }
    }

    for(k=0;k<r;k++)
    {
        m=k;n=0;
        for(j=0;j<c-1;j++)
        {
            if(a[k][j]>a[k][j+1])
            {
                m=k;
                n=j+1;
            }
        }
        printf("\nrow:%d min:%d",k,a[m][n]);
        for(j=n;j<=n;j++)
        {
            for(i=0;i<r-1;i++)
            {
                if(a[i][j]<a[i+1][j])
                {
                    o=i+1;
                    p=j;
                }
            }
        }
        printf("\n %d",a[o][p]);
        if(m==o && n==p)
        {
            printf("\nthe saddle point is %d %d",m,n);
            break;
        }
    }

}
