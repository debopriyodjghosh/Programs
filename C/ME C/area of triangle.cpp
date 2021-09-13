                 /*area of triangle*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	float a,b,c,s,A;
	printf("\n enter the sides of triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	if(a+b>c && b+c>a &&c+a>b)
	{
	s=(a+b+c)/2;
	A=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n the area of triangle is= %f",A);
    }
    else
    printf("\n triangle is not possible");
    getch();
				 }
