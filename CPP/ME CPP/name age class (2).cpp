#include<iostream>
#include<iomanip>
#include<string.h>
#include<stdlib.h>

using namespace std;

class person
{
    char name[10];
    int age;
    int sal;
    public:
        void getdata()
        {
        cout <<"\nenter name : ";
                cin >>name;
                cout <<"\n enter age : ";
                cin >>age;
                cout<<"\n enter salary : ";
                cin>>sal;
        }
        void display(void)
        {
            cout <<setw(10)<<"Name"<<setw(10)<<name<<endl
                <<setw(10)<<"Age "<<setw(10)<<age<<endl
                <<setw(10)<<"Salary"<<setw(10)<<sal<<endl;
        }
        int show(char *a)
        {
            if(strcmp(name,a)==0)
                return 1;
            else
                return 0;
        }
};

int main()
{
 person p[10];
 int n;
 cout <<"\nenter how many records : ";
            cin >>n;
            for(int i=0;i<n;i++)
            {
              p[i].getdata();
            }
             cout <<"\n*****the list is******\n";
            for(int i=0;i<n;i++)
            {
               p[i].display();
            }
char b[10];
cout << "Enter  the name to search: ";
cin >> b;
int k;
    for(int i=0;i<n;i++)
    {
        k = p[i].show(b);
        if (k==1)
        {
           cout<<"Found at position:"<<i+1;
           p[i].display();
           exit(1);
        }
    }
    if(k==0)
        cout << "Not found";
 return 0;
}
