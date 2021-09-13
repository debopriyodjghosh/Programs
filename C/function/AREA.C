	/*area of rectangle using value received and return*/

#include<stdio.h>
#include<conio.h>
float area(float,float);
void main()
{
float x,y,z;
clrscr();
printf("enter length and breadth of rectangle=");
scanf("%f%f",&x,&y);
z=area(x,y);
printf("\n area of ractangle is=%f",z);
getch();
}
float area(float l,float b)
{
float a;
a=l*b;
return a;
}