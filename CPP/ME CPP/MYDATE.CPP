//age calculator............
#include<iostream.h>
#include<conio.h>
class MyDate
{
  public:
	   int dd,mm,yy;
	   friend int getAge(MyDate,MyDate) ;
};
int getAge(MyDate t1,MyDate t2)
{
  int cy,cm,cd;
  if(t2.yy<t1.yy)
  {
     cout<<"\nInvalid Year.....";
     return (-1);
  }
  if(t2.dd<t1.dd)
  {
    cd=t2.dd+30-t1.dd;
    t1.mm++;
  }
  else
  {
    cd=t2.dd-t1.dd;
  }
  if(t2.mm<t1.mm)
  {
     cm=t2.mm+12-t1.mm;
     t1.yy++;
  }
  else
  {
     cm=t2.mm-t1.mm;
  }
  cy=t2.yy-t1.yy;
  cout<<"\nAge="<<cy<<" years "<<cm<<" months "<<cd<<" days";
  int age=((cy*12)+cm)*30+cd;
  return age;
}
void main()
{
  MyDate ob1,ob2;
  int age;
  float years;
  clrscr();
  cout<<"\nEnter your Age---->";
  cout<<"\nEnter years:" ;
  cin>>ob1.yy;
  cout<<"\nEnter months:" ;
  cin>>ob1.mm;
  cout<<"\nEnter day:";
  cin>>ob1.dd;
  cout<<"\nEnter current date--->";
  cout<<"\nEnter years:" ;
  cin>>ob2.yy;
  cout<<"\nEnter months:" ;
  cin>>ob2.mm;
  cout<<"\nEnter day:";
  cin>>ob2.dd;
  age=getAge(ob1,ob2);
  years=(age/365)+1;
  cout<<"\nThe age in years format:"<<years<<" years";
  getch();
}