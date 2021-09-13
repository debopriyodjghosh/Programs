/*Create two classes called 'AC' and 'Remote' as per following constrains:
1. Make them mutual friends.
2. Add a state variable member to the 'Remote' class that describes whether the remote control is in 'normal' or 'interactive' mode.
3. Add a member method to the 'Remote' class to display the mode.
4. Provide the 'AC' class with a member method for toggling the new 'Remote' class member. This method works only if the 'AC' is in 'ON' state. 
Write a C++ program to implement it.  
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
class Remote
{
	int mode;
	public:
		void display()
		{
			if(mode==1)
			cout<<"\n\nThe Remote is working in 'Interactive Mode'.";
			else
			cout<<"\n\nThe Remote is working in 'Normal Mode'.";
		}
	friend class AC;
};
class AC
{
	int status;
	public:
		friend class Remote;
		void getstate()
		{
			int ch;
			cout<<"1.ON AC\n2.OFF AC";
			cout<<"\n\nEnter your choice:";
			cin>>ch;
			switch(ch)
			{
				case 1:status=1;
				break;
				case 2:status=0;
				break;
				default:cout<<"\nSelection caused an Eroor,due to invalid option selection!"<<"\n"<<"AC IS TURNED OFF!!";
				status=0;
				break;	
			};
		}
		void toggle(Remote &r)
		{
			if(status==1)
			{
				if(r.mode==2)
					r.mode=1;
				else
					r.mode=2;
			}
			else
				cout<<"\n\nAC is off!!"<<"\n"<<"\nToggling not possible!!";
		}
};
int main()
{
	AC a;
	Remote r;
	int c;
	do
	{
		a.getstate();
		a.toggle(r);
		r.display();
		cout<<"\nDo you want to continue?Press 1.....:";
		cin>>c;
	}while(c==1);
	return 0;
}
