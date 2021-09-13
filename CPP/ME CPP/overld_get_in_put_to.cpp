/*Overloading of Get in and Put to operator*/

#include<iostream>
#include<conio.h>
using namespace std;
class num
{
    private:int a;
    public:
        num()
        {
            a=0;
        }
        num(int x)
        {
            a=x;
        }
    friend ostream & operator<<(ostream &,num &);
    friend istream & operator>>(istream &,num &);
};
ostream & operator<<(ostream &dout,num &t)
{
    dout<<t.a;
    return(dout);
}
istream & operator>>(istream &din,num &t)
{
    din>>t.a;
    return(din);
}
int main()
{
    num ob;
    cout<<"\nEnter an Object\n";
    cin>>ob;                        //operator>>(cin,ob);
    cout<<"The value of object=\n"<<ob; //operator<<(cout,ob);
    return(0);
}
