#include<iostream>
using namespace std;
class pattern
{
	private: int n;
	public: void input()
	        {
	        	cout<<"\n Enter the number of lines : ";
	        	cin>>n;
			}
			void pascal()
			{
				int i,j,k,t,p;
				cout<<"\n The Pascal Triangle is as follows : ";
				for(i=0;i<=n;i++)
				{
					p=1;
					cout<<"\n";
					for(j=0;j<=40-2*i;j++)
					{
						cout<<" ";
					}
					for(k=0;k<i+1;k++)
					{
						if(k==0 || k==i)
						  cout<<"1   ";
						else
						{

						  t=(i-k)+1;
						  p=(t*p)/k;
						  cout<<p<<"   ";
					    }
					}
				}
			}
};
int main()
{
	pattern ob;
	ob.input();
	ob.pascal();
	return 0;
}
