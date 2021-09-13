#include<iostream>
using namespace std;
class pascal
{
	int r;
	public:
		void setrow();
		void getnerate();
};
void pascal::setrow()
{
	cout<<"\nEnter number of rows:";
	cin>>r;
}
void pascal::getnerate()
{
	int sp=(r*2-2)/2;
	cout<<endl<<endl;
	int temp[20],buff[20];
	for(int j=1;j<=r;j++)
	{
		for(int i=1;i<=sp;i++)
		{
			cout<<" ";
		}
		for(int i=1;i<=j;i++)
		{
			if(i==1)
			{
				cout<<"1 ";
				buff[i-1]=1;
				if(j==1)
				cout<<endl;
			}
			if(i!=1 && i!=j)
			{
				cout<<temp[i-2]+temp[i-1]<<" ";
				buff[i-1]=temp[i-2]+temp[i-1];
			}
			if(i!=1 && i==j)
			{
				cout<<"1";
				cout<<endl;
				buff[i-1]=1;
				buff[i]='\0';
			}
		}
		for(int k=0;k<j;k++)
		{
			temp[k]=buff[k];
		}
		buff[0]='\0';
		sp--;
	}	
}
int main()
{
	pascal p;
	p.setrow();
	p.getnerate();
	return 0;
}

