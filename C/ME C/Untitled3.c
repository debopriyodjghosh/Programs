#include<stdio.h>
#include<stdlib.h>
main ()
{
    int *x;
    int i,j,k,n;
    printf("\n how many nos you want to enter : ");
    scanf("%d",&n);
    x=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
       printf("\n enter nos : ");
       scanf("%d",x+i);
    }
    for(i=0;i<n;i++)
    {
       printf("\nnos :%d ",*(x+i));

    }
}
