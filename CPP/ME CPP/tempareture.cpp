#include<iostream>
using namespace std;
class result
{
	private:
		      int year[2][12];
    public:
	          void getdata();
	          void averagehigh();
	          void averagelow();
	          void indexhigh();
	          void indexlow();

};
void result :: getdata()
{
	  int i=0,j;
	  cout<<"\nEnter highest temperature of every month of the year : ";
	  	for(j=0;j<12;j++)
	  	{
	  		cout<<"\nEnter value :";
	  		cin>>year[i][j];
		}
		i=1;
		cout<<"\nEnter lowest temperature of every month of the year : ";
	  	for(j=0;j<12;j++)
	  	{
	  		cout<<"\nEnter value :";
	  		cin>>year[i][j];
		}
}
void result :: averagehigh()
{
	float sum=0;
	int i=0,j;
	for(j=0;j<12;j++)
	{
		sum=sum+year[i][j];
	}
	float avg=sum/12;
	cout<<"\nAverage of high temperature = "<<avg;
}

void result :: averagelow()
{
	float sum=0;
	int i=1,j;
	for(j=0;j<12;j++)
	{
		sum=sum+year[i][j];
	}
	float avg=sum/12;
	cout<<"\nAverage of low temperature = "<<avg;
}
void result :: indexhigh()
{
	float max=year[0][0];
	int i=0,k;
	for(int j=1;j<12;j++)
	{
		if(max<year[i][j])
		{
		   k=j;
		   max=year[i][j];
		}
	}
	cout<<"\n The highest temperature is "<<max<<" at "<<k<<" month of the year.";
}
void result :: indexlow()
{
	float max=year[1][0];
	int i=1,k;
	for(int j=1;j<12;j++)
	{
		if(max>year[i][j])
		{
		   k=j;
		   max=year[i][j];
		}
	}
	cout<<"\n The lowest temperature is "<<max<<" at "<<k<<" month of the year.";
}
int main()
{
	result ob;
	ob.getdata();
	ob.averagehigh();
	ob.averagelow();
	ob.indexhigh();
	ob.indexlow();
    return 0;
}
