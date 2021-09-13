#include<iostream>

using namespace std;
class times
{
	int h,m,s;
	public:
	times(){}
	times(int hour,int minute,int second)
	{
		h=hour;
		m=minute;
		s=second;
	}
	times operator+(times);
	times operator-(times);
	times operator++();
	times operator++(int);
	times operator--();
	times operator--(int);
	void display();
};
times times::operator+(times t)
{
	times temp;
	temp.s=(s+t.s)%60;
	temp.m=(s+t.s)/60;
	temp.h=(temp.m+t.m+m)/60;
	temp.m=(temp.m+t.m+m)%60;
	temp.h=temp.h+t.h+h;
	return temp;
}
times times::operator-(times t)
{
	times temp;
	if(s<t.s)
		s=s+60;
	if(m<t.m)
		m=m+60;
	temp.s=(s-t.s)%60;
	temp.m=(m-t.m)%60;
	temp.m=temp.m+((s-t.s)/60);
	temp.h=(h-t.h);
	temp.h=temp.h+((m-t.m)/60);
	return temp;
}
times times::operator++()
{
	times temp;
	temp.h=++h;
	temp.m=m;
	temp.s=s;
	return temp;
}
times times::operator++(int)
{
	times temp;
	temp.h=h++;
	temp.m=m;
	temp.s=s;
	return temp;
}
times times::operator--()
{
	times temp;
	temp.h=--h;
	temp.m=m;
	temp.s=s;
	return temp;
}
times times::operator--(int)
{
	times temp;
	temp.h=h--;
	temp.m=m;
	temp.s=s;
	return temp;
}
void times::display()
{
	cout<< h <<" hours "<< m <<" minutes "<< s <<" second \n";
}
int main()
{
	int hour1,hour2,minute1,minute2,second1,second2,ch,sel;
	times t1,t2,t3,t4,t5;
	cout<< "\n enter hour of t1 obj : ";
	cin>>hour1;
	cout<< "\n enter minute of t1 obj : ";
	cin>>minute1;
	cout<< "\n enter second of t1 obj : ";
	cin>>second1;
	t1=times(hour1,minute1,second1);
	t1.display();
	cout<< "\n enter hour of t2 obj : ";
	cin>>hour2;
	cout<< "\n enter minute of t2 obj : ";
	cin>>minute2;
	cout<< "\n enter second of t3 obj : ";
	cin>>second2;
	t2=times(hour2,minute2,second2);
	t2.display();
	do
	{
	cout<<"\n 1----------->time addition"<<"\n 2------------>time subtraction"<<"\n 3---------->time increment"<<"\n 4----------->time decrement"<<"\n 5----------->exit"<<"\n enter your choice : ";
	cin>>ch;
		switch(ch)
		{
			case 1:		
				t3=t1+t2;
				t3.display();
				break;
			case 2:
				t3=t1-t2;
				t3.display();
				break;
			case 3:
				do
				{
				cout<<"\n 1------------>pre increment"<<"\n 2------------->post increment"<<"\n 3--------->exit"<<"\n enter your choice : ";
				cin>>sel;
					switch(sel)
					{		
						case 1:
							cout<<"\n Before pre increment \n t1 = ";
							t1.display();
							t4=++t1;
							cout<<"\n After pre increment :";
							cout<<"\n t1 = ";
							t1.display();
							cout<<"\n t4 = ";
							t4.display();
							break;
						case 2:
							cout<<"\n Before post increment \n t1 =";
							t1.display();
							t5=t1++;						
							cout<<"\n After post increment :";
							cout<<"\n";
							t1.display();
							t4.display();
							break;
						case 3:
							break;
					}
				}while(sel!=3);
				break;
			case 4:
				do
				{
				cout<<"\n 1------------>pre decrement"<<"\n 2------------->post decrement"<<"\n 3--------->exit"<<"\n enter your choice : ";
				cin>>sel;
					switch(sel)
					{		
						case 1:
							cout<<"\n Before pre decrement \n t1 =";
							t1.display();
							t4=--t1;
							cout<<"\n After pre decrement :";
							cout<<"\n";
							t1.display();
							t4.display();
							break;
						case 2:
							cout<<"\n Before post decrement \n t1 =";
							t1.display();
							t5=t1--;						
							cout<<"\n After post decrement :";
							cout<<"\n";
							t1.display();
							t4.display();
							break;
						case 3:
							break;
					}
				}while(sel!=3);
				break;
			case 5:
				break;
			default:
				cout<<"\n wrong input";
				break;
		}
	}while(ch!=5);
return 0;
}





