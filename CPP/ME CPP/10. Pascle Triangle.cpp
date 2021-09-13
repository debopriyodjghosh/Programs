/* Pascle Triangle */

#include<iostream>
using namespace std;

class triangle
{
    int n;
    public:
        void getdata()
        {
            cout<<"\n\t\t\tTHE COEFFICIANT OF(a+b)^n\n";
            cout<<"\nHERE n = ";
            cin>>n;
        }
        void display()
        {
            for(int i=0;i<=n;i++)
            {
               	int p=1;
            	for(int j=0;j<=n-i;j++)
                    cout<<"   ";
            	for(int k=0;k<i+1;k++)
                {
                    if(k==0||k==i)
                        cout<<"     "<<1;
                    else
		            {
                        p=p*(i-k+1)/k;
	 		            cout<<"     "<<p;
                    }
	            }
                cout<<endl;
            }
        }
};

int main()
{
    triangle ob;
    ob.getdata();
    ob.display();
    return 0;
}

