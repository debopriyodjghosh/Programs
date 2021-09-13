#include<stdio.h>
#include<conio.h>
#include<string.h>
void main(void)
{
 unsigned int l;
 int k[10],i=0;
 char m[10][50],n[10][50],o[10][50];
 strcpy(m[0],"zero");
 strcpy(m[1],"one");
 strcpy(m[2],"two");
 strcpy(m[3],"three");
 strcpy(m[4],"four");
 strcpy(m[5],"five");
 strcpy(m[6],"six");
 strcpy(m[7],"seven");
 strcpy(m[8],"eight");
 strcpy(m[9],"nine");
 strcpy(n[0],"zero");
 strcpy(n[2],"twenty");
 strcpy(n[3],"thirty");
 strcpy(n[4],"forty");
 strcpy(n[5],"fifty");
 strcpy(n[6],"sixty");
 strcpy(n[7],"seventy");
 strcpy(n[8],"eighty");
 strcpy(n[9],"ninety");
 strcpy(o[0],"ten");
 strcpy(o[1],"eleven");
 strcpy(o[2],"twelve");
 strcpy(o[3],"thirteen");
 strcpy(o[4],"fourteen");
 strcpy(o[5],"fifteen");
 strcpy(o[6],"sixteen");
 strcpy(o[7],"seventeen");
 strcpy(o[8],"eighteen");
 strcpy(o[9],"ninteen");
 clrscr();
 printf("\n\nEnter an integer: ");
 scanf("%u",&l);
 while(l!=0)
  {
   k[i]=l%10;
   i++;
   l=l/10;
  }
 printf("\n\nYOUR ENTERED INTEGER IN WORD: ");
 switch(i)
  {
   case 1:
    {
     printf("%s",m[k[i-1]]);
     break;
    }
   case 2:
    {
     tatun2:
     if(k[i-1]==1)
      printf("%s",o[k[i-2]]);
     else
      {
       printf("%s",n[k[i-1]]);
       printf("  %s",m[k[i-2]]);
      }
     break;
    }
   case 3:
    {
     tatun3:
     printf("%s hundred ",m[k[i-1]]);
     i--;
     goto tatun2;
    }
   case 4:
    {
     printf("%s thousand ",m[k[i-1]]);
     i--;
     goto tatun3;
    }
   case 5:
    {
     if(k[i-1]==1)
      printf("%s thousand ",o[k[i-2]]);
     else
      {
       printf("%s",n[k[i-1]]);
       printf("  %s thousand ",m[k[i-2]]);
      }
     i=i-2;
     goto tatun3;
    }
  }
 printf(".");
 getch();
}

