#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
void cleap(long int *y,long int *d)
{
 long int c=0,e=0;
 long int s=0,i=1;
 *d=0;
 s=*y-1;
 for(i=1;i<*y;i++)
 {
   if(i%100==0)
   {
     if(i%400==0)
     c++;
   }
   else
   {
     if(i%4==0)
     e++;
   }
 }
 *d=(s*365+c+e)%7;
}
void leap(long int *y,int *d1)
{
  *d1=28;
  if(*y%100==0)
  {
   if(*y%400==0)
   *d1=29;
  }
  else
  {
    if(*y%4==0)
    *d1=29;
  }
}
void month(int *m1)
{
  switch(*m1)
  {
  case 1:
	 printf("\n\n\t\t\t JANUARY");
	 break;
  case 2:
	 printf("\n\n\t\t\t FEBRUARY");
	 break;
  case 3:
	 printf("\n\n\t\t\t MARCH");
	 break;
  case 4:
	 printf("\n\n\t\t\t APRIL");
	 break;
  case 5:
	 printf("\n\n\t\t\t MAY");
	 break;
  case 6:
	 printf("\n\n\t\t\t JUNE");
	 break;
  case 7:
	 printf("\n\n\t\t\t JULY");
	 break;
  case 8:
	 printf("\n\n\t\t\t AUGUST");
	 break;
  case 9:
	 printf("\n\n\t\t\t SEPTEMBER");
	 break;
  case 10:
	 printf("\n\n\t\t\t OCTOBER");
	 break;
  case 11:
	 printf("\n\n\t\t\t NOVEMBER");
	 break;
  case 12:
	 printf("\n\n\t\t\t DECEMBER");
	 break;
  }
}
void date(int *count,int *d1,int *m,long int *d,long int *y)
{
  int day=31,d2=1,k=1,g=0;
  int m1=0;
  m1=*m;
  clrscr();
  textcolor(7);
  clrscr();
  *count=-1;
  day=31;
  for(k=1;k<=*m;k++)
  {
    *count=-1;
    day=31;
    if(k==2)
    day=*d1;
    if(k==4||k==6||k==9||k==11)
    day=30;
    if(k==*m)
    {
    textcolor(15);
    cprintf("\n\n                       CALENDER OF %ld",*y);
    month(&m1);
    }
      if(k==*m)
      {
	 printf("\n\n\n\t");
	 printf("MON\tTUE\tWED\tTHU\tFRI\tSAT\t");
	 textcolor(4);
	 cprintf("SUN");
	 printf("\n\n\n\n");
      }
   for(g=0;g<=*d;g++)
   {
     if(k==*m)
     printf("\t");
     *count=*count+1;
   }
   for(d2=1;d2<=day;d2++)
   {
     if(*count==6&&k==*m)
     {
       textcolor(4);
       cprintf("%d",d2);
     }
     if(*count==7)
     {
       if(k==*m)
       printf("\n\n\t");
       *count=0;
     }
     if(*count!=6&&k==*m)
     {
       printf("%d",d2);
       printf("\t");
     }
    *count=*count+1;
  }
  *d=*count;
 }
}
getkey()
{
  union REGS i,o;
  while(!kbhit())
  ;
  i.h.ah=0;
  int86(22,&i,&o);
  return(o.h.ah);
}
void main()
{
    long int y,d=0;
    int m=1,d1=28,count=-1;
    int ch;
    clrscr();
    printf("\n\n\t\tENTER A YEAR TO GENERATE THE CALENDER:");
    scanf("%ld",&y);
    cleap(&y,&d);
    date(&count,&d1,&m,&d,&y);
    while(1)
    {
    printf("\n\n\t\t1.PRESS LOWER ARROW KEY FOR NEXT MONTH\n\n\t\t2.PRESS UPPER ARROW KEY FOR PREVIOUS MONTH\n\n\t\t3.PRESS RIGHT ARROW KEY FOR NEXT YEAR\n\n\t\t4.PRESS LEFT ARROW KEY FOR PREVIOUS YEAR");
    {
      textcolor(6);
      cprintf("\n                                        5.PRESS 5 FOR ANOTHER YEAR");
    }
    printf("\n\n\t\t6.EXIT");
    ch=getkey();
    switch(ch)
    {
     case 80:
	     m=m+1;
	     if(m==13)
	     {
	       y=y+1;
	       m=1;
	     }
	     cleap(&y,&d);
	     leap(&y,&d1);
	     date(&count,&d1,&m,&d,&y);
	     break;
     case 72:

	     m=m-1;
	     if(m==0)
	     {
	     y=y-1;
	     m=12;
	     }
	     cleap(&y,&d);
	     leap(&y,&d1);
	     date(&count,&d1,&m,&d,&y);
	     break;
     case 77:
	     y=y+1;
	     cleap(&y,&d);
	     leap(&y,&d1);
	     date(&count,&d1,&m,&d,&y);
	     break;
     case 75:
	     y=y-1;
	     cleap(&y,&d);
	     leap(&y,&d1);
	     date(&count,&d1,&m,&d,&y);
	     break;
     case 6:
	     printf("\n\n\t\tENTER A YEAR TO GENERATE THE CALENDER:");
	     scanf("%ld",&y);
	     m=1;
	     cleap(&y,&d);
	     date(&count,&d1,&m,&d,&y);
	     break;
     case 7:
	    exit(0);

     }
   }
}