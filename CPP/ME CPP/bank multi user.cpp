#include<iostream>
using namespace std;
class bankac{
    char name[20];
    char tpac[2];
    int bal;
    int acno;
public:

        int con()
        {
          return acno;
        }
        void assignvalue()
        {
            cout<<"\n Enter customer name : ";
            cin>>name;
            cout<<"\n Enter account number : ";
            cin>>acno;
            cout<<"\n Enter type of Account (SB/RD/CA/OTH) : ";
            cin>>tpac;
            cout<<"\n enter the initial balance : ";
            cin>>bal;
        }

        void deposit()
        {
            int dep;
            cout<<"\n Enter the amount to be deposited: ";
            cin>>dep;
            bal=bal+dep;
            cout<<"\n Your money deposit successful\n";
            cout<<"\n your new balance is : "<<bal;
        }

        void showbal(void)
        {
            cout<< "\n Welcome "<<name<<endl;
            cout<<" Your account no : "<<acno<<endl;
            cout<<" Account type : "<<tpac<<endl;
            cout<<" The available balance in your account is : "<<bal;

        }

        void withdrawl()
        {
            showbal();
            int wit;
            cout<<"\n\n\n Enter your amount to be withdrawal : ";
            cin>>wit;
           bal=bal-wit;
            cout<<"\n Your money withdrawal successful \n";
            cout<<"\n your new balance is : "<<bal;
        }

};


int main()
{
    bankac p[10];
    int x,n=0,i,k,a,b,q,y;
    static int j=0;

        do
        {
        cout<<"\n\n\n\t\t*** Welcome to DJ bank ***\t\t\n\n 1. Create new account\n2. Display name and balance\n3.Deposit money\n4.Withdraw money\n5.exit\n\nEnter your choice : ";
        cin>>x;
        switch(x)
        {
            case 1:cout<<"\n how many customer ? ";
                    cin>>y;
                    for(i=n;i<n+y;i++)
                    {
                       p[i].assignvalue();
                    }
                    n=n+y;
                    break;

            case 2: k=0;
                    cout<<"\n Enter account number : ";
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
                    cout<<"\n Account not found";
                   }
                    break;

            case 3:k=0;
                    cout<<"\n Enter account number : ";
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
                    cout<<"\n Account not found";
                   }
                    break;


            case 4: k=0;
                    cout<<"\n Enter account number : ";
                    cin>>b;
                    for(i=0;i<n;i++)
                    {
                       if(b==p[i].con())
                       {
                         p[i].withdrawl();
                         k=1;
                       }
                    }
                    if(k==0)
                   {
                    cout<<"\n Account not found";
                   }
                    break;
        }
    }while(x!=5);
    return 0;
}
