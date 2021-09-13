#include<stdio.h>
#include<conio.h>
void main()
{
	int d1,d2,m1,m2,y1,y2,d,m,y;       //initialize//
//takes the input date//
	printf("\nEnter the current days(dd/mm/yy):");
	printf("\nEnter the day:");
	scanf("%d",&d1);
    printf("\nEnter the month:");
	scanf("%d",&m1);
    printf("\nEnter the year:");
    scanf("%d",&y1);
	printf("\nEnter the previous day(dd/mm/yy):");
	printf("\nEnter the day:");
	scanf("%d",&d2);
	printf("\nEnter the month:");
	scanf("%d",&m2);
	printf("\nEnter the year:");
	scanf("%d",&y2);

	if(d1<d2)
	{
		if(m1==1||m1==3||m1==5||m1==7||m1==8||m1==10||m1==12)
		{
			d=d1+31-d2;
		    m2=m2-1;
		}
		else if(m1==4||m1==6||m1==9||m1==11)
		{
			d=d1+30-d2;
			m2=m2-1;
		}
		else
			if(m==2)   //cheak lear year//
			{
				if(y%400==0||y%100!=0&&y%4==0)
				{
					d=d1+29-d2;
					m2=m2-1;
				}
				else
					{
					d=d1+28-d2;
					m2=m2-1;
				}
			}
	}
       else
			d=d1-d2;
	if(m1<m2)
	{
		m=m1+12-m2;
	y1=y1-1;
	}
	else
	{
	m=m1-m2;
	}
	y=y1-y2;
//print the output//
	printf("\nThe difference date (dd/mm/yy):");
	printf("%d/%d/%d",d,m,y);
	getch();
}
