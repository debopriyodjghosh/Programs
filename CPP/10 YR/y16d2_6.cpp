#include<iostream>
#include<math.h>
using namespace std;
class prime
{
	int n;
	public:
		int getint()
		{
			cout<<"\nEnter an integer between 1 and 1000:";cin>>n;
			while(n<=1 || n>=1000)
			{
				cout<<"\nNumber should be between 1 and 1000!";
				cout<<"\n\nEnter an integer between 1 and 1000:";cin>>n;
			}
			return n;
		}
		void checkprime(int n)
		{
			int i;
			int s=sqrt(n);
			for(i=2;i<=s && s<32;i++)
			{
				if(n%i==0)
				{
					cout<<"\n"<<n<<" is not prime!";
					break;
				}				
			}
			if(i>s)
			cout<<"\n"<<n<<" is prime!";
		}
};
int main()
{
	prime p;
	int n=p.getint();
	p.checkprime(n);
	return 0;
}
