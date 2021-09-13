#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float);
float f1(float);
main()
{
      float a,b;
      printf("enter initial case" );
      scanf("%f",&a);
      while(1)
      {
              b=a-(f(a)/f1(a));
              if(fabs(b-a)<0.00001)
              break;
              else
              a=b;
              }
      printf("the roots of the equation is %f",b);
      getch();        
      }
      
      float f(float p)
      {
            float q;
            return(p*p-5*p+6);
            }
      float f1(float r)
      {
            return(2*r-5);
            }      
