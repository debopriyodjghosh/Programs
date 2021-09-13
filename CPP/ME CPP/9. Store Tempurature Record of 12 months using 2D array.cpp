/* Store Tempurature Record of 12 months using 2D array */

#include<iostream>
using namespace std;

class temp
{
    private:
        int t[2][12];
        char month[12][4]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
    public:
        void getdata()
        {
            for(int i=0;i<12;i++)
            {
                cout<<"\nEnter Data for "<<i+1<<"th month : ";
                for(int j=0;j<2;j++)
                {
                    if(j==0)
                        cout<<"\nHigh: ";
                    else
                        cout<<"\nLow: ";
                    cin>>t[j][i];
                }
            }
        }
        void display()
        {
            cout<<"\nMonth:";
            for(int i=0;i<12;i++)
                cout<<"  "<<month[i];
            for(int i=0;i<2;i++)
            {
                if(i==0)
                    cout<<"\nHigh :";
                else
                    cout<<"\nLow  :";
                for(int j=0;j<12;j++)
                    cout<<"   "<<t[i][j];
                cout<<endl;
            }
        }
        void AvgHigh();
        void AvgLow();
        void InHigh();
        void InLow();
};

void temp::AvgHigh()
{
    int sum=0;
    for(int i=0;i<12;i++)
        sum=sum+t[0][i];
    int avg=sum/12;
    cout<<"The Average High Temperature is "<<avg;
}

void temp::AvgLow()
{
    int sum=0;
    for(int i=0;i<12;i++)
        sum=sum+t[1][i];
    int avg=sum/12;
    cout<<"The Average Low Temperature is "<<avg;
}

void temp::InHigh()
{
    int loc,high=t[0][0];
    for(int i=0;i<12;i++)
    {
        if(t[0][i]>high)
        {
            high=t[0][i];
            loc=i;
        }
    }
    cout<<"The Highest Temperature is "<<high<<" in "<<month[loc];
}

void temp::InLow()
{
    int loc,low=t[1][0];
    for(int i=0;i<12;i++)
    {
        if(t[1][i]<low)
        {
            low=t[1][i];
            loc=i;
        }
    }
    cout<<"The Lowest Temperature is "<< low<<"in "<<month[loc];
}

void menu()
{
    int ch;
    char c;
    temp ob;
    do
    {
        cout<<"\n\n ENTER YOUR CHOISE  ";
        cout<<"\n 1. Input Data";
        cout<<"\n 2. Display";
        cout<<"\n 3. Find the Average High";
        cout<<"\n 4. Find the Average Low";
        cout<<"\n 5. Index High";
        cout<<"\n 6. Index Low";
        cout<<"\n 7. Quit....\n";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cout<<"Enter the Data:\n";
                ob.getdata();
                break;
            case 2:
                ob.display();
                break;
            case 3:
                ob.AvgHigh();
                break;
            case 4:
                ob.AvgLow();
                break;
            case 5:
                ob.InHigh();
                break;
            case 6:
                ob.InLow();
                break;
            case 7:
                break;
            default:
                cout<<"Wrong Choise!!";
                menu();
        }
        cout<<"\nDo you want to Continue ?(y/n): ";
        cin>>c;
        c=toupper(c);
        }while(c!='N');

}
int main()
{
    menu();
}
