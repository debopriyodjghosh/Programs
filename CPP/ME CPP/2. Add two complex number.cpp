/*Write a program to Add Two Complex Number*/

#include<iostream>
using namespace std;

class comp
{
    private:
        int a,b;
    public:
        void input()
        {
            cout<<"Enter the Real and Imaginary Part:";
            cin>>a>>b;
        }
        void display()
        {
            if(b<0)
                cout<<"\nThe Number is "<<a<<"-i"<<b*(-1);
            else
                cout<<"\nThe Number is "<<a<<"+i"<<b;
        }
        comp add(comp x,comp y)
        {
            comp temp;
            temp.a=x.a+y.a;
            temp.b=x.b+y.b;
            return temp;
        }
};

int main()
{
    comp n1,n2,n3;
    /*Input Block*/
    n1.input();
    n2.input();
    n3=n3.add(n1,n2);
    /*Output Block*/
    n1.display();
    n2.display();
    n3.display();
    return 0;
}
