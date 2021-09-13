#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,d=1,n;
    printf("\nEnter how many fibbonaci number you want to print\t");
    scanf("%d",&n);
     
     if(n==0||n==1)
        {
        printf("\t0\t");
        return;
        }
     else
        printf("\t0\t1");
        c=a+b;
    
       while(d<=n-2) 
        {
        printf("\t%d\t",c);
        a=b;
        b=c;
        c=a+b;
        d=d+1;
        }

    getch();
}
