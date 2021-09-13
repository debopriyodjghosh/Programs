

        /*Complex Number Calculator using Menu Base Program (Operator Overloading)*/

#include<iostream>
using namespace std;
class com;
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

        friend com add(com,comp);
};

class com{
int r1,jg;
public:
    void getdata()
        {
            cout<<"\nEnter Real & Imaginary Part:";
            cin>>r1>>jg;
        }
       void display()
        {
            if(jg<0)
                cout<<r1<<"-i"<<jg*(-1);
            else
                cout<<r1<<"+i"<<jg;
        }
         friend com add(com,comp);
        };

com add(com a,comp b)
        {
            a.r1=a.r1+b.r;
            a.jg=a.jg+b.ig;
            return a;
        }
int main()
{
 comp a,b,c;
    com m,n;
    char p='Y';
    int ch;
    do
    {
        cout<<"\n    1.Addition using operator overloading"<<endl;
        cout<<"\n    2.Addition using friend function"<<endl;
        cin>>ch;
        switch(ch)
        {
            case 1:
                  cout<<"\nEnter the 1st Number:";
                    a.getdata();
                    cout<<"\nEnter the 2nd Number:";
                    b.getdata();
                c=a+b;
            cout<<"\nThe result is ";
            c.display();
                break;
            case 2:
                cout<<"\nEnter the 1st Number:";
                    m.getdata();
                    cout<<"\nEnter the 2nd Number:";
                    m.getdata();
                  n=add(m,a);
                n.display();
                break;

            default:
                cout<<"Wrong Choice!!";
        }
        cout<<"\nDo you want More ?(y/n): ";
        cin>>p;
        p=toupper(p);
        }while(p!='N');
}



