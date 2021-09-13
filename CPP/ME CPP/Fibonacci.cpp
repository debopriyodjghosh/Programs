/*Fibonacci Series*/

#include<iostream>
#include<conio.h>
using namespace std;
class fibonacci
{
    private:int a,b;
    public:
        fibonacci()
        {
            a=0;
            b=1;
        }
        void series(int x)
        {
            int c;
            for(int i=1;i<=x;i++)
            {
                cout<<" "<<a;
                c=a+b;
                cout<" "<c;
                a=b;
                b=c;
            }
        }
};
int main()
{
    fibonacci ob;
    int n;
    cout<<"\nHow many number\n";
    cin>>n;
    ob.series(n);
    return(0);
}
