	/*area of rectangle using pointer*/

#include<stdio.h>
#include<conio.h>
int main()
{
int a,l,b,p,*x,*y,*z,*w;

x=&a;
y=&l;
z=&b;
w=&p;
printf("\n enter lenght and breadth of rectangle=");
scanf("%d%d",&*y,&*z);
*x=*y**z;
*w=2*(*y+*z);
printf("\n area=%d",*x);
printf("\n perimeter=%d",*w);
getch();
}
