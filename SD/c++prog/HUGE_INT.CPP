/*ok... 2010 1st day Qno.6> create a class hugeinteger which contains a
40 element array to store a huge integer containing at most 40 digits.
Provide methods inputhugeinteger(),outputhugeinteger() and
addhugeinteger().Store integers as large as 20 digits.
Invoke addhugeinteger().Write a display() function to print the result.*/


#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class hugeinteger
  {
  int a[40],n;
  public:
     hugeinteger();
     void inputhugeinteger();
     void outputhugeinteger();
     hugeinteger addhugeinteger(hugeinteger m);
     void display();
  };

 hugeinteger::hugeinteger()
   {
   for(int i=0;i<40;i++)
      a[i]=0;
   }

  void hugeinteger::inputhugeinteger()
  {
     int x,i=0;
     char *str;
     while(1)
     {
     cout<<"\n\nInput a huge number of more than 20 digits\n\n";
     gets(str);
     n=strlen(str);
     if(n>=20 && n<=40)
       {
      while(*str != '\0')
	 {
	  a[i]=*str - 48;
	  str++;
	  i++;
	  }
	 break;
       }
     else
	  {
	   cout<<"\n\n Wrong entry\n";
	   getch();
	  }
     }//end of while
   }//end of function

  void hugeinteger::outputhugeinteger()
     {
     cout<<"\n\nOne hugeinteger is:\n\n";
     for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
     getch();
     }
  hugeinteger hugeinteger::addhugeinteger(hugeinteger obj)
    {
      int i,j,c,l,s;
      hugeinteger temp;
      if ( n > obj.n)
	  l=n+1;
      else
	  l=obj.n+1;
      temp.n=l;
      for(i=n,j=obj.n,c=0;i>=0 && j>=0;i--,j--)
	 {
	  s=a[i] + obj.a[j] + c;
	  temp.a[l]=s%10;
	  c=s/10;
	  l--;
	 }
      while (i>=0)
	 {
	  s=a[i] + c;
	  temp.a[l]=s%10;
	  c=s/10;
	  l--;
	  i--;
	 }
      while (j>=0)
	 {
	  s=obj.a[j] + c;
	  temp.a[l]=s%10;
	  c=s/10;
	  l--;
	  j--;
	 }
      return(temp);
   }

  void hugeinteger::display()
   {
    for(int i=0;i<n;i++)
       cout<<a[i]<<" ";
   }

 void main()
 {
   clrscr();
   hugeinteger h1,h2,h3;
   h1.inputhugeinteger();
   h2.inputhugeinteger();
   h1.outputhugeinteger();
   h2.outputhugeinteger();
   h3=h1.addhugeinteger(h2);
  cout<<"\n\nThe addition of two huge integer is:\n";
  h3.display();
  getch();
 }
