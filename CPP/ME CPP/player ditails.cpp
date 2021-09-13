#include<iostream>
#include<string.h>

using namespace std;
class player
{
private:
int player_id;
char player_name[100];
public:
void player_read();
void player_disp();
};

class batsman: virtual public player
{
private:
int run;
public:
void batsman_read();
void batsman_display();
};

class bowler: virtual public player
{
private:
int wicket;
public:
void bowler_read();
void bowler_display();
};

class allrounder: public batsman, public bowler
{
private:
int batting_avg, wicket_avg;
public:
void allrounder_read();
void allrounder_display();
};

void player::player_read()
{
cout<<"\n enter player id: ";
cin>>player_id;
cout<<"\n enter player name: ";
cin>>player_name;
}

void player::player_disp()
{
cout<<"\n player id is: "<<player_id;
cout<<"\n player name is: "<<player_name;
}

void batsman:: batsman_read()
{
cout<<"\n enter the runs of the batsman: ";
cin>>run;
}

void batsman:: batsman_display()
{
cout<<"\n the runs of the batsman are: "<<run;
}

void bowler:: bowler_read()
{
cout<<"\n enter the wickets of bowler: ";
cin>>wicket;
}

void bowler:: bowler_display()
{
cout<<"\n the wickets of bowler are: "<<wicket;
}

void allrounder:: allrounder_read()
{
cout<<"\n enter the batting average of allrounder: ";
cin>>batting_avg;
cout<<"\n enter the wicket average of allrounder: ";
cin>>wicket_avg;
}

void allrounder:: allrounder_display()
{
cout<<"\n the batting average of allrounder is: "<<batting_avg;
cout<<"\n the wicket average of allrounder is: "<<wicket_avg;
}

int main()
{
allrounder p;
p.player_read();
p.player_disp();
p.batsman_read();
p.batsman_display();
p.bowler_read();
p.bowler_display();
p.allrounder_read();
p.allrounder_display();
return 0;
}
