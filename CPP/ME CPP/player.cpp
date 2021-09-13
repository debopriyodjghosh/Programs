#include<iostream>
#include<string.h>
using namespace std;


class player
{
private:
int pid;
char pname[100];
public:
void get_data();
void put_data();
};

 class batsman:virtual public player
{
private:
int run;
public:
void batsman_read();
void batsman_disp();
};


 class bowler:virtual public player
{
private:
int wicket;
public:
bowler()
{
wicket=0;
}
void over();
};

class allrounder:public batsman,public bowler
{
private:
int batman;
int bowler;
public:
void allround();
};

void player::get_data()
{
cout<<"\n enter player id: ";
cin>>pid;
cout<<"\n enter player name: ";
cin>>pname;
}

void player:: put_data()
{
cout<<"\n player id is: "<<pid;
cout<<"\n player is: "<<pname;
}


void batsman::runner()
{
 cout<<"\n enter the run: ";
 cin>>run;
 cout<<"run is: "<<run;
 if(run==50)
 {
  cout<<"\n half century";
 }
else if(run==100)
 {
  cout<<"\n full century";
 }
 else
 {
 if(run==0)
 {
   cout<<"\n no runs";
 }
 }
}



void bowler::over()
{
 cout<<"\n how many wickets are get: ";
 cin>>wicket;
 if(wicket>10)
 {
  cout<<"\n not valid";
 }
 else
 {
if(wicket>0)
{
cout<<"\n wickets are: "<<wicket;
}
else
{
cout<<"\n no loss wicket";
}
}
}

void allrounder::allround()
{
    /*cout<<"\n enter player id: ";
    cout<<"\n enter plyar name: ";
    cout<<put_data();*/
 cout<<"\n number of batsman: "<<batman;
 cout<<"\n number of bowlers: "<<bowler;
 //cout<<"\n number of allrounder: "<<
}



int main()
{
int x;
allrounder p;
p.get_data();
p.put_data();
do
{
cout<<"\n 1. batsman 2. bowler 3. allrounder 4. exit";
cout<<"\n enter your choice: ";
cin>>x;
switch(x)
{
 case 1:
 p.runner();
 break;
 case 2:
 p.over();
 break;
 case 3:
 p.allround();
 break;
}
}
while(x!=4);
return 0;
}
