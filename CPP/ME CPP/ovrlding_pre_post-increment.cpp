/*Overloading Of Pre & Post Increment*/

#include<iostream>
#include<conio.h>
using namespace std;
class num
{
    private:int a;
    public:
        void input()
        {
            cout<<"\n Enter the value of a=";
            cin>>a;
        }
        void show()
        {
            cout<<"\nThe value of a="<<a;
        }
        num operator++(int=0)           //Post Increment
        {
            num temp;
            temp.a=a++;
            return(temp);
        }
        num operator++()                //Pre Increment
        {
            num temp;
            temp.a=++a;
            return(temp);
        }
};
int main()
{
    num ob1,ob2,ob3;
    ob1.input();
    ob1.show();
    ob2=ob1++;                      //ob2=ob1.operator++();
    ob2.show();
    ob1.show();
    ob3=++ob1;                      //ob3=ob1.operator++();
    ob3.show();
    ob1.show();
    return(0);
}
