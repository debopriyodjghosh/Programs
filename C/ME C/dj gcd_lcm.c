#include<stdio.h>
#include<conio.h>
int gcd(int ,int );
int lcm(int , int );
int main()
{
    int m,c=0,v,u;
    int Q[10];
    printf("enter the total no ");
    scanf("%d",&m);

    while(c<m)
    {
        printf("enter the data\n");
       scanf("%d",&Q[c]);
       c++;
    }
    c=0;
    while(c<m)
    {
        v=lcm(Q[c],Q[c+1]);
        u=gcd(Q[c],Q[c+1]);
        c++;
    }
    printf("lcm of given numbers = %d",v);
    printf("gcd of given numbers = %d",u);


}
int gcd(int a,int b)
{
    int p;
    if(a>b)
    {
        p=a;
        a=b;
        b=p;
    }
    if(b%a==0)
    {return a;}
    else
    {

    return gcd(a,b);}

}

int lcm(int x,int y)
{
    int g;
    g = gcd(x,y);
    return ((x*y)/g);
}
