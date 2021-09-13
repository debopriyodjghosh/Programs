
#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int leapyear(int);
	void main()
		  {
   		int dd,mm,yyyy;
   		unsigned long int calday(int,int,int),day1,day2;
   		void chackdate(int,int,int);

   		clrscr();

			printf("\nEnter the 1st date:(dd-mm-yyyy)");
			scanf("%d-%d-%d",&dd,&mm,&yyyy);
			chackdate(dd,mm,yyyy);
			day1=calday(dd,mm,yyyy);

			printf("\nEnter the 2nd date:(dd-mm-yyyy)");
   		scanf("%d-%d-%d",&dd,&mm,&yyyy);
   		chackdate(dd,mm,yyyy);
   		day2=calday(dd,mm,yyyy);

   		printf("\n\nDIFFERENCE BETWEEN TWO DATE=%lu days.",day2-day1);

   		getch();
  	     }

 	unsigned long int calday(int dd,int mm,int yyyy)
  	     {
   		unsigned long int day=0,i;
   		int leapyear(int);
			int month_day(int ,int );

   		for(i=1;i<=yyyy-1;i++)
     			day=day+365+leapyear(i);
   		for(i=1;i<mm;i++)
     			day=day+month_day(yyyy,i);
   		day=day+dd;
   		
return(day);
  	     }


 	int mounth_day(int y,int x)
  	    {
   		if(x==2)
    		        return(28+leapyear(y));
   		else if((x<8&&x%2!=0)||(x>=8&&x%2==0))
    		        return(31);
   		else
    		        return(30);
  	    }


 	int leapyear(int i)
  	    {
   		if((i%100!=0&&i%4==0)||(i%400==0))
     		        return(1);
   		else
     		        return(0);
  	    }

 	void chackdate(int d,int m,int y)
  	    {
    		if(d<=0||m<=0||m>12||y<=0)
     		      {
      			printf("\nIt is invalid date.");
      			getch();
      			exit(0);
     		      }
    		else if(d>28+leapyear(y)&&m==2)
     		      {
      			printf("\nIt is invalid date.");
      			getch();
      			exit(0);
     		      }
    		else if(d>31&&((m<8&&m%2!=0)||m==8||(m>8&&m%2==0)))
     		     {
      			printf("\nIt is invalid date.");
      			getch();
      			exit(0);
     		     }
    		else if(d>30&&((m<8&&m%2==0)||(m>8&&m%2!=0)))
     		     {
      			printf("\nIt is invalid date.");
      			getch();
      			exit(0);
     		     }
    		else
     			printf("\nIt is valid date.");

 	      }
