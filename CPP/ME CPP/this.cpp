#include<iostream>
using namespace std;
#include<conio.h>
class object
{
char ch;
int n;
float ft;
public:
object()
{
cout<<"\nCreating an object of this class...";
ch = '\0';
n = 0;
ft = 0.0;
}
object(char a, int b, float c)
{
cout<<"\n\nCreating an object of this class...";
ch = a;
n = b;
ft = c;
}
void showdata();
};
void object::showdata()
{
cout<<"\nValues of this object are: "<<ch<<" "<<n<<" "<<ft;
cout<<"\n\nStart address of this object is: "<<this;
cout<<"\nEnd address of this object is: "<<(this+sizeof(object)-1);
cout<<endl;
}
int main()
{
object obj1;
obj1.showdata();
object obj2('*', 7, 14.0);
obj2.showdata();
getch();
}

