#include<iostream>
using namespace std;
#define SIZE 5
class queue
{
    int front,rear,arr[SIZE];
public:
    queue()
    {
        front=0;
        rear=0;
    }
    void insert(int )
    {
        int temp=rear,item;
        rear=(rear+1)%SIZE;
        if(front==rear)
        {
            cout<<"\n QUEUE IS FULL";
            rear=temp;
        }
        else
        {
            arr[rear]=item;
        }
        return;
    }
    int deletion(void)
    {
        if(front==rear)
        {
            cout<<"\n QUEUE IS EMPTY";
            return -99999;
        }
        else
        {

            cout<<"\n front="<<front<<"REAR="<<rear;
            int item=arr[front];
            front=(front+1)%SIZE;
            return item;
        }
    }




};
main()
{
    queue q;
    int ch;
    do
    {
        cout<<"\nEnter your choice: \n1.INSERT\n2.DELETE\n3.display\n4.EXIT";
        cin>>ch;
        switch(ch)
        {
        case 1:
            int x;
            cout<<"ENTER the item: ";
            cin>>x;
            q.insert(x);
            break;
        case 2:
            int d;
            d=q.deletion();
            cout<<"The deleted item is "<<d;
            break;
        case 3:
            break;
        default:
            cout<<"\n WRONG CHOICE: ";
            break;
        }
    }while(ch!=3);
}


