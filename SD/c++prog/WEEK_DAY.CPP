/* 		         surya rules			*/

/*  printing the day of the week using two bytes only   */

/* 		the program is working fine		*/



#include"stdio.h"
#include"conio.h"
#include"graphics.h"
#include"dos.h"
#include"string.h"
#include"math.h"
#include"alloc.h"
#include"ctype.h"

int convert(int mm,int dd,int yy)
{
	long ndays ;	/* no.of days from start of 1900 */
	long ncycles;	/* number of four year cycles beyond 1900 */
	int nyears;	/* number of years beyond last 4  year cycle */
	int day;	/* day of the week */

	/* numerical conversions */
	ndays=(long)(30.42*(mm-1))+dd; /* aprox day of the year */
	if(mm==2) ++ndays; /* adjust for february */
	if(mm>2 && mm<8) --ndays; /* adjust for march -july */
	if(yy%4==0 && mm>2) ++ndays; /* adjust for leap year */
	ncycles=yy/4; /* 4 cycles beyond 1900 */
	ndays+=ncycles*1461; /* add days for 4 year cycles */
	nyears=yy%4; /* years beyond last 4 year cycle */
	if(nyears>0)
		ndays+=365*nyears+1; /* add days for years beyond last 4 year cycle */
	if(ndays>59) --ndays; /* adjust for 1900 -> not a leap year */

	day=ndays%7;

	return(day);
}



void main()
{
	int mm,dd,yy;
	int day_of_week;
	clrscr();
	struct details
	{
		unsigned month:4;
		unsigned day:5;
		unsigned year:7;
	};

	struct details date;

	static char *weekday[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	static char *month[]={"january","february","march","april","may","june","july","august","september","october","november","december"};

	printf("enter birthdate (mm/dd/yy): ");
	scanf("%d %d %d",&mm,&dd,&yy);

	date.month=mm;
	date.day=dd;
	date.year=yy-1900;
	day_of_week=convert(date.month,date.day,date.year);
	printf("\n\n");
	printf("%s %s %d ,%d\n",weekday[day_of_week],month[date.month-1],date.day,date.year+1900);

	getch();

}


