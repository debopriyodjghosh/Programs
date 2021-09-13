/*example of constractors */
#include<iostream>
using namespace std;
class complex
{
	private:int r,ig;
	public:
		    complex()  //default constractor
		    {
		    	r=1;
		    	ig=1;
			}
			complex(int a,int b)
			{
				r=a;       //parametric constractor
				ig=b;      //overloaded constractor
			}
			void input()
			{
				cout<<"\nEnter real and imaginary part :";
				cin>>r>>ig;
			}
			void show()
			{
				if(ig<0)
					cout<<"\nThe number ="<<r<<"-i"<<ig*(-1)<<"\n";
				else
					cout<<"\nThe number ="<<r<<"+i"<<ig<<"\n";
			}
			void add(complex t1,complex t2)
			{
				r=t1.r + t2.r;
				ig=t1.ig + t2.ig;
			}
			
};
int main()
{
	complex ob1;   //invokes default constractor
	ob1.show();
	complex ob2(5,7);   //invokes parametric constractor
	complex ob3=complex(6,8);  //invokes parametric or overloaded constractor
	ob2.show();
	ob3.show();
	ob1.input();
	ob1.show();
	complex ob4;
	ob4.add(ob1,ob2);
	ob4.show();
	
	return 0;
	
}
