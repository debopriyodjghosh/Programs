/*Iron Manufacturing Company Maintain
its data about all of its Employee including
Name, ID, Age, Pincode, Salary. Sort The Data
by Pincode*/

#include<iostream>
using namespace std;

class employee_data
{
    char name[20];
    int id,age,pincode;
    float salary;
    public:
        void getdata()
        {
            cout<<"\nEnter Name: ";
            cin>>name;
            cout<<"\nEnter ID, Age, Pincode and Salary: ";
            cin>>id>>age>>pincode>>salary;
        }
        void display()
        {
            cout<<id<<"  "<<pincode<<"  "<<salary<<"  "<<name<<"("<<age<<")\n";
        }
        friend int pin_max(employee_data a,employee_data b);
};

int pin_max(employee_data a,employee_data b)
        {
            if(a.pincode>b.pincode)
                return 1;
            else
                return 0;
        }

/*void bubble(employee_data ob, int n)
{
    int m;
    employee_data temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n-i;j++)
        {
            m=pin_max(ob[j],ob[j+1]);
            if(m==1)
            {
                temp=ob[j];
                ob[j]=ob[j+1];
                ob[j+1]=temp;
            }
        }
    }
    cout<<"\nData after sorting.";
    cout<<"\n ID  Pincode Salary    Name (Age) \n";
    for(i=o;i<n;i++)
        ob[i].display();
}*/

void menu()
{
    int n,i,j;
    employee_data temp;
    employee_data ob[10];
    cout<<"Enter How Many data you want to add: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        ob[i].getdata();
    }
    cout<<"\nData before sorting.";
    cout<<"\n ID  Pincode Salary    Name (Age) \n";
    for(i=0;i<n;i++)
        ob[i].display();
    //bubble(& ob[10],n-1);
    int m;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n-i;j++)
        {
            m=pin_max(ob[j],ob[j+1]);
            if(m==1)
            {
                temp=ob[j];
                ob[j]=ob[j+1];
                ob[j+1]=temp;
            }
        }
    }
    cout<<"\nData after sorting.";
    cout<<"\n ID  Pincode Salary    Name (Age) \n";
    for(i=0;i<n;i++)
        ob[i].display();
}

int main()
{
    menu();
}
