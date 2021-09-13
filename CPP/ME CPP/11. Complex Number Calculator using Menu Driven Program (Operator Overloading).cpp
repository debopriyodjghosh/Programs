/*Complex Number Calculator using Menu Base Program (Operator Overloading)*/

#include<iostream>
using namespace std;

class comp
{
    private:
        int r,ig;
    public:
        void getdata()
        {
            cout<<"\nEnter Real & Imaginary Part:";
            cin>>r>>ig;
        }
        void display()
        {
            if(ig<0)
                cout<<r<<"-i"<<ig*(-1);
            else
                cout<<r<<"+i"<<ig;
        }
        comp operator+(comp b)
        {
            comp temp;
            temp.r=r+b.r;
            temp.ig=ig+b.ig;
            return temp;
        }
        comp operator-(comp b)
        {
            comp temp;
            temp.r=r-b.r;
            temp.ig=ig-b.ig;
            return temp;
        }
        comp operator*(comp b)
        {
            comp temp;
            temp.r=(r*b.r)-(ig*b.ig);
            temp.ig=(r*b.ig)+(ig*b.r);
            return temp;
        }
};

class calculator
{
    private:
        comp a,b,c;
    public:
        void add()
        {
            c=a+b;
            cout<<"\nThe result is ";
            c.display();
        }
        void sub()
        {
            c=a-b;
            cout<<"\nThe result is ";
            c.display();
        }
        void mul()
        {
            c=a*b;
            cout<<"\nThe result is ";
            c.display();
        }
        void getdata()
        {
            cout<<"\nEnter the 1st Number:";
            a.getdata();
            cout<<"\nEnter the 2nd Number:";
            b.getdata();
        }
};

void menu()
{
    calculator ob;
    char c='Y';
    int ch;
    do
    {
        cout<<"\n\nCalculator Operations:";
        cout<<"\n    1.Addition";
        cout<<"\n    2.Subtraction";
        cout<<"\n    3.Multiplcation";
        cout<<"\n    4.Division\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                ob.getdata();
                ob.add();
                break;
            case 2:
                ob.getdata();
                ob.sub();
                break;
            case 3:
                ob.getdata();
                ob.mul();
                break;
            default:
                cout<<"Wrong Choise!!";
                menu();
        }
        cout<<"\nDo you want More ?(y/n): ";
        cin>>c;
        c=toupper(c);
        }while(c!='N');
}

int main()
{
    menu();
}



