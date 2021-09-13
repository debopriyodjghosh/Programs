#include<iostream>
#include<string.h>
using namespace std;


class aeroplane
{
char seat[13][6];
int row_index,column_index ;
int ttype;
public:
    aeroplane();
void ticket_type();
void desireseat();
void showall();
};


aeroplane::aeroplane()
{
row_index=0;
column_index=0;
for(int i=0;i<13;i++)
    for(int j=0;j<6;j++)
      seat[i][j]='.';
}


void aeroplane::ticket_type()
{
int y;
cout<<"\n 1.press for first class  2.press  2   3.press 3    4.exit";
cout<<"\n enter your choice";
cin>>ttype;
}

void aeroplane::desireseat()
{
    cout<<"\n row=";
    cin>>row_index;
    cout<<"\n column = ";
    cin>>column_index;
    int flag=0;
    if(ttype==1)
    {
        if(row_index>=0 && row_index<=1)
        {
            if(seat[row_index][column_index]!='x')
            {
                flag=1;
            }
            else
            {
                cout<<"\n not available";
            }
        }
        else
            cout<<"\n invalid row ";
    }
    else if(ttype==2)
    {
        if(row_index>=2 && row_index<=6)
        {
            if(seat[row_index][column_index]!='x')
            {
                flag=1;
            }
            else
            {
                cout<<"\n not available";
            }
        }
        else
            cout<<"\n invalid row ";
    }


    else
    {
if(row_index>=7 && row_index<=12)
        {
            if(seat[row_index][column_index]!='x')
            {
                flag=1;
            }
            else
            {
                cout<<"\n not available";
            }
        }
        else
            cout<<"\n invalid row ";
    }


    if(flag==1)
      seat[row_index][column_index]='x';
}

void aeroplane::showall()
{
for(int i=1;i<13;i++)
{
for(int j=1;j<6;j++)
{
cout<<seat[i][j]<<"  ";
}
cout<<"\n";
}
}



main()
{
    int a,b,c;
    aeroplane w;
    do
    {
        cout<<"\n 1. book the seat";
        cout<<"\n 2. show  ";
        cout<<"\n 3. exit";
        cout<<"\n choice ?";
        cin>>a;
        switch(a)
        {
        case 1:
            w.ticket_type();
            w.desireseat();
            break;
        case 2:
            w.showall();
            break;
        }
    }while(a!=3);
}
