/*Calculator using Menu Base Program*/

#include<iostream>
using namespace std;

class calculator
{
    private:
        float a,b,c;
    public:
        void getdata()
        {
            cout<<"Enter the numbers:";
            cin>>a>>b;
        }
        void add();
        void sub();
        void mul();
        void div();
};

void calculator::add()
{
    float c=a+b;
    cout<<"The Value is "<<c<<endl<<endl;
}
void calculator::sub()
{
    float c=a-b;
    cout<<"The Value is "<<c<<endl<<endl;
}
void calculator::mul()
{
    float c=a*b;
    cout<<"The Value is "<<c<<endl<<endl;
}
void calculator::div()
{
    float c=a/b;
    cout<<"The Value is "<<c<<endl<<endl;
}

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
            case 4:
                ob.getdata();
                ob.div();
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
