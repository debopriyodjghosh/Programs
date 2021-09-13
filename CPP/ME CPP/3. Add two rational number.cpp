/*Write a program to Add Two Rational Number*/

#include<iostream>
using namespace std;

class rational
{
    private:
        int n,d;
    public:
        void input();
        void display();
        rational add(rational);
        int hcf(int,int);
};

void rational::input()
{
    cout<<"Enter the Numerator and Denominator Part:";
    cin>>n>>d;
}

void rational::display()
{
    int c;
    c=hcf(n,d);
    n=n/c;
    d=d/c;
    cout<<"\nThe Number is "<<n<<"/"<<d;
}

int rational::hcf(int x,int y)
{
    if(y==0)
        return x;
    else
        return hcf(y,x%y);
}

rational rational::add(rational x)
{
    rational temp;
    temp.n=(n*x.d)+(x.n*d);
    temp.d=d*x.d;
    return temp;
}

int main()
{
    rational n1,n2,n3;
    /*Input Block*/
    n1.input();
    n2.input();
    n3=n1.add(n2);
    /*Output Block*/
    n1.display();
    n2.display();
    n3.display();
    return 0;
}

