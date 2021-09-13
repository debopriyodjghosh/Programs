#include<iostream>
using namespace std;
class mx{
    int a;
public:
    mx(){}
    mx(int b)
    {
        a=b;
    }
    void show()
    {
        cout<<" "<<a<<endl;
    }
    void operator++()
    {
        a=a+1;
    }
    mx operator++(int)
    {
        mx c;
        c.a=a;
        a=a+1;
        return c;
    }

};

int main()
{
    int b;
    cout<<"enter value:-";
    cin >> b;
    mx m(b),n;
    cout<<"\n overloading pre increment here : ";
    cout<<"the present value of a = ";
    m.show();
        ++m;
        cout<<"the present value of a after pre increment = ";
        m.show();

     cout<<"\n overloading post increment here : "<<endl;
    cout<<"the present value of a = ";
    m.show();
        n=m++;
        cout<<"the present value of a after post increment = ";
        n.show();
        cout<<"the present value of a: ";
        m.show();
}
