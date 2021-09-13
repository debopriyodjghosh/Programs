#include<stdio.h>
int sum(int a,int b);
void main()
{
    int x,y,z=0;
    printf("enter the value of a and b");
    scanf("%d%d",&x,&y);
    z=sum(x,y);
    printf("the sum of value a,b = %d",z);
    getch();
}
int sum(int a, int b)
{
    int c;
    c=(a+b);
    return c;
}
