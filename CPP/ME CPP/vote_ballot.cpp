#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class ballot
{
int vote[100];
int const_no[10];
char name[10][20];
int x,y,z,r;
public:
void get();
void display();
void elect();
};

void ballot::get()
{
int i;
cout<<"Enter no of candidates are contesting:";
cin>>x;
for(i=1;i<=x;i++)
{
cout<<"Enter contestant "<<i<<" name:";
cin>>name[i];
const_no[i]=0;
}
}

void ballot::elect()
{
int k,j,total=0;
r=0;
cout<<"Enter no of vote polled:";
cin>>y;
for(j=1;j<=y;j++)
{
cout<<"Enter vote"<<j<<" :";
cin>>vote[j];
z=0;
for(k=1;k<=x;k++)
{
	if(vote[j]==k)
			z=vote[j];
}
if(z!=0)
	const_no[z]++;
else
	r++;
}
for(j=1;j<=x;j++)
	total=total+const_no[j];
total+=r;
if(total!=y)
	cout<<"\nWrong entries";
}

void ballot::display()
{
int k;
cout<<"\nTotal contestant:"<<x;
cout<<"\nTotal vote polled:"<<y;
cout<<"\nInvalid votes:"<<r;
for(k=1;k<=x;k++)
	cout<<"\n"<<name[k]<<":"<<const_no[k];
}

int main()
{
ballot b;
b.get();
b.elect();
b.display();
return 0;
}
