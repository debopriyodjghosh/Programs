#include<stdio.h>
#include<conio.h>
main()
{
      int a,b,n,y,i;
      float h,sum=0.0;
      printf("enter the elements\n ");
      scanf("%d%d%d%d",&a,&b,&n,&y);
      h=(b-a)/h;
      y0=f(a);
      yn=f(b);
      sum=(y0+yn);
    for(i=1;i<b;i++)
    {
                    y=a+i*h;
                    q=f(y);
                    if(n%2==0)
                    sum=sum+2*q;
                    else
                    sum=sum+4*q;
    }
    sum=(h*sum)/3;
    printf("the integration=%7.3f",sum);
    getch();
}
float f(float p)
{
      float q;
      return(asin(p));
}                   
      
