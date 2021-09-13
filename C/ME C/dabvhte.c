
#include<stdio.h>
#include<conio.h>
			// header file declaration //
typedef struct				// definition of structure //
{
	int d,m,y;				// structure variable declaration //
}date;
date dob;
int yrchk (int);
int date_valid(date dob);			// prototype declaration //
void date_diff();
int  main()
{
 int a,s;				// integer variable declaration //
 char ch;				// character variable declaration //
 printf("\n\t\t *** Date validation & Difference between two dates ***");
 do
 {
printf("\n\n MENU:  1.Check a date valid or not\n\t2.Difference between two dates");
 	printf("\n enter your choice: ");
 	scanf("%d", &s);				// choice from user //
  	switch(s)						// calculations //
  	{
		case 1:
			 printf("\nEnter the date in (dd/mm/yyyy) format:");
 			 scanf("%d/%d/%d", & dob.d, &dob.m, &dob.y);
			 a=date_valid(dob);			// function call //
			 break;
		case 2:
			 date_diff();				// function call //
			 break;
		default:
			printf("invalid input");
	}
	printf("\n\ndo you want to continue?(y/n): "); // continuation loop //
	fflush(stdin);
	scanf("%c", &ch);
}while((ch=='y')|| (ch=='Y'));
printf("\n\n\n*** THANK YOU ***");
return (0);
}

int yrchk (int y)			// definition of yrchk function //
{
	int f=0;
	if (y%100 == 0)
	{
		if(y%400==0)
		{
			f=1;
		}
	}
	else
	{
		if(y%4==0)
		{
			f=1;
		}
	}
	return f;
}

int date_valid(date dob)		// definition of date_valid function //
{
 int x, f=0;
 if (dob.m <= 12)
 {
if(dob.m==1||dob.m==3||dob.m==5||dob.m==7||dob.m==8||dob.m==10||
dob.m==12)
	{
		if(dob.d <=0 || dob.d > 31)
		{
			f=1;
			printf("\nDate is wrong");
			return 0;
		}

	}
	else if (dob.m==2)
	{
		x = yrchk(dob.y);
		if (x == 1)
		{
			if(dob.d <= 0 || dob. d > 29)
			{
				f=1;
				printf("\nDate is wrong");
				return 0;
			}
		}
		else
		{
			if(dob.d <= 0 || dob.d > 28)
			{
				f=1;
				printf("\nDate is wrong");
				return 0;
			}
		}
	}
	else
	{
		if (dob.d <= 0 || dob.d > 30)
		{
			f=1;
			printf("Date is wrong");
			return 0;
		}
	}
}
 else
 {
	f=1;
	printf("\nMonth is wrong");
	return 0;
 }
 if (f!=1)
 printf("\nIt is a valid date");
 return 1;
}

void date_diff()			// definition of date_diff function //
{
	int p,q,t1,t2,t3;
	date d1,d2,d3;
	printf("\nEnter first date in (dd/mm/yy) format: ");
	scanf("%d/%d/%d",&d1.d,&d1.m,&d1.y);
	p=date_valid(d1);
	if(p==1)
	{
		printf("\nEnter last date in (dd/mm/yy) format: ");
		scanf("%d/%d/%d",&d2.d,&d2.m,&d2.y);
		q=date_valid(d2);
	}
	if(q==1)
	{
		if(d2.y>d1.y)
		{
			t1=d2.y;
			d2.y=d1.y;
			d1.y=t1;
			t2=d2.m;
			d2.m=d1.m;
			d1.m=t2;
			t3=d2.d;
			d2.d=d1.d;
			d1.d=t3;
		}
		if(d1.d<d2.d)
		{
			if(d1.m==d2.m && d1.y==d2.y)
			{
				d3.d=d2.d-d1.d;
			}
			else
			{
if(d1.m==1 || d1.m==3 || d1.m==5 || d1.m==7 || d1.m==8 || d1.m==10 || d1.m==12)
				{
					d3.d=d1.d+31-d2.d;
				}
				else if(d1.m==2)
				{
					if(d1.y%400==0 || d1.y%100==0 && d1.y%4==0)
					{
						d3.d=d1.d+29-d2.d;
					}
					else
					{
						d3.d=d1.d+28-d2.d;
					}
				}
				else
				{
					d3.d=d1.d+30-d2.d;
				}
				d1.m=d1.m-1;
			}
		}
		else
		{
			d3.d=d1.d-d2.d;
		}
		if(d1.m<d2.m)
		{
			if (d1.y==d2.y)
			{
				d3.m=d2.m-d1.m;
			}
			else
			{
				d3.m=d1.m+12-d2.m;
				d1.y=d1.y-1;
			}
		}
		else
		{
			d3.m=d1.m-d2.m;
		}
		d3.y=d1.y-d2.y;
		printf("\nDifference between two dates:%d/%d/%d",d3.d,d3.m,d3.y);
	}
	else
	{
		printf("\nDifference is not posible..");
	}

}

