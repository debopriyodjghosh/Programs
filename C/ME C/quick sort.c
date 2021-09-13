#include<stdio.h>
#include<conio.h>
void quicksort(int a[],int,int);
int main()
{
    int i,n,a[10];
    printf("enter the range of array \n");
    scanf("%d",&n);
    printf("\n enter the elements \n");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    printf("the sorted elements are \n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    getch();
    return 0;
}
void quicksort(int a[10],int first,int last)
{
    int i,j,pivot,temp;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
                i++;
            while(a[j]>a[pivot])
                j--;
            if(i<j)
            {
                temp = a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}
