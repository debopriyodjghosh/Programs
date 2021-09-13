//string sorting (according to names sorting) using bubble sort technique...
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
class a
      {
       private:
	 char name[20];
       public:
	 void getdata();
	 void display();
	 int operator > (a );
      };
void a::getdata()
{
 cout<<endl<<" Enter a name: ";
 fflush(stdin);
 cin>>name;
}
void a::display()
{
 cout<<endl<<name<<endl;
}
int a::operator > (a m)
{
 int c=strcmpi(name,m.name);
 if(c>0)
   return 1;
 else
   return 0;
}
void main(void)
{
 a mn[20],temp;
 int i,j,n;
 clrscr();
 cout<<endl<<" Enter the no. of terms: ";
 cin>>n;
 cout<<endl<<endl;
 for(i=0;i<n;i++)
  {
   mn[i].getdata();
   cout<<endl;
  }
 cout<<endl<<endl<<" Your Entered Sequence: "<<endl;
 for(i=0;i<n;i++)
     mn[i].display();
 for(i=1;i<=n;i++)
  {
   for(j=0;j<n-1;j++)
    {
     if(mn[j]>mn[j+1])
      {
       temp=mn[j];
       mn[j]=mn[j+1];
       mn[j+1]=temp;
      }
    }
  }
 cout<<endl<<endl<<endl<<" The Sorted Sequence:->"<<endl;
 for(i=0;i<n;i++)
     mn[i].display();
 getch();
}


