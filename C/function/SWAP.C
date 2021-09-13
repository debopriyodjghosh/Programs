	/*swapping using function*/

#include<stdio.h>
#include<conio.h>
int main()
{
void swap(int,int);
int a,b;
printf("enter two number=");
scanf("%d%d",&a,&b);
swap(a,b);
getch();
}
void swap(int x,int y)
{
int z;
z=x;
x=y;
y=z;
printf("\n value of a after swap is=%d",x);
printf("\n value of b after swap is=%d",y);
}
