/* PURE VIRTUAL FUNCTION - NUMBER COVERTION */

#include<iostream>
using namespace std;

class number
{
	protected : long int val;
	public :
		void setval(long int i)
		{
			val = i;
		}
		virtual void show() = 0 ;
};

class hextype : public number
{
	public :
		void show()
		{
			cout << "\nHexadecimal = " << hex << uppercase <<val;
		}
};


class octtype : public number
{
	public :
		void show()
		{
			cout << "\nOctal = " << oct << uppercase <<val;
		}
};


class bintype : public number
{
	public :
		void show()
		{
			int b[20],i=0,j=0;
			while(val > 0)
			{
				b[i]= val % 2;
				i++;
				val = val / 2;
				j++;
			}
			cout<<"\nBinary = ";
			for(i=j;i>=0;i--)
			{
				cout<<b[i];
		    }
		}  
};  

int main()
{
	number *p;
	hextype ob1;
	octtype ob2;
	bintype ob3;
	
	p = &ob1;
	p->setval(255);
	p->show();
	
	p = &ob2;
	p->setval(8);
	p->show();
	
	p  = &ob3;
	p->setval(8);
	p->show();
	
	return 0;
}
