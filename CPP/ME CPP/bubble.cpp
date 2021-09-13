#include<iostream>
using namespace std;

class array
{
private:
int n,a[20];
public:
array();
array(int);
void read();
void display();
void bubble_sort();
};

array::array()
{
n=5;
}

array::array(int a)
{
n=a;
}


void array::read()
{
for(int i=0;i<n;i++)
{
cout<<"a["<<i<<"]= ";
cin>>a[i];
}
}

void array::display()
{
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}

void array::bubble_sort()
{
for(int i=1;i<n;i++)
{
for(int j=0;j<n-i;j++)
{
if(a[j]>a[j+1])
{
int t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
}

int main()
{
int m;
cout<<"\n enter array range: ";
cin>>m;
array x(m);
x.read();
x.bubble_sort();
x.display();
return 0;
}
