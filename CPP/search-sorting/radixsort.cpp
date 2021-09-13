#include<iostream>
using namespace std;
class radix
{
	private:
		int a[20],size;
	public:
        void input();
		void show();		
		void sort();
};
void radix ::input()
		{
			int b;
			cout<<"\nhow many value you want to insert :";
			cin>>size;
			for(int i=0;i<size;i++)
			{
				cout<<"\nenter value at a["<<i<<"]";
				cin>>b;
				a[i]=b;
			}
		}
void radix :: show()
		{
			
			for(int i=0;i<size;i++)
			{
				cout<<"\t"<<a[i];
			}
		}
void radix ::sort()
{
	  int bucket[10][size],bcount[10];
	  int i,j,k,r,pass,div=1,max,count=0;
	  max=a[0];
	  for(i=1;i<size;i++)
	  {
	  	 if(max<a[i])
	  	   max=a[i];
	  	   
	  }
	  while(max>0)
	  {
	  	  count++;
	  	  max=max/10;
	  }
	  for(pass=1;pass<=count;pass++)
	  {
	  	  for(k=0;k<10;k++)
	  	    bcount[k]=0;
	  	  for(i=0;i<size;i++)
			{
			    r=(a[i]/div)%10;
				bucket[r][bcount[r]++]=a[i];	
			}  
	       i=0;
		   for(k=0;k<10;k++)
		   {
		       for(j=0;j<bcount[k];j++)
			     a[i++]=bucket[k][j];	
		   }
		   div=div*10;		
	  }
}		
main()
{
	radix ob;
	ob.input();
	cout<<"\nArray before sorting : \n";
	ob.show();
	ob.sort();
	cout<<"\nArray after sorting : \n";
	ob.show();
}
