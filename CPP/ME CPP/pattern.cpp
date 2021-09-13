#include<iostream.>
#include<string.h>
using namespace std;


class triangle
{
public:
void draw_triangle(int);
void draw_triangle(int,char);
void draw_triangle(char a[]);
};


void triangle::draw_triangle(int a)
{

for(int i=1;i<=a;i++)
{
for(int k=1;k<=a-i;k++)
{
cout<<" ";
}
for(int j=1;j<=2*i-1;j++)
{
cout<<"*";
}
cout<<endl;
}
}


void triangle::draw_triangle(int a,char z)
{
 for(int i=1;i<=a;i++)
{
for(int k=1;k<=a-i;k++)
{
cout<<" ";
}
for(int j=1;j<=i;j++)
{
cout<<z<<" ";
}
cout<<endl;
}
}




void triangle::draw_triangle(char z[])
{

    char a,n,d,i;
 for(int i=1;i<=a;i++)
{
for(int k=1;k<=a-i;k++)
{
cout<<" ";
}
for(int j=1;j<=2*i-1;j++)
{
cout<<'i'<<" "<<'n'<<" "<<'d'<<" "<<'i'<<" "<<'a'<<" ";
}
cout<<endl;
}
}


int main()
{
triangle t;
t.draw_triangle(10);
t.draw_triangle(5,'d');
t.draw_triangle(2);
return 0;
}
