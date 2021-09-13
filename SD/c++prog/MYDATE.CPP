/*ok.....<2010 second day Qno.1> Design a class named mydate.
initialize objects after validating that the integer representing
month is between 1 and 12 and checking that the day part of the
date is within the correct range for a month.Write suitable memeber
functions for doing the following:comparing two dates for equality;
obtaining the next day from a given date;obtaining the previous
day from a given date.*/

#include<iostream.h>
#include<conio.h>
#include<process.h>

class mydate
{
 int day,month,year;
 public:
 mydate()
 {
  day=0;
  month=0;
  year=0;
 }

  void valid_date_in();
int equality(mydate m1)
  {
   if((day==m1.day) && (month==m1.month) && (year==m1.year))
     return(1);
   else
     return(0);
  }

 void next_dt()
 {
  cout<<"\nThe next date of the given date is:";
  int f=0;
  if(year%100==0)
    if(year%400==0)
      f=1;
  else if(year%4==0)
      f=1;
  if(day==31 && month==12)
     cout<<"01"<<" / 01 / "<<year+1;
  else if(((month==1 || month==3 || month==5 || month==7 || month==8 || month==10 ) && day==31) || (day==30 && (month==4 || month==6 || month==9 || month==11)) || (month==2  && f==0 && day==28) || (month==2  && f==1 && day==29))
     cout<<"01 / "<<month+1<<" / "<<year;
  else
    cout<<day + 1 <<" / "<< month <<" / "<<year;
  getch();
  }

void prev_dt()
 {
  cout<<"\nThe previous date of the given date is:";
  int f=0;
  if(year%100==0)
    if(year%400==0)
      f=1;
  else if(year%4==0)
      f=1;

  if(day==1 && month==1)
     cout<<"31"<<" / 12 / "<<year-1;
  else if(month==3 && day==1)
     {
     if (f==0)
       cout<<"28 / 02"<<" / "<<year;
     else
       cout<<"29 / 02"<<" / "<<year;
     }
  else if((month==5 || month==7 || month==10 || month==12) && day==1)
     cout<<"30 / "<<month-1<<" / "<<year;
  else if (day==1 && (month==2 || month==4 || month==6 || month==8 || month==9 || month==11))
     cout<<"31 / "<< month - 1 <<" / "<<year;
  else
     cout<<day - 1 <<" / "<< month <<" / "<<year;
  getch();
  }
};

void mydate::valid_date_in()
 {
   int d,m,y,f1=0;
   do
   {
   cout<<"\nenter day: ";
   cin>>day;
   cout<<"\nenter month: ";
   cin>>month;
   cout<<"\nenter year: ";
   cin>>year;
   d=day;
   m=month;
   y=year;
   if(m>=1 && m<=12)
     {
       if((m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) && d>=1 && d<=31)
	  {
	  cout<<"\nDate is valid\n";
	  break;
	  }
       else if((m==4 || m==6 || m==9 || m==11) && d>=1 && d<=30)
	  {
	  cout<<"\nDate is  valid\n";
	  break;
	  }
       else if(m==2)
	     {
	       if(y%100==0)
		  if(y%400==0)
		      f1=1;
	       else if(y%4==0)
		      f1=1;
	       if(f1==1 && d>=1 && d<=29)
		   {
		   cout<<"\nDate is valid\n";
		   break;
		   }
	       else if(f1==0 && d>=1 && d<=28)
		   {
		    cout<<"\ndate is valid\n";
		    break;
		   }
	       else
		   cout<<"\nDate is not valid\n";
		}
       else
		cout<<"\nDate is not valid\n";
      }//end of outer if body
     else
	  cout<<"\nDate is not valid\n";
     getch();
    } while(1);

   }//end of function



  void main()
    {
     int ch;
     mydate obj1,obj2;
     do
     {
     clrscr();
     cout<<"1. Enter new date \n2. Display Next date\n3. Display Previous date\n4. Check Equality with another date\n5. Exit\n\n Enter your choice:";
     cin>>ch;
     switch(ch)
      {
      case 1:
	 obj1.valid_date_in();
	 break;
      case 2:
	 obj1.next_dt();
	 break;
      case 3:
	 obj1.prev_dt();
	 break;
      case 4:
	   obj2.valid_date_in();
	   if (obj1.equality(obj2))
	     cout<<"\nTwo dates are equal...\n";
	   else
	     cout<<"\nDates are unequal....\n";
	   getch();
	  break;
     case 5:
	 exit(0);
      }
     } while(1);
 }