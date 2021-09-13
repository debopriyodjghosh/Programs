/*Write a program to Add Two Rational Number*/

#include<iostream>
using namespace std;

class scale
{
    private:
        int f,i;
    public:
        void getdata()
        {
            cout<<"Enter Foot and Inches:";
            cin>>f>>i;
        }
        void display()
        {
            cout<<"\nThe value is "<<f<<"'"<<i<<"''";
        }
        scale add(scale);
};

scale scale::add(scale x)
{
    scale temp;
    temp.i=i+x.i;
    temp.f=temp.i/12;
    temp.i=temp.i%12;
    temp.f=temp.f+f+x.f;
    return temp;
}

int main()
{
    scale n1,n2,n3;
    /*Input Block*/
    n1.getdata();
    n2.getdata();
    n3=n1.add(n2);
    /*Output Block*/
    n1.display();
    n2.display();
    n3.display();
    return 0;
}

