#include<stdio.h>

void days(int,int,int,int,int,int);
int month(int,int);
int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};

 main()
  {
  int day1,month1,year1,day2,month2,year2;
  printf("Enter first date(dd/mm/yyyy) : \n");
  printf("Enter Day: ");
  scanf("%d",&day1);
  printf("Enter Month: ");
  scanf("%d",&month1);
  printf("Enter year: ");
  scanf("%d",&year1);
  printf("\nEnter second date(dd/mm/yyyy) : \n");
  printf("Enter Day: ");
  scanf("%d",&day2);
  printf("Enter Month: ");
  scanf("%d",&month2);
  printf("Enter year: ");
  scanf("%d",&year2);
  if(year2>=year1)
     days(year1,year2,month1,month2,day1,day2);
  else
     days(year2,year1,month2,month1,day2,day1);
  return 0;
  }

 void days(int y1,int y2,int m1,int m2,int d1,int d2)
  {
  int count=0,i;
  for(i=y1;i<y2;i++)
    {
      if(i%4==0)
         count=count+366;
      else
         count=count+365;
    }
  count=count-month(m1,y1);
  count=count-d1;
  count=count+month(m2,y2);
  count=count+d2;
  if(count<0)
      count=count*-1;
  printf("The no. of days b/w the 2 dates = %d days",count);
  }

 int month(int a,int yy)
  {
    int x=0,c;
    for(c=0;c<a-1;c++)
    {
       if(c==1)
       {
         if(yy%4==0)
            x=x+29;
         else
            x=x+28;
      }
    else
         x+=mon[c];
    }
    return(x);
  }


