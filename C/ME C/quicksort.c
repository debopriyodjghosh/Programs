#include<stdio.h>
#include<conio.h>
void quicksort(int[],int,int);
int part(int[],int,int);
void display(int[]);
int main()
  {
        int i,n,a[10],l=0,r=9;
        printf("enter the array input\n\n");
        for(i=0;i<10;i++)
          {
            printf("enter a value of a[%d]=",i);
            scanf("%d",&a[i]);
          }
        quicksort(a,l,r);
        display(a);
        getch();
  }
void quicksort(int a[],int left,int right)
  {
     int p;
     if(left<right)
      {
        p=part(a,left,right);
        quicksort(a,left,p-1);
        quicksort(a,p+1,right);
      }
  }
int part(int a[],int l,int r)
  {
        int loc=l,t;
        while(l<r)
         {
           while(a[loc]<=a[r] && loc<r) r--;       
           if(a[loc]>a[r])
           {
             t=a[loc];
             a[loc]=a[r];
             a[r]=t;
             loc=r;
             l++;
           }
          while(a[loc]>=a[l] && loc>l) l++;
          if(a[loc]<a[l])
          {
            t=a[loc];
            a[loc]=a[l];
            a[l]=t;
            r--;
          }
         }
         return(loc);
  }
void display(int a[])
  {
      int i;
      printf("\nthe sorted elements are\n\n");
      for(i=0;i<10;i++)
       printf("%d  ",a[i]);
  }                            
                                                                                      
