#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
int check(char x[])
  {
  int i,j,l;
  l=strlen(x);
  for(i=0;i<l;i++)
    for(j=i+1;j<l;j++)
       {
	if(x[i]==x[j])
	   return (0);
       }
    return(1);
  }

int distinct(char x[],char y[])
  {
   int l1,l2,i,j;
   l1=strlen(x);
   l2=strlen(y);
   for(i=0;i<l1;i++)
   {
     for(j=0;j<l2;j++)
	{
	 if(x[i]==y[j])
	    return (0);
	}
   }
   return (1);
  }

void main()
{
int i,j;
long int l;
char x[3],y[4],z[10],t[4];
clrscr();
for(i=10;i<=99;i++)
  {
    itoa(i,x,10);
    if((check(x))==1)
      {
	 for (j=100;j<=999;j++)
	   {
	    itoa(j,y,10);
	     if((check(y))==1 && (distinct(x,y))==1)
		{
		   l=i * j;
		   ltoa(l,z,10);
		   ltoa(j/10,t,10);
		   if ((strlen(z))==5 && (check(z))==1 && y[2]==z[0] && (distinct(x,z))==1 && (distinct(t,z))==1)
		      printf("\n%d\t%d\t%s",i,j,z);
		} //end of if
	   }//end of inner for
       }//end of outer if
     }//end of outer for
  getch();

 }
