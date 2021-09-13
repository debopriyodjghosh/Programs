#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b,c,n;
    a=0;b=1;
    cout <<"enter how many nos: ";
    cin >>n;
    cout <<"\n the fibbonacci sequence is : \n ";
    cout <<"\t"<<a<<"\t"<<b;
    for(int i=0;i<n;i++)
    {
        c=a+b;
        cout <<"\t"<<c;
        a=b;b=c;
    }
    getch();
}
