#include<iostream>
#include<stdlib.h>
using namespace std;
#define size 4
template<class t>

class queue1
{
        t arr[size];
        int f,r;
    public:
        queue1()
        {
            r=-1;f=-1;
        }
        void insert1()
        {
            int item;
            if(r==size-1)
                cout<<"queue is full";
            else if(r==-1 && f==-1)
            {
                f=0;
                cout<<"enter the value: ";
                cin>>item;
                r++;
                arr[r]=item;
            }
            else
            {

                cout<<"enter the value: ";
                cin>>item;
                r++;
                arr[r]=item;
            }

        }
        void delete1()
        {
            if(f>r)
                cout<<"queue is empty: ";
            else
            {
                cout<<"possition="<<f<<"  data= "<<arr[f];
                f++;
            }
        }
        void display()
        {
            for(int i=f;i<=r;i++)
            cout<<"\npossition="<<i<<"data= "<<arr[i];
        }

};
int main()
{
    int ch;
    queue1<int> q;
    while(1)
    {
        cout<<"\nEnter your choice:\n1>INSERT\n2>DELETE\n3>DISPLAY\n4>EXIT";
        cin>>ch;
        switch(ch)
        {
        case 1:
            q.insert1();
            break;
        case 2:
            q.delete1();
            break;
        case 3:
            q.display();
            break;
        case 4:
            exit(0);
        default:
            cout<<"you enter wrong choice:";

        }
    }
}
