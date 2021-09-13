	/*sum of time using structure*/

#include<stdio.h>
#include<conio.h>
struct time
{
int h,m,s;
};
void main()
{

struct time t1,t2,t3;
clrscr();
printf("enter hr,min.,sec. of first duration");
scanf("%d%d%d",&t1.h,&t1.m,&t1.s);
printf("enter hr,min.,sec. of second duration");
scanf("%d%d%d",&t2.h,&t2.m,&t2.s);

t3.h=t1.h+t2.h;
t3.m=t1.m+t2.m;
t3.s=t1.s+t2.s;
if(t3.s>=60)
{
t3.s=t3.s-60;
t3.m++;
}
if(t3.m>=60)
{
t3.m=t3.m-60;
t3.h++;
}
printf("\n total time duration=");
printf("\n %dhour %dminut %dsecond",t3.h,t3.m,t3.s);
getch();

}
