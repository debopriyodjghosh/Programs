#include<iostream>
#include<fstream>

using namespace std;


class separate
{
private:
float a;
public:

void read();
void disp();
void sep();
};


void separate::read()
{
char c;

ofstream f;
f.open("d:\\info.txt",ios::app);
do
{
cout<<"\n enter number is:";
cin>>a;
f<<a<<endl;
cout<<"\n do you want to continue?(y/n)";
cin>>c;
}while(c!='n');
f.close();
}


void separate:: disp()
{
ifstream in("d:\\info.txt");
cout<<"\n"<<"the numbers are: ";
in>>a;
while(in)
{
cout<<"\n"<<a;
in>>a;
}
in.close();
}

void separate::sep()
{
ofstream t;
t.open("d:\\f.txt");
ofstream x;
x.open("d:\\f1.txt");

ifstream in ("d:\\info.txt");
in>>a;
while(in)
{
int b=(int)a;
if(a==b)
    t<<a<<endl;
else
    x<<a<<endl;
in>>a;
}
t.close();
in.close();
x.close();
}



int main()
{
int v;

separate s;

do
{
cout<<"\n the menu(press 4 to exit):";
cout<<"\n 1.read\n";
cout<<"\n 2.disp\n";
cout<<"\n 3.seperate\n";

cout<<"\n choice?";
cin>>v;

switch(v)
{
case 1:
s.read();
break;
case 2:
s.disp();
break;
case 3:
s.sep();
break;
}
}while(v!=4);

return 0;

}






