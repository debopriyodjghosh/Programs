# include <stdio.h> 
# include <conio.h> 
# include <string.h>
#include<stdlib.h>
void main() 
{ 
 int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},flag; 
 char week[7][10] ;
 int date, mon, year, i, r, s = 0 ; 
 strcpy(week[0], "Sunday") ; 
 strcpy(week[1], "Monday") ; 
 strcpy(week[2], "Tuesday") ; 
 strcpy(week[3], "Wednesday") ; 
 strcpy(week[4], "Thursday") ; 
 strcpy(week[5], "Friday") ; 
 strcpy(week[6], "Saturday") ; 
 printf("Enter a valid date (dd/mm/yyyy) : ") ; 
 scanf("%d%d%d", &date, &mon, &year) ; 
 if( (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)) ) // checking for leep year
  flag = 1 ; 
 if(mon > 0 || mon < 13) // checking for valid date 
  if(date <= month[mon-1])
   printf("Valid date.");
  else
   if(date == 29 && mon == 2 && flag == 1) // checking fo valid date for leep year
    printf("Valid date.");
   else
   {
    	printf("Not valid date.");
   		exit(0);
   }
 else
 {
    printf("Not valid date.");
  	exit(0);
 }
 if(mon < 3 && flag == 1)
  s=-1;
 for(i = 0 ; i < mon - 1 ; i++) 
  s = s + month[i] ; 
 s = s + (date + year + (year / 4) - 2) ; 
 s = s % 7 ; 
 printf("\nThe day is : %s", week[s]) ; 
}
