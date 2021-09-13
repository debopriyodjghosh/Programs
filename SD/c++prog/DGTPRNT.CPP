/*ok... 2010 2nd day 3) Write an object oriented programming in c++ to
read an integer from keyboard and print it digit by digit  in English
words using inline member function. For example, consider the no. 758
as seven five eight */

#include<iostream.h>
#include<conio.h>
#include<process.h>

char *x[]={ "Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine" };

class number
{
  int n;
  public:
  inline void getdata()
    {
    long int z;

    cout<<"\n\tEnter a number (maximum 32767): ";
    cin>>z;
    if(z > 32767 || z < 0 )
      {
	 cout<<z<<" is out of range of integer";
	 getch();
	 exit(0);
      }
    n=z;
    int a,flag=0;
     a=n/10000;
    if(a>0)
       {
       cout<<"\n"<<x[a]<<"  ";
       flag=1;
       }
     n=n%10000;
     a=n/1000;
     if(flag==1 || a>0)
       {
       cout<<x[a]<<"  ";
       flag=1;
       }
    n=n%1000;
    a=n/100;
    if(flag==1 || a>0)
       {
       cout<<x[a]<<"  ";
       flag=1;
       }
    n=n%100;
    a=n/10;
    if(flag==1 || a>0)
       {
       cout<<x[a]<<"  ";
       flag=1;
       }
    a=n%10;
    if(flag==1 || a>0)
       {
       cout<<x[a]<<"  ";
       flag=1;
       }
    }//end of inline function
};

void main()
{
  number obj;
  clrscr();
  obj.getdata();
  getch();
}
