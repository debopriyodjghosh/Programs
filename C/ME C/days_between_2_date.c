// A Program to find the days between two date.

#include<stdio.h>

int mon[]={31,28,31,30,31,30,31,31,30,31,30,31};

int lep_y(int y)
{
	if(((y%4==0)&&(y%100!=0))||(y%400==0))
	 return 1;
	else
	 return 0;
}

main()
{
	int d1,d2,m1,m2,y1,y2,days=0,i;
	printf("Enter the First DATE:");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("Enter the Second DATE:");
	scanf("%d%d%d",&d2,&m2,&y2);
	for(i=y1;i<y2;i++)
	 if(lep_y(i))
	  days=days+366;
	 else
	  days=days+365;
	for(i=0;i<m1-1;i++)
	 days=days-mon[i];
	if((lep_y(y1))&&(m1>2))
	 days=days-1;
	days=days-d1;
	for(i=0;i<m2-1;i++)
	 days=days+mon[i];
	if((lep_y(y2))&&(m2>2))
	 days=days+1;
	days=days+d2;
	printf("diff=%d",days);
}
