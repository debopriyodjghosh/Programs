/*Compute y(0.4),from the equation dy/dx=x-y,y(0)=1,taking h=0.1
                  RUNGE-KUTTA METHOD                      */
#include<stdio.h>
#include<conio.h>
#include<math.h>
float fx(float,float);
int main()
{
   int i=0,n,l;
   float h,x[30],y[30],k1,k2,k3,k4,x1;
   printf("\nGiven dy/dx=-xy,y(0)=1,&h=.05,compute y(0.25) by RUNGE-KUTTA method\n");
 printf("-------------------------------------------------------------------  ");
 printf("\n Enter the initial value of x, x=");
 scanf("%f",&x[0]);
 printf("\n Enter the initial values of y, y=");
 scanf("%f",&y[0]);
 printf("\n Enter the step leangth 'h'=>");
 scanf("%f",&h);
 printf("\n enter the value of 'x'=>");
 scanf("%f",&x1);

   n=(x1-x[0])/h;
   printf("\n--------------------------------------------------\n");
   for(i=0;i<=n;i++)
     {
       x[i+1]=x[i]+h;
       k1=h*fx(x[i],y[i]);
       k2=h*fx(x[i]+(h/2),y[i]+(k1/2));
       k3=h*fx(x[i]+(h/2),y[i]+(k2/2));
       k4=h*fx(x[i]+h,y[i]+k3);
       y[i+1]=y[i]+(k1+2*k2+2*k3+k4)/6;
       printf("\n Itaration=%d: y[%.2f]=%f\n",i+1,x[i+1],y[i+1]);
	      }
       printf("\n--------------------------------------------------\n");
    //printf("\n RESULT =>\t y(%.2f)=%f",x1,y[n]);
   getch();
}
float fx(float a,float b)
   {
     return((a*a)+(b*b));
   }
