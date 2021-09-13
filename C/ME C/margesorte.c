#include<stdio.h>
#include<conio.h>
void marge(int arr[],int l,int m,int r)
  {
       int i,j,k;
       int n1=m-l+1;
       int n2=r-m;
       int L[n1],R[n2];
       for(i=0;i<n1;i++)
         L[i]=arr[l+i];
       for(j=0;j<n2;j++)
         R[j]=arr[m+1+j];
       i=0;j=0;k=l;                
       while(i<n1 && j<n2)
        {
           if(L[i] <= R[j])
            {
             arr[k]=L[i];
             i++;
            }  
           else
            {
             arr[k]=R[j];
             j++;
            }
           k++; 
        }
       while(i<n1)
        {
         arr[k]=L[i];
         i++;
         k++;
        }
       while(j<n2)
        {
         arr[k]=R[j];
         j++;
         k++;
        }
        
  }
void msort(int arr[],int l,int r)
  {
      if(l<r)
       {
          int m=l+(r-l)/2;
          msort(arr,l,m);
          msort(arr,m+1,r);
          marge(arr,l,m,r);
       }
  }
void display(int arr[],int n)
  {
      int i;
      for(i=0;i<n;i++)
       printf("%d  ",arr[i]);
  }             
int main()
  {
       int i,n,arr[10];
       printf("how many element do u want to sort-> ");
       scanf("%d",&n);
       for(i=0;i<n;i++)
        {
          printf("enter a value for a[%d]=",i);
          scanf("%d",&arr[i]);
        }
        
       msort(arr,0,n-1);
       printf("The sorted array is\n");
       display(arr,n);
       getch();
  }
       
                                                        
