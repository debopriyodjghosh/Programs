	/*sum of km,mtr,cm  using structure*/

#include<stdio.h>
#include<conio.h>
struct distance
{
int k,m,c;
};
void main()
{
struct distance d1,d2,d3;
clrscr();
printf("enter km,mtr and cm of first distance=");
scanf("%d%d%d",&d1.k,&d1.m,&d1.c);
printf("enter km,mtr and cm of second distance=");
scanf("%d%d%d",&d2.k,&d2.m,&d2.c);
d3.k=d1.k+d2.k;
d3.m=d1.m+d2.m;
d3.c=d1.c+d2.c;
if(d3.c>=100)
{
d3.c=d3.c-100;
d3.m++;
}
if(d3.m>=1000)
{
d3.m=d3.m-1000;
d3.k++;
}
printf("\n total distance is=");
printf("%dkm %dmetre %dcm",d3.k,d3.m,d3.c);
getch();
}