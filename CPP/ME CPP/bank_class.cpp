#include<iostream>
using namespace std;
class bankac
{
private:
    char name[20];
    char tpac[3];
    int bal;
    int acno;
public:
    int con()
    {
        return acno;
    }
    void assignvalue()
    {
        cout<<"\nEnter customer name:";
        cin>>name;
        cout<<"\n Enter Ac. no:";
        cin>>acno;
        cout<<"\nEnter type of Ac.(SB/RD/CA/OTH):";
        cin>>tpac;
        cout<<"\nEnter bal:";
        cin>>bal;
    }
    void deposit()
    {
        int dep;
        cout<<"\nEnter the amount to be deposited:";
        cin>>dep;
        bal=bal+dep;
        cout<<"\nNew bal:"<<bal;
    }
    void showbal()
    {
        cout<<"\nWelcome"<<name<<endl;
        cout<<"Your Ac. no:"<<acno<<endl;
        cout<<"Ac. type:"<<tpac<<endl;
        cout<<"Available bal:"<<bal;
    }
    void withdraw()
    {
        showbal();
        int wit;
        cout<<"\nEnter your amount to be withdrawal";
        cin>>wit;
        bal=bal-wit;
        cout<<"\nNew bal:"<<bal;
    }
};
int main()
{
    int x,i,k,a,b,q,y,n=0;
    static int j=0;
    bankac p[10];
    do
    {
        cout<<"\n1.Create Ac.\n2.Display name and bal\n3.Deposit money\n4.Withdraw money\n5.Exit\n Enter your Choice:";
        cin>>x;
        switch(x)
        {
        case 1:
            cout<<"\n How many account?";
            cin>>y;
            for(i=n;i<n+y;i++)
            {
                p[i].assignvalue();
            }
            n=n+y;
            break;
        case 2:
            k=0;
            cout<<"\nEnter Ac. no:";
            cin>>a;
            for(i=0;i<n;i++)
            {
                if(a==p[i].con())
                {
                    p[i].showbal();
                    k=1;
                }
            }
            if(k==0)
            {
                cout<<"Account not found:";
            }
            break;
        case 3:
            k=0;
            cout<<"\n Enter Ac. no:";
            cin>>q;
            for(i=0;i<n;i++)
            {
                if(q==p[i].con())
                {
                    p[i].deposit();
                    k=1;
                }
            }
            if(k==0)
            {
                cout<<"\nAccount not found";
            }
            break;
        case 4:
            k=0;
            cout<<"\nEnter Ac. no:";
            cin>>b;
            for(i=0;i<n;i++)
            {
                if(b==p[i].con())
                {
                    p[i].withdraw();
                    k=1;
                }
            }
            if(k==0)
            {
                cout<<"\nAccount not found";
            }
            break;
        case 5:
            cout<<"Thank you";
            break;
        default:
            cout<<"\nYou have entered a wrong key";
            break;
        }
    }while(x!=5);
    return(0);
}
