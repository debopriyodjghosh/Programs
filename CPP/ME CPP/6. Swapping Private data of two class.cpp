/*swapping private data of two classes*/

#include<iostream>
using namespace std;

class one;
class two
{
    private:
        int data;
    public:
        void getdata()
        {
            cout<<"\nEnter 2nd Number:";
            cin>>data;
        }
        friend void display(one,two);
        friend void swp(one &,two &);
};
class one
{
    private:
        int data;
    public:
        void getdata()
        {
            cout<<"\nEnter 1st Number:";
            cin>>data;
        }
        friend void display(one,two);
        friend void swp(one &,two &);
};

void display(one x,two y)
{
    cout<<"\n1st="<<x.data<<" and 2nd="<<y.data;
}

void swp(one & x,two & y)
{
   int temp;
   temp=x.data;
   x.data=y.data;
   y.data=temp;
}

int main()
{
    one x;
    two y;
    x.getdata();
    y.getdata();
    cout<<"\nValues before swapping";
    display(x,y);
    cout<<"\nValues after swapping";
    swp(x,y);
    display(x,y);
}
