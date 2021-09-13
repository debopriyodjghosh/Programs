#include<iostream>
using namespace std;
#define MAX 10
template<class T>
class stck
{
private:
    T a[MAX];
    int top;
public:
    stck()
    {
        top=-1;
    }
    void push(T);
    T pop();
};
template<class T>void stck<T>::push(T ob)
{
    if(top==MAX-1)
    {
        cout<<"\nStack is full\n";
        return;
    }
    top++;
    a[top]=ob;
}
template<class T>T stck<T>::pop()
{
    T item;
    if(top==-1)
    {
        cout<<"\nStack is Empty\n";
        return NULL;
    }
    item=a[top];
    top--;
    return item;
}
int main()
{
    stck<int>ob1;
    ob1.push(10);
    ob1.push(20);
    int s=ob1.pop();
    cout<<"\nItem popped="<<s<<"\n";
    stck<char>ob2;
    ob2.push('A');
    ob2.push('B');
    char c=ob2.pop();
    cout<<"\nItem popped="<<c<<"\n";
    return 0;
}
