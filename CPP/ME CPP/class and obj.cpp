/*Write a program to Add Two Private Object Number*/
#include<iostream>
using namespace std;
class number
{
    private:
        int a;
    public:
        void input()
        {
            cout<<"Enter the Number:";
            cin>>a;
        }
        void display()
        {
                cout<<"\nThe Number is "<<a;
        }
        void add(number x,number y)
        {
            a=x.a+y.a;
        }
};

int main()
{
    number n1,n2,n3;
   				 /*Input Block*/
    n1.input();
    n2.input();
    n3.add(n1,n2);
    /*Output Block*/
    n1.display();
    n2.display();
    n3.display();
    return 0;
}
