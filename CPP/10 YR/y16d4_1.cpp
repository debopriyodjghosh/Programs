#include<iostream>
#include<stdlib.h>
using namespace std;
class sit
{
	int a[14][7];
	int tt;
	int r;
	char s;
	public:
		sit()
		{
			for(int i=1;i<=13;i++)
			{
				for(int j=1;j<=6;j++)
				{
					a[i][j]=0;
				}
			}
		}
		void TicketType();
		void AvailSit();
		void DesiredSit();
		void SittingPlan();
};
void sit::TicketType()
{
	cout<<"\n1.First Class Ticket\n2.Business Class Ticket\n3.Economy Class Ticket\nChoose Ticket Type:";
	cin>>tt;
	if(tt<1 || tt>3)
	{
		cout<<"\nInvalid Ticket Type!";
		exit(0);
	}
}
void sit::AvailSit()
{
	cout<<"A indicates that the seat is available\nO indicates that the seat is Occupied!\n\n";
	if(tt==1)
	{
		cout<<" \tA\tB\tC\tD\tE\tF\n\n";
		for(int i=1;i<=2;i++)
		{
			cout<<i<<"\t";
			for(int j=1;j<=6;j++)
			{
				if(a[i][j]==0)
					cout<<"A\t";
				else
					cout<<"O\t";
			}
			cout<<"\n";
		}
	}
	else if(tt==2)
	{
		cout<<" \tA\tB\tC\tD\tE\tF\n\n";
		for(int i=3;i<=7;i++)
		{
			cout<<i<<"\t";
			for(int j=1;j<=6;j++)
			{
				if(a[i][j]==0)
					cout<<"A\t";
				else
					cout<<"O\t";
			}
			cout<<"\n";
		}
	}
	else if(tt==3)
	{
		cout<<" \tA\tB\tC\tD\tE\tF\n\n";
		for(int i=8;i<=13;i++)
		{
			cout<<i<<"\t";
			for(int j=1;j<=6;j++)
			{
				if(a[i][j]==0)
					cout<<"A\t";
				else
					cout<<"O\t";
			}
			cout<<"\n";
		}
	}
}
void sit::DesiredSit()
{
		AvailSit();
		cout<<"\nChoose Your Desired Row:";
		cin>>r;
		cout<<"\nChoose Your Desired Seat Number:";
		cin>>s;
		a[r][int(s)-64]=1;
		cout<<"\nSit Assigned Successfully!";
}
void sit::SittingPlan()
{
	cout<<"\nAt Present Sitting Plan is:\n";
	cout<<" \tA\tB\tC\tD\tE\tF\n\n";
	for(int i=1;i<=13;i++)
	{
		cout<<i<<"\t";
		for(int j=1;j<=6;j++)
		{
			if(a[i][j]==0)
				cout<<"A\t";
			else
				cout<<"O\t";
		}
		cout<<"\n";
	}
}
int main()
{
	sit s;
	int c;
	do
	{
		s.SittingPlan();
		s.TicketType();
		s.DesiredSit();
		s.SittingPlan();
		cout<<"Do you want to continue?Press 1...";
		cin>>c;
	}while(c==1);
	return 0;
}
