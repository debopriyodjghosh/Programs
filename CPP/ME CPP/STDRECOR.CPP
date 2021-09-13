#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#define MAX 5
class table
{
  public:
	  char name[20],addrs[30];
	  int roll;
	  long int phn;
	  void newentry()
	   {
	     cout<<"\nEnter name:" ;
	     cin>>name;
	     cout<<"\nEnter address:";
	     cin>>addrs;
	     cout<<"\nEnter roll";
	     cin>>roll;
	     cout<<"\nEnter phone number:" ;
	     cin>>phn;
	   }
	   void showrecord()
	   {
	     cout<<"\n\nRoll:"<<roll<<"\tName:"<<name<<"\tPhone:"<<phn;
	     cout<<"\nAddress:"<<addrs;
	   }

};
class record : public table
{
   private:
	    int fs,ss,tot;
   public:
	    void setmarks()
	    {
	      cout<<"\nEnter the first semister marks:";
	      cin>>fs;
	      cout<<"\nEnter the second semester marks:";
	      cin>>ss;
	    }
	    void final()
	    {
	      tot=fs+ss;
	      cout<<"\nFirst sem Result:"<<fs;
	      cout<<"\nSecond sem Result:"<<ss;
	      cout<<"\nThe final result="<<tot;
	    }
	   void deletentry()
	   {
	     strcpy(name,'\0');
	     strcpy(addrs,'\0');
	     roll=0;
	     phn=0;
	   }
	   void modify(int t)
	   {
	     char c;
	     if(roll!=t)
	     {
	       cout<<"\nRecord not found....." ;
	       return;
	     }
	     cout<<"\nWant to modify name....(y/n)??" ;
	     cin>>c;
	     if(c=='y')
	     {
	       cout<<"\nEnter name again:" ;
	       cin>>name;
	     }
	     cout<<"\nWant to modify address....(y/n)??" ;
	     cin>>c;
	     if(c=='y')
	     {
	       cout<<"\nEnter address again:" ;
	       cin>>addrs;
	     }
	     cout<<"\nWant to modify marks....(y/n)??" ;
	     cin>>c;
	     if(c=='y')
	     {
	       cout<<"\nEnter first and second sem marks:" ;
	       cin>>fs>>ss;
	     }
	   }
};
void main()
{
  record ob[MAX];
  int i,d;
  clrscr();
  for(i=0;i<MAX;i++)
  {
    cout<<"\nEnter student record..." ;
    ob[i].newentry();
    ob[i].setmarks();
  }
  for(i=0;i<MAX;i++)
  {
    ob[i].showrecord();
    ob[i].final();
  }
  cout<<"\nWhich reord do u want to change?" ;
  cin>>i;
  if(i<0 || i>MAX-1)
    cout<<"\nNo record ...." ;
  else
  {
    cout<<"\nEnter the roll number whose record will be changed....." ;
    cin>>d;
    ob[i].modify(d);
  }
  for(i=0;i<MAX;i++)
  {
    ob[i].showrecord();
    ob[i].final();
  }
  cout<<"\nWhich reord do u want to delete?" ;
  cin>>i;
  if(i<0 || i>MAX-1)
    cout<<"\nNo record ...." ;
  else
  {
    ob[i].deletentry();
  }
  for(i=0;i<MAX;i++)
  {
    ob[i].showrecord();
    ob[i].final();
  }
}