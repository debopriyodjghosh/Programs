#include<stdio.h>
main()
{
    int x[20],m,y[20],z[50],n1,n2,i,j,k;
    printf("\n Enter the number of element in the 1st array: ");
    scanf("%d",&n1);
    for(i=0;i<n1;i++)
    {
        printf("\nx[%d]=",i);
        scanf("%d",&x[i]);
    }
    printf("\n Enter the number of element in the 2st array: ");
    scanf("%d",&n2);
    for(j=0;j<n2;j++)
    {
        printf("\ny[%d]=",i);
        scanf("%d",&y[j]);
    }
    i=0;
    j=0;
    k=0;
    while(i<n1&&j<n2)
    {
        if(x[i]<y[j])
        {
            z[k]=x[i];
            k++;
            i++;
        }
        else if(x[i]>y[j])
        {
            z[k]=y[j];
            k++;
            j++;
        }
        else
        {
            z[k]=x[i];
            k++;
            j++;
            i++;
        }
    }
    while(i<n1)
    {
        z[k]=x[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        z[k]=y[j];
        k++;
        j++;
    }
    for(m=0;m<k;m++)
    {
        printf("\nz[%d]=%d",m,z[m]);
    }


}
