#include<iostream>
using namespace std;
template<class X>void swapp(X &a,X &b)
{
    X t;
    t=a;
    a=b;
    b=t;
}
template<class T>void bubble(T a[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            {
                swapp(a[j+1],a[j]);
            }
        }
    }
}
int main()
{
    int x[5]={10,50,20,80,30};
    float y[5]={2.5,1.6,9.2,4.3,1.1};
    bubble(x,5);
    bubble(y,5);
    cout<<"\nSorted X arrays:\n";
    for(int i=0;i<5;i++)
        cout<<x[i]<<""<<endl;
    cout<<"\nSorted Y arrays:\n";
    for(int j=0;j<5;j++)
        cout<<y[j]<<""<<endl;
    return 0;
}
