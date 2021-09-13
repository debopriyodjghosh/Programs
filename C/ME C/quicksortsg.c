#include<stdio.h>
#include<conio.h>
int part(int a[],int beg,int end)
{
    int x,p,t,q;
    x=end;
    q=beg-1;
    for(p=beg;p<end;p++)
    {
      if(a[p]<=a[x])
      {
       q=q+1;
       t=a[q];
       a[q]=a[p];
       a[p]=t;
      }
    }
    t=a[q+1];
    a[q+1]=a[x];
    a[end]=t;
    return(q+1);
}
int main()
{
     int i,a[100],pos,n,top=0,up[100],low[100],beg,end;
     printf("enter no. of element");
     scanf("%d",&n);
     for(i=0;i<n;i++)
     {
         printf("enter a data->");
         scanf("%d",&a[i]);
     }printf("%d",part(a,0,n-1));
     if(n>1)
     {
         up[top]=n-1;
         low[top]=0;
     }
     while(top!=-1)
     {
        beg=low[top];
        end=up[top];
        pos=part(a,beg,end);
        top--;
        if(pos>beg+1)
        {
           top++;
           low[top]=beg;
           up[top]=pos-1;
        }
        if(end-1>pos)
        {
          top++;
          low[top]=pos+1;
          up[top]=end;
        }
     }
    printf("\nelements are\n");
    for(i=0;i<n;i++)
     printf("%d  ",a[i]);
    getch();
} 
                            
                              
    
